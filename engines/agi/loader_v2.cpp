/* ScummVM - Graphic Adventure Engine
 *
 * ScummVM is the legal property of its developers, whose names
 * are too numerous to list here. Please refer to the COPYRIGHT
 * file distributed with this source distribution.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include "common/textconsole.h"

#include "agi/agi.h"
#include "agi/words.h"

namespace Agi {

int AgiLoader_v2::detectGame() {
	if (!Common::File::exists(LOGDIR) ||
	        !Common::File::exists(PICDIR) ||
	        !Common::File::exists(SNDDIR) ||
	        !Common::File::exists(VIEWDIR))
		return errInvalidAGIFile;

	// Should this go above the previous lines, so we can force emulation versions
	// even for AGDS games? -- dsymonds
	if (_vm->getFeatures() & GF_AGDS)
		_vm->setVersion(0x2440);   // ALL AGDS games built for 2.440

	return errOK;
}

int AgiLoader_v2::loadDir(AgiDir *agid, const char *fname) {
	Common::File fp;
	uint8 *mem;
	uint32 flen;
	uint i;

	debug(0, "Loading directory: %s", fname);

	if (!fp.open(fname)) {
		return errBadFileOpen;
	}

	fp.seek(0, SEEK_END);
	flen = fp.pos();
	fp.seek(0, SEEK_SET);

	if ((mem = (uint8 *)malloc(flen + 32)) == nullptr) {
		fp.close();
		return errNotEnoughMemory;
	}

	fp.read(mem, flen);

	// set all directory resources to gone
	for (i = 0; i < MAX_DIRECTORY_ENTRIES; i++) {
		agid[i].volume = 0xff;
		agid[i].offset = _EMPTY;
	}

	// build directory entries
	for (i = 0; i < flen; i += 3) {
		agid[i / 3].volume = *(mem + i) >> 4;
		agid[i / 3].offset = READ_BE_UINT24(mem + i) & (uint32) _EMPTY;
		debugC(3, kDebugLevelResources, "%d: volume %d, offset 0x%05x", i / 3, agid[i / 3].volume, agid[i / 3].offset);
	}

	free(mem);
	fp.close();

	return errOK;
}

/**
 * Detects if the volume format is really V3.
 *
 * The volume format for a V2 game should have 5 byte headers.
 * The CoCo3 version of Xmas Card 86 has 7 byte headers.
 * The resource length repeats as if it were a V3 volume with no compression.
 *
 * This function detects if a volume has this unusual structure so that
 * loadVolRes() can ignore the two extra header bytes.
 */
bool AgiLoader_v2::detectV3VolumeFormat() {
	uint8 volume = _vm->_game.dirLogic[0].volume;
	Common::Path path(Common::String::format("vol.%i", volume));
	Common::File volumeFile;
	if (!volumeFile.open(path)) {
		return false;
	}

	// read the first few entries and see if they match the 7 byte header
	uint8 volumeHeader[7];
	for (int i = 0; i < 5; i++) {
		if (volumeFile.read(&volumeHeader, 7) != 7) {
			return false;
		}
		// signature
		if (READ_BE_UINT16(volumeHeader) != 0x1234) {
			return false;
		}
		// volume number
		if (volumeHeader[2] != volume) {
			return false;
		}
		// duplicate resource lengths
		uint16 resourceLength1 = READ_LE_UINT16(volumeHeader + 3);
		uint16 resourceLength2 = READ_LE_UINT16(volumeHeader + 5);
		if (resourceLength1 != resourceLength2) {
			return false;
		}
		if (!volumeFile.seek(resourceLength1, SEEK_CUR)) {
			return false;
		}
	}
	return true;
}

int AgiLoader_v2::init() {
	int ec = errOK;

	// load directory files
	ec = loadDir(_vm->_game.dirLogic, LOGDIR);
	if (ec == errOK)
		ec = loadDir(_vm->_game.dirPic, PICDIR);
	if (ec == errOK)
		ec = loadDir(_vm->_game.dirView, VIEWDIR);
	if (ec == errOK)
		ec = loadDir(_vm->_game.dirSound, SNDDIR);
	if (ec == errOK)
		_hasV3VolumeFormat = detectV3VolumeFormat();

	return ec;
}

int AgiLoader_v2::deinit() {
	int ec = errOK;

#if 0
	// unload words
	agiV2UnloadWords();

	// unload objects
	agiV2UnloadObjects();
#endif

	return ec;
}

int AgiLoader_v2::unloadResource(int16 resourceType, int16 resourceNr) {
	debugC(3, kDebugLevelResources, "unload resource");

	switch (resourceType) {
	case RESOURCETYPE_LOGIC:
		_vm->unloadLogic(resourceNr);
		break;
	case RESOURCETYPE_PICTURE:
		_vm->_picture->unloadPicture(resourceNr);
		break;
	case RESOURCETYPE_VIEW:
		_vm->unloadView(resourceNr);
		break;
	case RESOURCETYPE_SOUND:
		_vm->_sound->unloadSound(resourceNr);
		break;
	default:
		break;
	}

	return errOK;
}

/**
 * This function loads a raw resource into memory,
 * if further decoding is required, it must be done by another
 * routine. NULL is returned if unsuccessful.
 */
uint8 *AgiLoader_v2::loadVolRes(struct AgiDir *agid) {
	uint8 *data = nullptr;
	uint8 volumeHeader[7];
	Common::File fp;
	unsigned int sig;
	Common::Path path(Common::String::format("vol.%i", agid->volume));

	debugC(3, kDebugLevelResources, "Vol res: path = %s", path.toString().c_str());

	if (agid->offset != _EMPTY && fp.open(path)) {
		debugC(3, kDebugLevelResources, "loading resource at offset %d", agid->offset);
		fp.seek(agid->offset, SEEK_SET);
		fp.read(&volumeHeader, _hasV3VolumeFormat ? 7 : 5);
		if ((sig = READ_BE_UINT16(volumeHeader)) == 0x1234) {
			agid->len = READ_LE_UINT16(volumeHeader + 3);
			data = (uint8 *)calloc(1, agid->len + 32);
			if (data != nullptr) {
				fp.read(data, agid->len);
			} else {
				error("AgiLoader_v2::loadVolRes out of memory");
			}
		} else {
			warning("AgiLoader_v2::loadVolRes: bad signature %04x", sig);
			return nullptr;
		}
		fp.close();
	} else {
		// we have a bad volume resource
		// set that resource to NA
		agid->offset = _EMPTY;
	}

	return data;
}

/**
 * Loads a resource into memory, a raw resource is loaded in
 * with above routine, then further decoded here.
 */
int AgiLoader_v2::loadResource(int16 resourceType, int16 resourceNr) {
	int ec = errOK;
	uint8 *data = nullptr;

	debugC(3, kDebugLevelResources, "(t = %d, n = %d)", resourceType, resourceNr);
	if (resourceNr >= MAX_DIRECTORY_ENTRIES)
		return errBadResource;

	switch (resourceType) {
	case RESOURCETYPE_LOGIC:
		if (~_vm->_game.dirLogic[resourceNr].flags & RES_LOADED) {
			debugC(3, kDebugLevelResources, "loading logic resource %d", resourceNr);
			unloadResource(RESOURCETYPE_LOGIC, resourceNr);

			// load raw resource into data
			data = loadVolRes(&_vm->_game.dirLogic[resourceNr]);

			_vm->_game.logics[resourceNr].data = data;
			ec = data ? _vm->decodeLogic(resourceNr) : errBadResource;

			_vm->_game.logics[resourceNr].sIP = 2;
		}

		// if logic was cached, we get here
		// reset code pointers incase it was cached

		_vm->_game.logics[resourceNr].cIP = _vm->_game.logics[resourceNr].sIP;
		break;
	case RESOURCETYPE_PICTURE:
		// if picture is currently NOT loaded *OR* cacheing is off,
		// unload the resource (caching == off) and reload it

		debugC(3, kDebugLevelResources, "loading picture resource %d", resourceNr);
		if (_vm->_game.dirPic[resourceNr].flags & RES_LOADED)
			break;

		// if loaded but not cached, unload it
		// if cached but not loaded, etc
		unloadResource(RESOURCETYPE_PICTURE, resourceNr);
		data = loadVolRes(&_vm->_game.dirPic[resourceNr]);

		if (data != nullptr) {
			_vm->_game.pictures[resourceNr].rdata = data;
			_vm->_game.dirPic[resourceNr].flags |= RES_LOADED;
		} else {
			ec = errBadResource;
		}
		break;
	case RESOURCETYPE_SOUND:
		debugC(3, kDebugLevelResources, "loading sound resource %d", resourceNr);
		if (_vm->_game.dirSound[resourceNr].flags & RES_LOADED)
			break;

		data = loadVolRes(&_vm->_game.dirSound[resourceNr]);

		// "data" is freed by objects created by createFromRawResource on success
		_vm->_game.sounds[resourceNr] = AgiSound::createFromRawResource(data, _vm->_game.dirSound[resourceNr].len, resourceNr, _vm->_soundemu);
		if (_vm->_game.sounds[resourceNr] != nullptr) {
			_vm->_game.dirSound[resourceNr].flags |= RES_LOADED;
		} else {
			free(data);
			ec = errBadResource;
		}
		break;
	case RESOURCETYPE_VIEW:
		// Load a VIEW resource into memory...
		// Since VIEWS alter the view table ALL the time
		// can we cache the view? or must we reload it all
		// the time?
		if (_vm->_game.dirView[resourceNr].flags & RES_LOADED)
			break;

		debugC(3, kDebugLevelResources, "loading view resource %d", resourceNr);
		unloadResource(RESOURCETYPE_VIEW, resourceNr);
		data = loadVolRes(&_vm->_game.dirView[resourceNr]);
		if (data) {
			_vm->_game.dirView[resourceNr].flags |= RES_LOADED;
			ec = _vm->decodeView(data, _vm->_game.dirView[resourceNr].len, resourceNr);
			free(data);
		} else {
			ec = errBadResource;
		}
		break;
	default:
		ec = errBadResource;
		break;
	}

	return ec;
}

int AgiLoader_v2::loadObjects(const char *fname) {
	return _vm->loadObjects(fname);
}

int AgiLoader_v2::loadWords(const char *fname) {
	if (_vm->getFeatures() & GF_EXTCHAR) {
		return _vm->_words->loadExtendedDictionary(fname);
	} else {
		return _vm->_words->loadDictionary(fname);
	}
}

} // End of namespace Agi

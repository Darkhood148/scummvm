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
 *
 * This file is dual-licensed.
 * In addition to the GPLv3 license mentioned above, this code is also
 * licensed under LGPL 2.1. See LICENSES/COPYING.LGPL file for the
 * full text of the license.
 *
 */

/* Detection tables for Once Upon A Time: Little Red Riding Hood. */

#ifndef GOB_DETECTION_TABLES_LITTLERED_H
#define GOB_DETECTION_TABLES_LITTLERED_H

// -- DOS EGA Floppy --

{
	{
		"littlered",
		"",
		AD_ENTRY1s("intro.stk", "0b72992f5d8b5e6e0330572a5753ea25", 256490),
		EN_GRB,
		kPlatformDOS,
		ADGF_NO_FLAGS,
		GUIO2(GUIO_NOSUBTITLES, GUIO_NOSPEECH)
	},
	kGameTypeLittleRed,
	kFeaturesAdLib | kFeaturesEGA,
	0, 0, 0
},
{
	{
		"littlered",
		"",
		AD_ENTRY1s("intro.stk", "0b72992f5d8b5e6e0330572a5753ea25", 256490),
		FR_FRA,
		kPlatformDOS,
		ADGF_NO_FLAGS,
		GUIO2(GUIO_NOSUBTITLES, GUIO_NOSPEECH)
	},
	kGameTypeLittleRed,
	kFeaturesAdLib | kFeaturesEGA,
	0, 0, 0
},
{
	{
		"littlered",
		"",
		AD_ENTRY1s("intro.stk", "0b72992f5d8b5e6e0330572a5753ea25", 256490),
		DE_DEU,
		kPlatformDOS,
		ADGF_NO_FLAGS,
		GUIO2(GUIO_NOSUBTITLES, GUIO_NOSPEECH)
	},
	kGameTypeLittleRed,
	kFeaturesAdLib | kFeaturesEGA,
	0, 0, 0
},
{
	{
		"littlered",
		"",
		AD_ENTRY1s("intro.stk", "0b72992f5d8b5e6e0330572a5753ea25", 256490),
		ES_ESP,
		kPlatformDOS,
		ADGF_NO_FLAGS,
		GUIO2(GUIO_NOSUBTITLES, GUIO_NOSPEECH)
	},
	kGameTypeLittleRed,
	kFeaturesAdLib | kFeaturesEGA,
	0, 0, 0
},
{
	{
		"littlered",
		"",
		AD_ENTRY1s("intro.stk", "0b72992f5d8b5e6e0330572a5753ea25", 256490),
		IT_ITA,
		kPlatformDOS,
		ADGF_NO_FLAGS,
		GUIO2(GUIO_NOSUBTITLES, GUIO_NOSPEECH)
	},
	kGameTypeLittleRed,
	kFeaturesAdLib | kFeaturesEGA,
	0, 0, 0
},

// -- Windows --

{
	{
		"littlered",
		"",
		AD_ENTRY1s("intro.stk", "113a16877e4f72037d9714be1c2b0221", 1187522),
		EN_GRB,
		kPlatformWindows,
		ADGF_NO_FLAGS,
		GUIO2(GUIO_NOSUBTITLES, GUIO_NOSPEECH)
	},
	kGameTypeLittleRed,
	kFeaturesAdLib | kFeaturesEGA,
	0, 0, 0
},
{
	{
		"littlered",
		"",
		AD_ENTRY1s("intro.stk", "113a16877e4f72037d9714be1c2b0221", 1187522),
		FR_FRA,
		kPlatformWindows,
		ADGF_NO_FLAGS,
		GUIO2(GUIO_NOSUBTITLES, GUIO_NOSPEECH)
	},
	kGameTypeLittleRed,
	kFeaturesAdLib | kFeaturesEGA,
	0, 0, 0
},
{
	{
		"littlered",
		"",
		AD_ENTRY1s("intro.stk", "113a16877e4f72037d9714be1c2b0221", 1187522),
		DE_DEU,
		kPlatformWindows,
		ADGF_NO_FLAGS,
		GUIO2(GUIO_NOSUBTITLES, GUIO_NOSPEECH)
	},
	kGameTypeLittleRed,
	kFeaturesAdLib | kFeaturesEGA,
	0, 0, 0
},
{ // Included in a German version of Adi 2
	{
		"littlered",
		"v1.1",
		AD_ENTRY1s("intro.stk", "1c00173d73a3691cc93948f6575d7c75", 1188138),
		DE_DEU,
		kPlatformWindows,
		ADGF_NO_FLAGS,
		GUIO2(GUIO_NOSUBTITLES, GUIO_NOSPEECH)
	},
	kGameTypeLittleRed,
	kFeaturesAdLib | kFeaturesEGA,
	0, 0, 0
},
{
	{
		"littlered",
		"",
		AD_ENTRY1s("intro.stk", "113a16877e4f72037d9714be1c2b0221", 1187522),
		IT_ITA,
		kPlatformWindows,
		ADGF_NO_FLAGS,
		GUIO2(GUIO_NOSUBTITLES, GUIO_NOSPEECH)
	},
	kGameTypeLittleRed,
	kFeaturesAdLib | kFeaturesEGA,
	0, 0, 0
},
{
	{
		"littlered",
		"",
		AD_ENTRY1s("intro.stk", "113a16877e4f72037d9714be1c2b0221", 1187522),
		ES_ESP,
		kPlatformWindows,
		ADGF_NO_FLAGS,
		GUIO2(GUIO_NOSUBTITLES, GUIO_NOSPEECH)
	},
	kGameTypeLittleRed,
	kFeaturesAdLib | kFeaturesEGA,
	0, 0, 0
},
{ // Found in french ADI 2 Francais-Maths CM1
	{
		"littlered",
		"",
		AD_ENTRY1s("intro.stk", "5c15b37ed27ac2470854e9e09374d50e", 1248610),
		FR_FRA,
		kPlatformWindows,
		ADGF_NO_FLAGS,
		GUIO2(GUIO_NOSUBTITLES, GUIO_NOSPEECH)
	},
	kGameTypeLittleRed,
	kFeaturesAdLib | kFeaturesEGA,
	0, 0, 0
},
{ // Found in french ADI 2 Francais-Maths CM1
	{
		"littlered",
		"",
		AD_ENTRY1s("intro.stk", "5c15b37ed27ac2470854e9e09374d50e", 1248610),
		ES_ESP,
		kPlatformWindows,
		ADGF_NO_FLAGS,
		GUIO2(GUIO_NOSUBTITLES, GUIO_NOSPEECH)
	},
	kGameTypeLittleRed,
	kFeaturesAdLib | kFeaturesEGA,
	0, 0, 0
},
{ // Found in french ADI 2 Francais-Maths CM1
	{
		"littlered",
		"",
		AD_ENTRY1s("intro.stk", "5c15b37ed27ac2470854e9e09374d50e", 1248610),
		EN_GRB,
		kPlatformWindows,
		ADGF_NO_FLAGS,
		GUIO2(GUIO_NOSUBTITLES, GUIO_NOSPEECH)
	},
	kGameTypeLittleRed,
	kFeaturesAdLib | kFeaturesEGA,
	0, 0, 0
},
{ // Found in french ADI 2 Francais-Maths CM1
	{
		"littlered",
		"",
		AD_ENTRY1s("intro.stk", "5c15b37ed27ac2470854e9e09374d50e", 1248610),
		IT_ITA,
		kPlatformWindows,
		ADGF_NO_FLAGS,
		GUIO2(GUIO_NOSUBTITLES, GUIO_NOSPEECH)
	},
	kGameTypeLittleRed,
	kFeaturesAdLib | kFeaturesEGA,
	0, 0, 0
},
{ // Found in french ADI 2 Francais-Maths CM1
	{
		"littlered",
		"",
		AD_ENTRY1s("intro.stk", "5c15b37ed27ac2470854e9e09374d50e", 1248610),
		DE_DEU,
		kPlatformWindows,
		ADGF_NO_FLAGS,
		GUIO2(GUIO_NOSUBTITLES, GUIO_NOSPEECH)
	},
	kGameTypeLittleRed,
	kFeaturesAdLib | kFeaturesEGA,
	0, 0, 0
},

// -- Amiga --

{
	{
		"littlered",
		"",
		AD_ENTRY2s("intro.stk",		"0b72992f5d8b5e6e0330572a5753ea25", 256490,
				   "mod.babayaga",	"43484cde74e0860785f8e19f0bc776d1", 60248),
		UNK_LANG,
		kPlatformAmiga,
		ADGF_NO_FLAGS,
		GUIO2(GUIO_NOSUBTITLES, GUIO_NOSPEECH)
	},
	kGameTypeLittleRed,
	kFeaturesNone,
	0, 0, 0
},

#endif // GOB_DETECTION_TABLES_LITTLERED_H

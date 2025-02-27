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

/* Detection tables for Lost in Time. */

#ifndef GOB_DETECTION_TABLES_LIT_H
#define GOB_DETECTION_TABLES_LIT_H

// -- DOS VGA Floppy (Part I and II) --

{
	{
		"lit",
		"v1.10",
		AD_ENTRY1s("intro.stk", "7b7f48490dedc8a7cb999388e2fadbe3", 3930674),
		EN_USA,
		kPlatformDOS,
		ADGF_NO_FLAGS,
		GUIO2(GUIO_NOSUBTITLES, GUIO_NOSPEECH)
	},
	kGameTypeLostInTime,
	kFeaturesAdLib,
	0, 0, 0
},
{
	{
		"lit",
		"",
		AD_ENTRY1s("intro.stk", "e0767783ff662ed93665446665693aef", 4371238),
		HE_ISR,
		kPlatformDOS,
		ADGF_NO_FLAGS,
		GUIO2(GUIO_NOSUBTITLES, GUIO_NOSPEECH)
	},
	kGameTypeLostInTime,
	kFeaturesAdLib,
	0, 0, 0
},
{ // Supplied by cartman_ on #scummvm
	{
		"lit",
		"",
		AD_ENTRY1s("intro.stk", "f1f78b663893b58887add182a77df151", 3944090),
		DE_DEU,
		kPlatformDOS,
		ADGF_NO_FLAGS,
		GUIO2(GUIO_NOSUBTITLES, GUIO_NOSPEECH)
	},
	kGameTypeLostInTime,
	kFeaturesAdLib,
	0, 0, 0
},
{ // Supplied by goodoldgeorg in bug report #3960
	{
		"lit",
		"",
		AD_ENTRY1s("intro.stk", "cd322cb3c64ef2ba2f2134aa2122cfe9", 3936700),
		ES_ESP,
		kPlatformDOS,
		ADGF_NO_FLAGS,
		GUIO2(GUIO_NOSUBTITLES, GUIO_NOSPEECH)
	},
	kGameTypeLostInTime,
	kFeaturesAdLib,
	0, 0, 0
},

// -- DOS CD --

{
	{
		"lit",
		"CD v1.00",
		AD_ENTRY1s("intro.stk", "6263d09e996c1b4e84ef2d650b820e57", 4831170),
		EN_USA,
		kPlatformDOS,
		ADGF_CD,
		GUIO2(GUIO_NOSUBTITLES, GUIO_NOSPEECH)
	},
	kGameTypeLostInTime,
	kFeaturesCD,
	0, 0, 0
},
{
	{
		"lit",
		"CD v1.00",
		AD_ENTRY1s("intro.stk", "6263d09e996c1b4e84ef2d650b820e57", 4831170),
		FR_FRA,
		kPlatformDOS,
		ADGF_CD,
		GUIO2(GUIO_NOSUBTITLES, GUIO_NOSPEECH)
	},
	kGameTypeLostInTime,
	kFeaturesCD,
	0, 0, 0
},
{
	{
		"lit",
		"CD v1.00",
		AD_ENTRY1s("intro.stk", "6263d09e996c1b4e84ef2d650b820e57", 4831170),
		IT_ITA,
		kPlatformDOS,
		ADGF_CD,
		GUIO2(GUIO_NOSUBTITLES, GUIO_NOSPEECH)
	},
	kGameTypeLostInTime,
	kFeaturesCD,
	0, 0, 0
},
{
	{
		"lit",
		"CD v1.00",
		AD_ENTRY1s("intro.stk", "6263d09e996c1b4e84ef2d650b820e57", 4831170),
		DE_DEU,
		kPlatformDOS,
		ADGF_CD,
		GUIO2(GUIO_NOSUBTITLES, GUIO_NOSPEECH)
	},
	kGameTypeLostInTime,
	kFeaturesCD,
	0, 0, 0
},
{
	{
		"lit",
		"CD v1.00",
		AD_ENTRY1s("intro.stk", "6263d09e996c1b4e84ef2d650b820e57", 4831170),
		ES_ESP,
		kPlatformDOS,
		ADGF_CD,
		GUIO2(GUIO_NOSUBTITLES, GUIO_NOSPEECH)
	},
	kGameTypeLostInTime,
	kFeaturesCD,
	0, 0, 0
},
{
	{
		"lit",
		"CD v1.00",
		AD_ENTRY1s("intro.stk", "6263d09e996c1b4e84ef2d650b820e57", 4831170),
		EN_GRB,
		kPlatformDOS,
		ADGF_CD,
		GUIO2(GUIO_NOSUBTITLES, GUIO_NOSPEECH)
	},
	kGameTypeLostInTime,
	kFeaturesCD,
	0, 0, 0
},
{ // Supplied by SiRoCs in bug report #3943 dated 09.06.93
	{
		"lit",
		"CD v1.00",
		AD_ENTRY1s("intro.stk", "795be7011ec31bf5bb8ce4efdb9ee5d3", 4838904),
		EN_USA,
		kPlatformDOS,
		ADGF_CD,
		GUIO2(GUIO_NOSUBTITLES, GUIO_NOSPEECH)
	},
	kGameTypeLostInTime,
	kFeaturesCD,
	0, 0, 0
},
{ // Supplied by SiRoCs in bug report #3943 dated 09.06.93
	{
		"lit",
		"CD v1.00",
		AD_ENTRY1s("intro.stk", "795be7011ec31bf5bb8ce4efdb9ee5d3", 4838904),
		FR_FRA,
		kPlatformDOS,
		ADGF_CD,
		GUIO2(GUIO_NOSUBTITLES, GUIO_NOSPEECH)
	},
	kGameTypeLostInTime,
	kFeaturesCD,
	0, 0, 0
},
{ // Supplied by SiRoCs in bug report #3943 dated 09.06.93
	{
		"lit",
		"CD v1.00",
		AD_ENTRY1s("intro.stk", "795be7011ec31bf5bb8ce4efdb9ee5d3", 4838904),
		IT_ITA,
		kPlatformDOS,
		ADGF_CD,
		GUIO2(GUIO_NOSUBTITLES, GUIO_NOSPEECH)
	},
	kGameTypeLostInTime,
	kFeaturesCD,
	0, 0, 0
},
{ // Supplied by SiRoCs in bug report #3943 dated 09.06.93
	{
		"lit",
		"CD v1.00",
		AD_ENTRY1s("intro.stk", "795be7011ec31bf5bb8ce4efdb9ee5d3", 4838904),
		DE_DEU,
		kPlatformDOS,
		ADGF_CD,
		GUIO2(GUIO_NOSUBTITLES, GUIO_NOSPEECH)
	},
	kGameTypeLostInTime,
	kFeaturesCD,
	0, 0, 0
},
{ // Supplied by SiRoCs in bug report #3943 dated 09.06.93
	{
		"lit",
		"CD v1.00",
		AD_ENTRY1s("intro.stk", "795be7011ec31bf5bb8ce4efdb9ee5d3", 4838904),
		ES_ESP,
		kPlatformDOS,
		ADGF_CD,
		GUIO2(GUIO_NOSUBTITLES, GUIO_NOSPEECH)
	},
	kGameTypeLostInTime,
	kFeaturesCD,
	0, 0, 0
},
{ // Supplied by SiRoCs in bug report #3943 dated 09.06.93
	{
		"lit",
		"CD v1.00",
		AD_ENTRY1s("intro.stk", "795be7011ec31bf5bb8ce4efdb9ee5d3", 4838904),
		EN_GRB,
		kPlatformDOS,
		ADGF_CD,
		GUIO2(GUIO_NOSUBTITLES, GUIO_NOSPEECH)
	},
	kGameTypeLostInTime,
	kFeaturesCD,
	0, 0, 0
},

// -- Windows (Part I and II) --

{
	{
		"lit",
		"",
		AD_ENTRY1s("intro.stk", "0ddf39cea1ec30ecc8bfe444ebd7b845", 4207330),
		EN_GRB,
		kPlatformWindows,
		ADGF_NO_FLAGS,
		GUIO2(GUIO_NOSUBTITLES, GUIO_NOSPEECH)
	},
	kGameTypeLostInTime,
	kFeaturesAdLib,
	0, 0, 0
},
{
	{
		"lit",
		"",
		AD_ENTRY1s("intro.stk", "0ddf39cea1ec30ecc8bfe444ebd7b845", 4207330),
		FR_FRA,
		kPlatformWindows,
		ADGF_NO_FLAGS,
		GUIO2(GUIO_NOSUBTITLES, GUIO_NOSPEECH)
	},
	kGameTypeLostInTime,
	kFeaturesAdLib,
	0, 0, 0
},
{
	{
		"lit",
		"",
		AD_ENTRY1s("intro.stk", "0ddf39cea1ec30ecc8bfe444ebd7b845", 4207330),
		ES_ESP,
		kPlatformWindows,
		ADGF_NO_FLAGS,
		GUIO2(GUIO_NOSUBTITLES, GUIO_NOSPEECH)
	},
	kGameTypeLostInTime,
	kFeaturesAdLib,
	0, 0, 0
},
{
	{
		"lit",
		"",
		AD_ENTRY1s("intro.stk", "0ddf39cea1ec30ecc8bfe444ebd7b845", 4219382),
		DE_DEU,
		kPlatformWindows,
		ADGF_NO_FLAGS,
		GUIO2(GUIO_NOSUBTITLES, GUIO_NOSPEECH)
	},
	kGameTypeLostInTime,
	kFeaturesAdLib,
	0, 0, 0
},
{
	{
		"lit",
		"",
		AD_ENTRY1s("intro.stk", "0ddf39cea1ec30ecc8bfe444ebd7b845", 4219382),
		FR_FRA,
		kPlatformWindows,
		ADGF_NO_FLAGS,
		GUIO2(GUIO_NOSUBTITLES, GUIO_NOSPEECH)
	},
	kGameTypeLostInTime,
	kFeaturesAdLib,
	0, 0, 0
},
{ // Found in french ADI 2.6 Francais-Maths 4e
	{
		"lit",
		"",
		AD_ENTRY1s("intro.stk", "58ee9583a4fb837f02d9a58e5f442656", 3937120),
		FR_FRA,
		kPlatformWindows,
		ADGF_NO_FLAGS,
		GUIO2(GUIO_NOSUBTITLES, GUIO_NOSPEECH)
	},
	kGameTypeLostInTime,
	kFeaturesAdLib,
	0, 0, 0
},

// -- Windows (Part I only) --
{
	{
		"lit1",
		"Light install",
		AD_ENTRY2s("intro.stk",   "93c91bc9e783d00033042ae83144d7dd", 72318,
				   "partie2.itk", "78f00bd8eb9e680e6289bba0130b1b33", 664064),
		FR_FRA,
		kPlatformWindows,
		ADGF_NO_FLAGS,
		GUIO2(GUIO_NOSUBTITLES, GUIO_NOSPEECH)
	},
	kGameTypeLostInTime,
	kFeaturesAdLib,
	0, 0, 0
},
{
	{
		"lit1",
		"Full install",
		AD_ENTRY2s("intro.stk",   "93c91bc9e783d00033042ae83144d7dd", 72318,
				   "partie2.itk", "78f00bd8eb9e680e6289bba0130b1b33", 4396644),
		FR_FRA,
		kPlatformWindows,
		ADGF_NO_FLAGS,
		GUIO2(GUIO_NOSUBTITLES, GUIO_NOSPEECH)
	},
	kGameTypeLostInTime,
	kFeaturesAdLib,
	0, 0, 0
},

// -- Windows (Part II only) --

{
	{
		"lit2",
		"Light install",
		AD_ENTRY1s("intro.stk", "17acbb212e62addbe48dc8f2282c98cb", 72318),
		FR_FRA,
		kPlatformWindows,
		ADGF_NO_FLAGS,
		GUIO2(GUIO_NOSUBTITLES, GUIO_NOSPEECH)
	},
	kGameTypeLostInTime,
	kFeaturesAdLib,
	0, 0, 0
},
{
	{
		"lit2",
		"Full install",
		AD_ENTRY2s("intro.stk",   "17acbb212e62addbe48dc8f2282c98cb", 72318,
				   "partie4.itk", "6ce4967e0c79d7daeabc6c1d26783d4c", 2612087),
		FR_FRA,
		kPlatformWindows,
		ADGF_NO_FLAGS,
		GUIO2(GUIO_NOSUBTITLES, GUIO_NOSPEECH)
	},
	kGameTypeLostInTime,
	kFeaturesAdLib,
	0, 0, 0
},

// -- Mac (Part I and II) --

{ // Supplied by koalet in bug report #4066
	{
		"lit",
		"",
		AD_ENTRY2s("intro.stk",   "af98bcdc70e1f1c1635577fd726fe7f1", 3937310,
				   "musmac1.mid", "ae7229bb09c6abe4e60a2768b24bc890", 9398),
		FR_FRA,
		kPlatformMacintosh,
		ADGF_NO_FLAGS,
		GUIO2(GUIO_NOSUBTITLES, GUIO_NOSPEECH)
	},
	kGameTypeLostInTime,
	kFeaturesAdLib,
	0, 0, 0
},

// -- Demos --

{
	{
		"lit",
		"Demo",
		AD_ENTRY1("demo.stk", "c06f8cc20eb239d4c71f225ce3093edf"),
		UNK_LANG,
		kPlatformDOS,
		ADGF_DEMO,
		GUIO2(GUIO_NOSUBTITLES, GUIO_NOSPEECH)
	},
	kGameTypeLostInTime,
	kFeaturesAdLib,
	"demo.stk", "demo.tot", 0
},
{
	{
		"lit",
		"Non-interactive Demo",
		AD_ENTRY1s("demo.stk", "2eba8abd9e3878c57307576012dd2fec", 3031494),
		FR_FRA,
		kPlatformDOS,
		ADGF_DEMO,
		GUIO2(GUIO_NOSUBTITLES, GUIO_NOSPEECH)
	},
	kGameTypeLostInTime,
	kFeaturesAdLib,
	"demo.stk", "demo.tot", 0
},
{
	{
		"lit",
		"Non-interactive Demo",
		AD_ENTRY1s("demo.stk", "895359c918a145adc048f779b3cdacc3", 645068),
		FR_FRA,
		kPlatformDOS,
		ADGF_DEMO,
		GUIO2(GUIO_NOSUBTITLES, GUIO_NOSPEECH)
	},
	kGameTypeLostInTime,
	kFeaturesAdLib,
	"demo.stk", "demo.tot", 0
},
// -- Pirated! Do not re-add nor un-tag! --

{
	{
		"lit",
		"",
		AD_ENTRY1s("intro.stk", "3712e7527ba8ce5637d2aadf62783005", 72318),
		FR_FRA,
		kPlatformDOS,
		ADGF_PIRATED,
		GUIO2(GUIO_NOSUBTITLES, GUIO_NOSPEECH)
	},
	kGameTypeLostInTime,
	kFeaturesAdLib,
	0, 0, 0
},

#endif // GOB_DETECTION_TABLES_LIT_H

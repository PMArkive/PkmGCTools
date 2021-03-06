/*
* Copyright (C) TuxSH 2015
* This file is part of LibPkmGC.
*
* LibPkmGC is free software: you can redistribute it and/or modify
* it under the terms of the GNU Lesser General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* LibPkmGC is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU Lesser General Public License for more details.
*
* You should have received a copy of the GNU Lesser General Public License
* along with LibPkmGC.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <LibPkmGC/Core/Detail/NatureNames.h>

namespace LibPkmGC {
namespace Localization {
namespace Detail {

namespace Natures {

const char **names[7] = { NULL, japaneseNames, englishNames, germanNames, frenchNames, italianNames, spanishNames };

const char* englishNames[25] = {
	"HARDY",
	"LONELY",
	"BRAVE",
	"ADAMANT",
	"NAUGHTY",
	"BOLD",
	"DOCILE",
	"RELAXED",
	"IMPISH",
	"LAX",
	"TIMID",
	"HASTY",
	"SERIOUS",
	"JOLLY",
	"NAIVE",
	"MODEST",
	"MILD",
	"QUIET",
	"BASHFUL",
	"RASH",
	"CALM",
	"GENTLE",
	"SASSY",
	"CAREFUL",
	"QUIRKY"
};

const char* frenchNames[25] = {
	"HARDI",
	"SOLO",
	"BRAVE",
	"RIGIDE",
	"MAUVAIS",
	"ASSURE",
	"DOCILE",
	"RELAX",
	"MALIN",
	"LACHE",
	"TIMIDE",
	"PRESSE",
	"SERIEUX",
	"JOVIAL",
	"NAIF",
	"MODESTE",
	"DOUX",
	"DISCRET",
	"PUDIQUE",
	"FOUFOU",
	"CALME",
	"GENTIL",
	"MALPOLI",
	"PRUDENT",
	"BIZARRE",
};

const char* germanNames[25] = {
	"ROBUST",
	"SOLO",
	"MUTIG",
	"HART",
	"FRECH",
	"K\xC3\x9CHN",
	"SANFT",
	"LOCKER",
	"PFIFFIG",
	"LASCH",
	"SCHEU",
	"HASTIG",
	"ERNST",
	"FROH",
	"NAIV",
	"M\xC3\x84SSIG",
	"MILD",
	"RUHIG",
	"ZAGHAFT",
	"HITZIG",
	"STILL",
	"ZART",
	"FORSCH",
	"SACHT",
	"KAUZIG",
};

const char* italianNames[25] = {
	"ARDITA",
	"SCHIVA",
	"AUDACE",
	"DECISA",
	"BIRBONA",
	"SICURA",
	"DOCILE",
	"PLACIDA",
	"SCALTRA",
	"FIACCA",
	"TIMIDA",
	"LESTA",
	"SERIA",
	"ALLEGRA",
	"INGENUA",
	"MODESTA",
	"MITE",
	"QUIETA",
	"RITROSA",
	"ARDENTE",
	"CALMA",
	"GENTILE",
	"VIVACE",
	"CAUTA",
	"FURBA",
};

const char* spanishNames[25] = {
	"FUERTE",
	"HURA\xC3\x91""A",
	"AUDAZ",
	"FIRME",
	"P\xC3\x8D""CARA",
	"OSADA",
	"D\xC3\x93""CIL",
	"PL\xC3\x81""CIDA",
	"AGITADA",
	"FLOJA",
	"MIEDOSA",
	"ACTIVA",
	"SERIA",
	"ALEGRE",
	"INGENUA",
	"MODESTA",
	"AFABLE",
	"MANSA",
	"T\xC3\x8DMIDA",
	"ALOCADA",
	"SERENA",
	"AMABLE",
	"GROSERA",
	"CAUTA",
	"RARA",
};

const char* japaneseNames[25] = {
	"\xe3\x81\x8c\xe3\x82\x93\xe3\x81\xb0\xe3\x82\x8a\xe3\x82\x84",
	"\xe3\x81\x95\xe3\x81\xbf\xe3\x81\x97\xe3\x81\x8c\xe3\x82\x8a",
	"\xe3\x82\x86\xe3\x81\x86\xe3\x81\x8b\xe3\x82\x93",
	"\xe3\x81\x84\xe3\x81\x98\xe3\x81\xa3\xe3\x81\xb1\xe3\x82\x8a",
	"\xe3\x82\x84\xe3\x82\x93\xe3\x81\xa1\xe3\x82\x83",
	"\xe3\x81\x9a\xe3\x81\xb6\xe3\x81\xa8\xe3\x81\x84",
	"\xe3\x81\x99\xe3\x81\xaa\xe3\x81\x8a",
	"\xe3\x81\xae\xe3\x82\x93\xe3\x81\x8d",
	"\xe3\x82\x8f\xe3\x82\x93\xe3\x81\xb1\xe3\x81\x8f",
	"\xe3\x81\xae\xe3\x81\x86\xe3\x81\xa6\xe3\x82\x93\xe3\x81\x8d",
	"\xe3\x81\x8a\xe3\x81\x8f\xe3\x81\xb3\xe3\x82\x87\xe3\x81\x86",
	"\xe3\x81\x9b\xe3\x81\xa3\xe3\x81\x8b\xe3\x81\xa1",
	"\xe3\x81\xbe\xe3\x81\x98\xe3\x82\x81",
	"\xe3\x82\x88\xe3\x81\x86\xe3\x81\x8d",
	"\xe3\x82\x80\xe3\x81\x98\xe3\x82\x83\xe3\x81\x8d",
	"\xe3\x81\xb2\xe3\x81\x8b\xe3\x81\x88\xe3\x82\x81",
	"\xe3\x81\x8a\xe3\x81\xa3\xe3\x81\xa8\xe3\x82\x8a",
	"\xe3\x82\x8c\xe3\x81\x84\xe3\x81\x9b\xe3\x81\x84",
	"\xe3\x81\xa6\xe3\x82\x8c\xe3\x82\x84",
	"\xe3\x81\x86\xe3\x81\xa3\xe3\x81\x8b\xe3\x82\x8a\xe3\x82\x84",
	"\xe3\x81\x8a\xe3\x81\xa0\xe3\x82\x84\xe3\x81\x8b",
	"\xe3\x81\x8a\xe3\x81\xa8\xe3\x81\xaa\xe3\x81\x97\xe3\x81\x84",
	"\xe3\x81\xaa\xe3\x81\xbe\xe3\x81\x84\xe3\x81\x8d",
	"\xe3\x81\x97\xe3\x82\x93\xe3\x81\xa1\xe3\x82\x87\xe3\x81\x86",
	"\xe3\x81\x8d\xe3\x81\xbe\xe3\x81\x90\xe3\x82\x8c",
};

}
}
}
}
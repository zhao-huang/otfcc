#include "aglfn.h"

// This table contains standard AGLFN 1.7 glyph names, mapped to Unicode.
void aglfn_setupNames(caryll_GlyphOrder *map) {
	caryll_setGlyphOrderByGID(map, 0x0041, sdsnew("A"));
	caryll_setGlyphOrderByGID(map, 0x00C6, sdsnew("AE"));
	caryll_setGlyphOrderByGID(map, 0x01FC, sdsnew("AEacute"));
	caryll_setGlyphOrderByGID(map, 0x00C1, sdsnew("Aacute"));
	caryll_setGlyphOrderByGID(map, 0x0102, sdsnew("Abreve"));
	caryll_setGlyphOrderByGID(map, 0x00C2, sdsnew("Acircumflex"));
	caryll_setGlyphOrderByGID(map, 0x00C4, sdsnew("Adieresis"));
	caryll_setGlyphOrderByGID(map, 0x00C0, sdsnew("Agrave"));
	caryll_setGlyphOrderByGID(map, 0x0391, sdsnew("Alpha"));
	caryll_setGlyphOrderByGID(map, 0x0386, sdsnew("Alphatonos"));
	caryll_setGlyphOrderByGID(map, 0x0100, sdsnew("Amacron"));
	caryll_setGlyphOrderByGID(map, 0x0104, sdsnew("Aogonek"));
	caryll_setGlyphOrderByGID(map, 0x00C5, sdsnew("Aring"));
	caryll_setGlyphOrderByGID(map, 0x01FA, sdsnew("Aringacute"));
	caryll_setGlyphOrderByGID(map, 0x00C3, sdsnew("Atilde"));
	caryll_setGlyphOrderByGID(map, 0x0042, sdsnew("B"));
	caryll_setGlyphOrderByGID(map, 0x0392, sdsnew("Beta"));
	caryll_setGlyphOrderByGID(map, 0x0043, sdsnew("C"));
	caryll_setGlyphOrderByGID(map, 0x0106, sdsnew("Cacute"));
	caryll_setGlyphOrderByGID(map, 0x010C, sdsnew("Ccaron"));
	caryll_setGlyphOrderByGID(map, 0x00C7, sdsnew("Ccedilla"));
	caryll_setGlyphOrderByGID(map, 0x0108, sdsnew("Ccircumflex"));
	caryll_setGlyphOrderByGID(map, 0x010A, sdsnew("Cdotaccent"));
	caryll_setGlyphOrderByGID(map, 0x03A7, sdsnew("Chi"));
	caryll_setGlyphOrderByGID(map, 0x0044, sdsnew("D"));
	caryll_setGlyphOrderByGID(map, 0x010E, sdsnew("Dcaron"));
	caryll_setGlyphOrderByGID(map, 0x0110, sdsnew("Dcroat"));
	caryll_setGlyphOrderByGID(map, 0x2206, sdsnew("Delta"));
	caryll_setGlyphOrderByGID(map, 0x0045, sdsnew("E"));
	caryll_setGlyphOrderByGID(map, 0x00C9, sdsnew("Eacute"));
	caryll_setGlyphOrderByGID(map, 0x0114, sdsnew("Ebreve"));
	caryll_setGlyphOrderByGID(map, 0x011A, sdsnew("Ecaron"));
	caryll_setGlyphOrderByGID(map, 0x00CA, sdsnew("Ecircumflex"));
	caryll_setGlyphOrderByGID(map, 0x00CB, sdsnew("Edieresis"));
	caryll_setGlyphOrderByGID(map, 0x0116, sdsnew("Edotaccent"));
	caryll_setGlyphOrderByGID(map, 0x00C8, sdsnew("Egrave"));
	caryll_setGlyphOrderByGID(map, 0x0112, sdsnew("Emacron"));
	caryll_setGlyphOrderByGID(map, 0x014A, sdsnew("Eng"));
	caryll_setGlyphOrderByGID(map, 0x0118, sdsnew("Eogonek"));
	caryll_setGlyphOrderByGID(map, 0x0395, sdsnew("Epsilon"));
	caryll_setGlyphOrderByGID(map, 0x0388, sdsnew("Epsilontonos"));
	caryll_setGlyphOrderByGID(map, 0x0397, sdsnew("Eta"));
	caryll_setGlyphOrderByGID(map, 0x0389, sdsnew("Etatonos"));
	caryll_setGlyphOrderByGID(map, 0x00D0, sdsnew("Eth"));
	caryll_setGlyphOrderByGID(map, 0x20AC, sdsnew("Euro"));
	caryll_setGlyphOrderByGID(map, 0x0046, sdsnew("F"));
	caryll_setGlyphOrderByGID(map, 0x0047, sdsnew("G"));
	caryll_setGlyphOrderByGID(map, 0x0393, sdsnew("Gamma"));
	caryll_setGlyphOrderByGID(map, 0x011E, sdsnew("Gbreve"));
	caryll_setGlyphOrderByGID(map, 0x01E6, sdsnew("Gcaron"));
	caryll_setGlyphOrderByGID(map, 0x011C, sdsnew("Gcircumflex"));
	caryll_setGlyphOrderByGID(map, 0x0120, sdsnew("Gdotaccent"));
	caryll_setGlyphOrderByGID(map, 0x0048, sdsnew("H"));
	caryll_setGlyphOrderByGID(map, 0x25CF, sdsnew("H18533"));
	caryll_setGlyphOrderByGID(map, 0x25AA, sdsnew("H18543"));
	caryll_setGlyphOrderByGID(map, 0x25AB, sdsnew("H18551"));
	caryll_setGlyphOrderByGID(map, 0x25A1, sdsnew("H22073"));
	caryll_setGlyphOrderByGID(map, 0x0126, sdsnew("Hbar"));
	caryll_setGlyphOrderByGID(map, 0x0124, sdsnew("Hcircumflex"));
	caryll_setGlyphOrderByGID(map, 0x0049, sdsnew("I"));
	caryll_setGlyphOrderByGID(map, 0x0132, sdsnew("IJ"));
	caryll_setGlyphOrderByGID(map, 0x00CD, sdsnew("Iacute"));
	caryll_setGlyphOrderByGID(map, 0x012C, sdsnew("Ibreve"));
	caryll_setGlyphOrderByGID(map, 0x00CE, sdsnew("Icircumflex"));
	caryll_setGlyphOrderByGID(map, 0x00CF, sdsnew("Idieresis"));
	caryll_setGlyphOrderByGID(map, 0x0130, sdsnew("Idotaccent"));
	caryll_setGlyphOrderByGID(map, 0x2111, sdsnew("Ifraktur"));
	caryll_setGlyphOrderByGID(map, 0x00CC, sdsnew("Igrave"));
	caryll_setGlyphOrderByGID(map, 0x012A, sdsnew("Imacron"));
	caryll_setGlyphOrderByGID(map, 0x012E, sdsnew("Iogonek"));
	caryll_setGlyphOrderByGID(map, 0x0399, sdsnew("Iota"));
	caryll_setGlyphOrderByGID(map, 0x03AA, sdsnew("Iotadieresis"));
	caryll_setGlyphOrderByGID(map, 0x038A, sdsnew("Iotatonos"));
	caryll_setGlyphOrderByGID(map, 0x0128, sdsnew("Itilde"));
	caryll_setGlyphOrderByGID(map, 0x004A, sdsnew("J"));
	caryll_setGlyphOrderByGID(map, 0x0134, sdsnew("Jcircumflex"));
	caryll_setGlyphOrderByGID(map, 0x004B, sdsnew("K"));
	caryll_setGlyphOrderByGID(map, 0x039A, sdsnew("Kappa"));
	caryll_setGlyphOrderByGID(map, 0x004C, sdsnew("L"));
	caryll_setGlyphOrderByGID(map, 0x0139, sdsnew("Lacute"));
	caryll_setGlyphOrderByGID(map, 0x039B, sdsnew("Lambda"));
	caryll_setGlyphOrderByGID(map, 0x013D, sdsnew("Lcaron"));
	caryll_setGlyphOrderByGID(map, 0x013F, sdsnew("Ldot"));
	caryll_setGlyphOrderByGID(map, 0x0141, sdsnew("Lslash"));
	caryll_setGlyphOrderByGID(map, 0x004D, sdsnew("M"));
	caryll_setGlyphOrderByGID(map, 0x039C, sdsnew("Mu"));
	caryll_setGlyphOrderByGID(map, 0x004E, sdsnew("N"));
	caryll_setGlyphOrderByGID(map, 0x0143, sdsnew("Nacute"));
	caryll_setGlyphOrderByGID(map, 0x0147, sdsnew("Ncaron"));
	caryll_setGlyphOrderByGID(map, 0x00D1, sdsnew("Ntilde"));
	caryll_setGlyphOrderByGID(map, 0x039D, sdsnew("Nu"));
	caryll_setGlyphOrderByGID(map, 0x004F, sdsnew("O"));
	caryll_setGlyphOrderByGID(map, 0x0152, sdsnew("OE"));
	caryll_setGlyphOrderByGID(map, 0x00D3, sdsnew("Oacute"));
	caryll_setGlyphOrderByGID(map, 0x014E, sdsnew("Obreve"));
	caryll_setGlyphOrderByGID(map, 0x00D4, sdsnew("Ocircumflex"));
	caryll_setGlyphOrderByGID(map, 0x00D6, sdsnew("Odieresis"));
	caryll_setGlyphOrderByGID(map, 0x00D2, sdsnew("Ograve"));
	caryll_setGlyphOrderByGID(map, 0x01A0, sdsnew("Ohorn"));
	caryll_setGlyphOrderByGID(map, 0x0150, sdsnew("Ohungarumlaut"));
	caryll_setGlyphOrderByGID(map, 0x014C, sdsnew("Omacron"));
	caryll_setGlyphOrderByGID(map, 0x2126, sdsnew("Omega"));
	caryll_setGlyphOrderByGID(map, 0x038F, sdsnew("Omegatonos"));
	caryll_setGlyphOrderByGID(map, 0x039F, sdsnew("Omicron"));
	caryll_setGlyphOrderByGID(map, 0x038C, sdsnew("Omicrontonos"));
	caryll_setGlyphOrderByGID(map, 0x00D8, sdsnew("Oslash"));
	caryll_setGlyphOrderByGID(map, 0x01FE, sdsnew("Oslashacute"));
	caryll_setGlyphOrderByGID(map, 0x00D5, sdsnew("Otilde"));
	caryll_setGlyphOrderByGID(map, 0x0050, sdsnew("P"));
	caryll_setGlyphOrderByGID(map, 0x03A6, sdsnew("Phi"));
	caryll_setGlyphOrderByGID(map, 0x03A0, sdsnew("Pi"));
	caryll_setGlyphOrderByGID(map, 0x03A8, sdsnew("Psi"));
	caryll_setGlyphOrderByGID(map, 0x0051, sdsnew("Q"));
	caryll_setGlyphOrderByGID(map, 0x0052, sdsnew("R"));
	caryll_setGlyphOrderByGID(map, 0x0154, sdsnew("Racute"));
	caryll_setGlyphOrderByGID(map, 0x0158, sdsnew("Rcaron"));
	caryll_setGlyphOrderByGID(map, 0x211C, sdsnew("Rfraktur"));
	caryll_setGlyphOrderByGID(map, 0x03A1, sdsnew("Rho"));
	caryll_setGlyphOrderByGID(map, 0x0053, sdsnew("S"));
	caryll_setGlyphOrderByGID(map, 0x250C, sdsnew("SF010000"));
	caryll_setGlyphOrderByGID(map, 0x2514, sdsnew("SF020000"));
	caryll_setGlyphOrderByGID(map, 0x2510, sdsnew("SF030000"));
	caryll_setGlyphOrderByGID(map, 0x2518, sdsnew("SF040000"));
	caryll_setGlyphOrderByGID(map, 0x253C, sdsnew("SF050000"));
	caryll_setGlyphOrderByGID(map, 0x252C, sdsnew("SF060000"));
	caryll_setGlyphOrderByGID(map, 0x2534, sdsnew("SF070000"));
	caryll_setGlyphOrderByGID(map, 0x251C, sdsnew("SF080000"));
	caryll_setGlyphOrderByGID(map, 0x2524, sdsnew("SF090000"));
	caryll_setGlyphOrderByGID(map, 0x2500, sdsnew("SF100000"));
	caryll_setGlyphOrderByGID(map, 0x2502, sdsnew("SF110000"));
	caryll_setGlyphOrderByGID(map, 0x2561, sdsnew("SF190000"));
	caryll_setGlyphOrderByGID(map, 0x2562, sdsnew("SF200000"));
	caryll_setGlyphOrderByGID(map, 0x2556, sdsnew("SF210000"));
	caryll_setGlyphOrderByGID(map, 0x2555, sdsnew("SF220000"));
	caryll_setGlyphOrderByGID(map, 0x2563, sdsnew("SF230000"));
	caryll_setGlyphOrderByGID(map, 0x2551, sdsnew("SF240000"));
	caryll_setGlyphOrderByGID(map, 0x2557, sdsnew("SF250000"));
	caryll_setGlyphOrderByGID(map, 0x255D, sdsnew("SF260000"));
	caryll_setGlyphOrderByGID(map, 0x255C, sdsnew("SF270000"));
	caryll_setGlyphOrderByGID(map, 0x255B, sdsnew("SF280000"));
	caryll_setGlyphOrderByGID(map, 0x255E, sdsnew("SF360000"));
	caryll_setGlyphOrderByGID(map, 0x255F, sdsnew("SF370000"));
	caryll_setGlyphOrderByGID(map, 0x255A, sdsnew("SF380000"));
	caryll_setGlyphOrderByGID(map, 0x2554, sdsnew("SF390000"));
	caryll_setGlyphOrderByGID(map, 0x2569, sdsnew("SF400000"));
	caryll_setGlyphOrderByGID(map, 0x2566, sdsnew("SF410000"));
	caryll_setGlyphOrderByGID(map, 0x2560, sdsnew("SF420000"));
	caryll_setGlyphOrderByGID(map, 0x2550, sdsnew("SF430000"));
	caryll_setGlyphOrderByGID(map, 0x256C, sdsnew("SF440000"));
	caryll_setGlyphOrderByGID(map, 0x2567, sdsnew("SF450000"));
	caryll_setGlyphOrderByGID(map, 0x2568, sdsnew("SF460000"));
	caryll_setGlyphOrderByGID(map, 0x2564, sdsnew("SF470000"));
	caryll_setGlyphOrderByGID(map, 0x2565, sdsnew("SF480000"));
	caryll_setGlyphOrderByGID(map, 0x2559, sdsnew("SF490000"));
	caryll_setGlyphOrderByGID(map, 0x2558, sdsnew("SF500000"));
	caryll_setGlyphOrderByGID(map, 0x2552, sdsnew("SF510000"));
	caryll_setGlyphOrderByGID(map, 0x2553, sdsnew("SF520000"));
	caryll_setGlyphOrderByGID(map, 0x256B, sdsnew("SF530000"));
	caryll_setGlyphOrderByGID(map, 0x256A, sdsnew("SF540000"));
	caryll_setGlyphOrderByGID(map, 0x015A, sdsnew("Sacute"));
	caryll_setGlyphOrderByGID(map, 0x0160, sdsnew("Scaron"));
	caryll_setGlyphOrderByGID(map, 0x015E, sdsnew("Scedilla"));
	caryll_setGlyphOrderByGID(map, 0x015C, sdsnew("Scircumflex"));
	caryll_setGlyphOrderByGID(map, 0x03A3, sdsnew("Sigma"));
	caryll_setGlyphOrderByGID(map, 0x0054, sdsnew("T"));
	caryll_setGlyphOrderByGID(map, 0x03A4, sdsnew("Tau"));
	caryll_setGlyphOrderByGID(map, 0x0166, sdsnew("Tbar"));
	caryll_setGlyphOrderByGID(map, 0x0164, sdsnew("Tcaron"));
	caryll_setGlyphOrderByGID(map, 0x0398, sdsnew("Theta"));
	caryll_setGlyphOrderByGID(map, 0x00DE, sdsnew("Thorn"));
	caryll_setGlyphOrderByGID(map, 0x0055, sdsnew("U"));
	caryll_setGlyphOrderByGID(map, 0x00DA, sdsnew("Uacute"));
	caryll_setGlyphOrderByGID(map, 0x016C, sdsnew("Ubreve"));
	caryll_setGlyphOrderByGID(map, 0x00DB, sdsnew("Ucircumflex"));
	caryll_setGlyphOrderByGID(map, 0x00DC, sdsnew("Udieresis"));
	caryll_setGlyphOrderByGID(map, 0x00D9, sdsnew("Ugrave"));
	caryll_setGlyphOrderByGID(map, 0x01AF, sdsnew("Uhorn"));
	caryll_setGlyphOrderByGID(map, 0x0170, sdsnew("Uhungarumlaut"));
	caryll_setGlyphOrderByGID(map, 0x016A, sdsnew("Umacron"));
	caryll_setGlyphOrderByGID(map, 0x0172, sdsnew("Uogonek"));
	caryll_setGlyphOrderByGID(map, 0x03A5, sdsnew("Upsilon"));
	caryll_setGlyphOrderByGID(map, 0x03D2, sdsnew("Upsilon1"));
	caryll_setGlyphOrderByGID(map, 0x03AB, sdsnew("Upsilondieresis"));
	caryll_setGlyphOrderByGID(map, 0x038E, sdsnew("Upsilontonos"));
	caryll_setGlyphOrderByGID(map, 0x016E, sdsnew("Uring"));
	caryll_setGlyphOrderByGID(map, 0x0168, sdsnew("Utilde"));
	caryll_setGlyphOrderByGID(map, 0x0056, sdsnew("V"));
	caryll_setGlyphOrderByGID(map, 0x0057, sdsnew("W"));
	caryll_setGlyphOrderByGID(map, 0x1E82, sdsnew("Wacute"));
	caryll_setGlyphOrderByGID(map, 0x0174, sdsnew("Wcircumflex"));
	caryll_setGlyphOrderByGID(map, 0x1E84, sdsnew("Wdieresis"));
	caryll_setGlyphOrderByGID(map, 0x1E80, sdsnew("Wgrave"));
	caryll_setGlyphOrderByGID(map, 0x0058, sdsnew("X"));
	caryll_setGlyphOrderByGID(map, 0x039E, sdsnew("Xi"));
	caryll_setGlyphOrderByGID(map, 0x0059, sdsnew("Y"));
	caryll_setGlyphOrderByGID(map, 0x00DD, sdsnew("Yacute"));
	caryll_setGlyphOrderByGID(map, 0x0176, sdsnew("Ycircumflex"));
	caryll_setGlyphOrderByGID(map, 0x0178, sdsnew("Ydieresis"));
	caryll_setGlyphOrderByGID(map, 0x1EF2, sdsnew("Ygrave"));
	caryll_setGlyphOrderByGID(map, 0x005A, sdsnew("Z"));
	caryll_setGlyphOrderByGID(map, 0x0179, sdsnew("Zacute"));
	caryll_setGlyphOrderByGID(map, 0x017D, sdsnew("Zcaron"));
	caryll_setGlyphOrderByGID(map, 0x017B, sdsnew("Zdotaccent"));
	caryll_setGlyphOrderByGID(map, 0x0396, sdsnew("Zeta"));
	caryll_setGlyphOrderByGID(map, 0x0061, sdsnew("a"));
	caryll_setGlyphOrderByGID(map, 0x00E1, sdsnew("aacute"));
	caryll_setGlyphOrderByGID(map, 0x0103, sdsnew("abreve"));
	caryll_setGlyphOrderByGID(map, 0x00E2, sdsnew("acircumflex"));
	caryll_setGlyphOrderByGID(map, 0x00B4, sdsnew("acute"));
	caryll_setGlyphOrderByGID(map, 0x0301, sdsnew("acutecomb"));
	caryll_setGlyphOrderByGID(map, 0x00E4, sdsnew("adieresis"));
	caryll_setGlyphOrderByGID(map, 0x00E6, sdsnew("ae"));
	caryll_setGlyphOrderByGID(map, 0x01FD, sdsnew("aeacute"));
	caryll_setGlyphOrderByGID(map, 0x00E0, sdsnew("agrave"));
	caryll_setGlyphOrderByGID(map, 0x2135, sdsnew("aleph"));
	caryll_setGlyphOrderByGID(map, 0x03B1, sdsnew("alpha"));
	caryll_setGlyphOrderByGID(map, 0x03AC, sdsnew("alphatonos"));
	caryll_setGlyphOrderByGID(map, 0x0101, sdsnew("amacron"));
	caryll_setGlyphOrderByGID(map, 0x0026, sdsnew("ampersand"));
	caryll_setGlyphOrderByGID(map, 0x2220, sdsnew("angle"));
	caryll_setGlyphOrderByGID(map, 0x2329, sdsnew("angleleft"));
	caryll_setGlyphOrderByGID(map, 0x232A, sdsnew("angleright"));
	caryll_setGlyphOrderByGID(map, 0x0387, sdsnew("anoteleia"));
	caryll_setGlyphOrderByGID(map, 0x0105, sdsnew("aogonek"));
	caryll_setGlyphOrderByGID(map, 0x2248, sdsnew("approxequal"));
	caryll_setGlyphOrderByGID(map, 0x00E5, sdsnew("aring"));
	caryll_setGlyphOrderByGID(map, 0x01FB, sdsnew("aringacute"));
	caryll_setGlyphOrderByGID(map, 0x2194, sdsnew("arrowboth"));
	caryll_setGlyphOrderByGID(map, 0x21D4, sdsnew("arrowdblboth"));
	caryll_setGlyphOrderByGID(map, 0x21D3, sdsnew("arrowdbldown"));
	caryll_setGlyphOrderByGID(map, 0x21D0, sdsnew("arrowdblleft"));
	caryll_setGlyphOrderByGID(map, 0x21D2, sdsnew("arrowdblright"));
	caryll_setGlyphOrderByGID(map, 0x21D1, sdsnew("arrowdblup"));
	caryll_setGlyphOrderByGID(map, 0x2193, sdsnew("arrowdown"));
	caryll_setGlyphOrderByGID(map, 0x2190, sdsnew("arrowleft"));
	caryll_setGlyphOrderByGID(map, 0x2192, sdsnew("arrowright"));
	caryll_setGlyphOrderByGID(map, 0x2191, sdsnew("arrowup"));
	caryll_setGlyphOrderByGID(map, 0x2195, sdsnew("arrowupdn"));
	caryll_setGlyphOrderByGID(map, 0x21A8, sdsnew("arrowupdnbse"));
	caryll_setGlyphOrderByGID(map, 0x005E, sdsnew("asciicircum"));
	caryll_setGlyphOrderByGID(map, 0x007E, sdsnew("asciitilde"));
	caryll_setGlyphOrderByGID(map, 0x002A, sdsnew("asterisk"));
	caryll_setGlyphOrderByGID(map, 0x2217, sdsnew("asteriskmath"));
	caryll_setGlyphOrderByGID(map, 0x0040, sdsnew("at"));
	caryll_setGlyphOrderByGID(map, 0x00E3, sdsnew("atilde"));
	caryll_setGlyphOrderByGID(map, 0x0062, sdsnew("b"));
	caryll_setGlyphOrderByGID(map, 0x005C, sdsnew("backslash"));
	caryll_setGlyphOrderByGID(map, 0x007C, sdsnew("bar"));
	caryll_setGlyphOrderByGID(map, 0x03B2, sdsnew("beta"));
	caryll_setGlyphOrderByGID(map, 0x2588, sdsnew("block"));
	caryll_setGlyphOrderByGID(map, 0x007B, sdsnew("braceleft"));
	caryll_setGlyphOrderByGID(map, 0x007D, sdsnew("braceright"));
	caryll_setGlyphOrderByGID(map, 0x005B, sdsnew("bracketleft"));
	caryll_setGlyphOrderByGID(map, 0x005D, sdsnew("bracketright"));
	caryll_setGlyphOrderByGID(map, 0x02D8, sdsnew("breve"));
	caryll_setGlyphOrderByGID(map, 0x00A6, sdsnew("brokenbar"));
	caryll_setGlyphOrderByGID(map, 0x2022, sdsnew("bullet"));
	caryll_setGlyphOrderByGID(map, 0x0063, sdsnew("c"));
	caryll_setGlyphOrderByGID(map, 0x0107, sdsnew("cacute"));
	caryll_setGlyphOrderByGID(map, 0x02C7, sdsnew("caron"));
	caryll_setGlyphOrderByGID(map, 0x21B5, sdsnew("carriagereturn"));
	caryll_setGlyphOrderByGID(map, 0x010D, sdsnew("ccaron"));
	caryll_setGlyphOrderByGID(map, 0x00E7, sdsnew("ccedilla"));
	caryll_setGlyphOrderByGID(map, 0x0109, sdsnew("ccircumflex"));
	caryll_setGlyphOrderByGID(map, 0x010B, sdsnew("cdotaccent"));
	caryll_setGlyphOrderByGID(map, 0x00B8, sdsnew("cedilla"));
	caryll_setGlyphOrderByGID(map, 0x00A2, sdsnew("cent"));
	caryll_setGlyphOrderByGID(map, 0x03C7, sdsnew("chi"));
	caryll_setGlyphOrderByGID(map, 0x25CB, sdsnew("circle"));
	caryll_setGlyphOrderByGID(map, 0x2297, sdsnew("circlemultiply"));
	caryll_setGlyphOrderByGID(map, 0x2295, sdsnew("circleplus"));
	caryll_setGlyphOrderByGID(map, 0x02C6, sdsnew("circumflex"));
	caryll_setGlyphOrderByGID(map, 0x2663, sdsnew("club"));
	caryll_setGlyphOrderByGID(map, 0x003A, sdsnew("colon"));
	caryll_setGlyphOrderByGID(map, 0x20A1, sdsnew("colonmonetary"));
	caryll_setGlyphOrderByGID(map, 0x002C, sdsnew("comma"));
	caryll_setGlyphOrderByGID(map, 0x2245, sdsnew("congruent"));
	caryll_setGlyphOrderByGID(map, 0x00A9, sdsnew("copyright"));
	caryll_setGlyphOrderByGID(map, 0x00A4, sdsnew("currency"));
	caryll_setGlyphOrderByGID(map, 0x0064, sdsnew("d"));
	caryll_setGlyphOrderByGID(map, 0x2020, sdsnew("dagger"));
	caryll_setGlyphOrderByGID(map, 0x2021, sdsnew("daggerdbl"));
	caryll_setGlyphOrderByGID(map, 0x010F, sdsnew("dcaron"));
	caryll_setGlyphOrderByGID(map, 0x0111, sdsnew("dcroat"));
	caryll_setGlyphOrderByGID(map, 0x00B0, sdsnew("degree"));
	caryll_setGlyphOrderByGID(map, 0x03B4, sdsnew("delta"));
	caryll_setGlyphOrderByGID(map, 0x2666, sdsnew("diamond"));
	caryll_setGlyphOrderByGID(map, 0x00A8, sdsnew("dieresis"));
	caryll_setGlyphOrderByGID(map, 0x0385, sdsnew("dieresistonos"));
	caryll_setGlyphOrderByGID(map, 0x00F7, sdsnew("divide"));
	caryll_setGlyphOrderByGID(map, 0x2593, sdsnew("dkshade"));
	caryll_setGlyphOrderByGID(map, 0x2584, sdsnew("dnblock"));
	caryll_setGlyphOrderByGID(map, 0x0024, sdsnew("dollar"));
	caryll_setGlyphOrderByGID(map, 0x20AB, sdsnew("dong"));
	caryll_setGlyphOrderByGID(map, 0x02D9, sdsnew("dotaccent"));
	caryll_setGlyphOrderByGID(map, 0x0323, sdsnew("dotbelowcomb"));
	caryll_setGlyphOrderByGID(map, 0x0131, sdsnew("dotlessi"));
	caryll_setGlyphOrderByGID(map, 0x22C5, sdsnew("dotmath"));
	caryll_setGlyphOrderByGID(map, 0x0065, sdsnew("e"));
	caryll_setGlyphOrderByGID(map, 0x00E9, sdsnew("eacute"));
	caryll_setGlyphOrderByGID(map, 0x0115, sdsnew("ebreve"));
	caryll_setGlyphOrderByGID(map, 0x011B, sdsnew("ecaron"));
	caryll_setGlyphOrderByGID(map, 0x00EA, sdsnew("ecircumflex"));
	caryll_setGlyphOrderByGID(map, 0x00EB, sdsnew("edieresis"));
	caryll_setGlyphOrderByGID(map, 0x0117, sdsnew("edotaccent"));
	caryll_setGlyphOrderByGID(map, 0x00E8, sdsnew("egrave"));
	caryll_setGlyphOrderByGID(map, 0x0038, sdsnew("eight"));
	caryll_setGlyphOrderByGID(map, 0x2208, sdsnew("element"));
	caryll_setGlyphOrderByGID(map, 0x2026, sdsnew("ellipsis"));
	caryll_setGlyphOrderByGID(map, 0x0113, sdsnew("emacron"));
	caryll_setGlyphOrderByGID(map, 0x2014, sdsnew("emdash"));
	caryll_setGlyphOrderByGID(map, 0x2205, sdsnew("emptyset"));
	caryll_setGlyphOrderByGID(map, 0x2013, sdsnew("endash"));
	caryll_setGlyphOrderByGID(map, 0x014B, sdsnew("eng"));
	caryll_setGlyphOrderByGID(map, 0x0119, sdsnew("eogonek"));
	caryll_setGlyphOrderByGID(map, 0x03B5, sdsnew("epsilon"));
	caryll_setGlyphOrderByGID(map, 0x03AD, sdsnew("epsilontonos"));
	caryll_setGlyphOrderByGID(map, 0x003D, sdsnew("equal"));
	caryll_setGlyphOrderByGID(map, 0x2261, sdsnew("equivalence"));
	caryll_setGlyphOrderByGID(map, 0x212E, sdsnew("estimated"));
	caryll_setGlyphOrderByGID(map, 0x03B7, sdsnew("eta"));
	caryll_setGlyphOrderByGID(map, 0x03AE, sdsnew("etatonos"));
	caryll_setGlyphOrderByGID(map, 0x00F0, sdsnew("eth"));
	caryll_setGlyphOrderByGID(map, 0x0021, sdsnew("exclam"));
	caryll_setGlyphOrderByGID(map, 0x203C, sdsnew("exclamdbl"));
	caryll_setGlyphOrderByGID(map, 0x00A1, sdsnew("exclamdown"));
	caryll_setGlyphOrderByGID(map, 0x2203, sdsnew("existential"));
	caryll_setGlyphOrderByGID(map, 0x0066, sdsnew("f"));
	caryll_setGlyphOrderByGID(map, 0x2640, sdsnew("female"));
	caryll_setGlyphOrderByGID(map, 0x2012, sdsnew("figuredash"));
	caryll_setGlyphOrderByGID(map, 0x25A0, sdsnew("filledbox"));
	caryll_setGlyphOrderByGID(map, 0x25AC, sdsnew("filledrect"));
	caryll_setGlyphOrderByGID(map, 0x0035, sdsnew("five"));
	caryll_setGlyphOrderByGID(map, 0x215D, sdsnew("fiveeighths"));
	caryll_setGlyphOrderByGID(map, 0x0192, sdsnew("florin"));
	caryll_setGlyphOrderByGID(map, 0x0034, sdsnew("four"));
	caryll_setGlyphOrderByGID(map, 0x2044, sdsnew("fraction"));
	caryll_setGlyphOrderByGID(map, 0x20A3, sdsnew("franc"));
	caryll_setGlyphOrderByGID(map, 0x0067, sdsnew("g"));
	caryll_setGlyphOrderByGID(map, 0x03B3, sdsnew("gamma"));
	caryll_setGlyphOrderByGID(map, 0x011F, sdsnew("gbreve"));
	caryll_setGlyphOrderByGID(map, 0x01E7, sdsnew("gcaron"));
	caryll_setGlyphOrderByGID(map, 0x011D, sdsnew("gcircumflex"));
	caryll_setGlyphOrderByGID(map, 0x0121, sdsnew("gdotaccent"));
	caryll_setGlyphOrderByGID(map, 0x00DF, sdsnew("germandbls"));
	caryll_setGlyphOrderByGID(map, 0x2207, sdsnew("gradient"));
	caryll_setGlyphOrderByGID(map, 0x0060, sdsnew("grave"));
	caryll_setGlyphOrderByGID(map, 0x0300, sdsnew("gravecomb"));
	caryll_setGlyphOrderByGID(map, 0x003E, sdsnew("greater"));
	caryll_setGlyphOrderByGID(map, 0x2265, sdsnew("greaterequal"));
	caryll_setGlyphOrderByGID(map, 0x00AB, sdsnew("guillemotleft"));
	caryll_setGlyphOrderByGID(map, 0x00BB, sdsnew("guillemotright"));
	caryll_setGlyphOrderByGID(map, 0x2039, sdsnew("guilsinglleft"));
	caryll_setGlyphOrderByGID(map, 0x203A, sdsnew("guilsinglright"));
	caryll_setGlyphOrderByGID(map, 0x0068, sdsnew("h"));
	caryll_setGlyphOrderByGID(map, 0x0127, sdsnew("hbar"));
	caryll_setGlyphOrderByGID(map, 0x0125, sdsnew("hcircumflex"));
	caryll_setGlyphOrderByGID(map, 0x2665, sdsnew("heart"));
	caryll_setGlyphOrderByGID(map, 0x0309, sdsnew("hookabovecomb"));
	caryll_setGlyphOrderByGID(map, 0x2302, sdsnew("house"));
	caryll_setGlyphOrderByGID(map, 0x02DD, sdsnew("hungarumlaut"));
	caryll_setGlyphOrderByGID(map, 0x002D, sdsnew("hyphen"));
	caryll_setGlyphOrderByGID(map, 0x0069, sdsnew("i"));
	caryll_setGlyphOrderByGID(map, 0x00ED, sdsnew("iacute"));
	caryll_setGlyphOrderByGID(map, 0x012D, sdsnew("ibreve"));
	caryll_setGlyphOrderByGID(map, 0x00EE, sdsnew("icircumflex"));
	caryll_setGlyphOrderByGID(map, 0x00EF, sdsnew("idieresis"));
	caryll_setGlyphOrderByGID(map, 0x00EC, sdsnew("igrave"));
	caryll_setGlyphOrderByGID(map, 0x0133, sdsnew("ij"));
	caryll_setGlyphOrderByGID(map, 0x012B, sdsnew("imacron"));
	caryll_setGlyphOrderByGID(map, 0x221E, sdsnew("infinity"));
	caryll_setGlyphOrderByGID(map, 0x222B, sdsnew("integral"));
	caryll_setGlyphOrderByGID(map, 0x2321, sdsnew("integralbt"));
	caryll_setGlyphOrderByGID(map, 0x2320, sdsnew("integraltp"));
	caryll_setGlyphOrderByGID(map, 0x2229, sdsnew("intersection"));
	caryll_setGlyphOrderByGID(map, 0x25D8, sdsnew("invbullet"));
	caryll_setGlyphOrderByGID(map, 0x25D9, sdsnew("invcircle"));
	caryll_setGlyphOrderByGID(map, 0x263B, sdsnew("invsmileface"));
	caryll_setGlyphOrderByGID(map, 0x012F, sdsnew("iogonek"));
	caryll_setGlyphOrderByGID(map, 0x03B9, sdsnew("iota"));
	caryll_setGlyphOrderByGID(map, 0x03CA, sdsnew("iotadieresis"));
	caryll_setGlyphOrderByGID(map, 0x0390, sdsnew("iotadieresistonos"));
	caryll_setGlyphOrderByGID(map, 0x03AF, sdsnew("iotatonos"));
	caryll_setGlyphOrderByGID(map, 0x0129, sdsnew("itilde"));
	caryll_setGlyphOrderByGID(map, 0x006A, sdsnew("j"));
	caryll_setGlyphOrderByGID(map, 0x0135, sdsnew("jcircumflex"));
	caryll_setGlyphOrderByGID(map, 0x006B, sdsnew("k"));
	caryll_setGlyphOrderByGID(map, 0x03BA, sdsnew("kappa"));
	caryll_setGlyphOrderByGID(map, 0x0138, sdsnew("kgreenlandic"));
	caryll_setGlyphOrderByGID(map, 0x006C, sdsnew("l"));
	caryll_setGlyphOrderByGID(map, 0x013A, sdsnew("lacute"));
	caryll_setGlyphOrderByGID(map, 0x03BB, sdsnew("lambda"));
	caryll_setGlyphOrderByGID(map, 0x013E, sdsnew("lcaron"));
	caryll_setGlyphOrderByGID(map, 0x0140, sdsnew("ldot"));
	caryll_setGlyphOrderByGID(map, 0x003C, sdsnew("less"));
	caryll_setGlyphOrderByGID(map, 0x2264, sdsnew("lessequal"));
	caryll_setGlyphOrderByGID(map, 0x258C, sdsnew("lfblock"));
	caryll_setGlyphOrderByGID(map, 0x20A4, sdsnew("lira"));
	caryll_setGlyphOrderByGID(map, 0x2227, sdsnew("logicaland"));
	caryll_setGlyphOrderByGID(map, 0x00AC, sdsnew("logicalnot"));
	caryll_setGlyphOrderByGID(map, 0x2228, sdsnew("logicalor"));
	caryll_setGlyphOrderByGID(map, 0x017F, sdsnew("longs"));
	caryll_setGlyphOrderByGID(map, 0x25CA, sdsnew("lozenge"));
	caryll_setGlyphOrderByGID(map, 0x0142, sdsnew("lslash"));
	caryll_setGlyphOrderByGID(map, 0x2591, sdsnew("ltshade"));
	caryll_setGlyphOrderByGID(map, 0x006D, sdsnew("m"));
	caryll_setGlyphOrderByGID(map, 0x00AF, sdsnew("macron"));
	caryll_setGlyphOrderByGID(map, 0x2642, sdsnew("male"));
	caryll_setGlyphOrderByGID(map, 0x2212, sdsnew("minus"));
	caryll_setGlyphOrderByGID(map, 0x2032, sdsnew("minute"));
	caryll_setGlyphOrderByGID(map, 0x00B5, sdsnew("mu"));
	caryll_setGlyphOrderByGID(map, 0x00D7, sdsnew("multiply"));
	caryll_setGlyphOrderByGID(map, 0x266A, sdsnew("musicalnote"));
	caryll_setGlyphOrderByGID(map, 0x266B, sdsnew("musicalnotedbl"));
	caryll_setGlyphOrderByGID(map, 0x006E, sdsnew("n"));
	caryll_setGlyphOrderByGID(map, 0x0144, sdsnew("nacute"));
	caryll_setGlyphOrderByGID(map, 0x0149, sdsnew("napostrophe"));
	caryll_setGlyphOrderByGID(map, 0x0148, sdsnew("ncaron"));
	caryll_setGlyphOrderByGID(map, 0x0039, sdsnew("nine"));
	caryll_setGlyphOrderByGID(map, 0x2209, sdsnew("notelement"));
	caryll_setGlyphOrderByGID(map, 0x2260, sdsnew("notequal"));
	caryll_setGlyphOrderByGID(map, 0x2284, sdsnew("notsubset"));
	caryll_setGlyphOrderByGID(map, 0x00F1, sdsnew("ntilde"));
	caryll_setGlyphOrderByGID(map, 0x03BD, sdsnew("nu"));
	caryll_setGlyphOrderByGID(map, 0x0023, sdsnew("numbersign"));
	caryll_setGlyphOrderByGID(map, 0x006F, sdsnew("o"));
	caryll_setGlyphOrderByGID(map, 0x00F3, sdsnew("oacute"));
	caryll_setGlyphOrderByGID(map, 0x014F, sdsnew("obreve"));
	caryll_setGlyphOrderByGID(map, 0x00F4, sdsnew("ocircumflex"));
	caryll_setGlyphOrderByGID(map, 0x00F6, sdsnew("odieresis"));
	caryll_setGlyphOrderByGID(map, 0x0153, sdsnew("oe"));
	caryll_setGlyphOrderByGID(map, 0x02DB, sdsnew("ogonek"));
	caryll_setGlyphOrderByGID(map, 0x00F2, sdsnew("ograve"));
	caryll_setGlyphOrderByGID(map, 0x01A1, sdsnew("ohorn"));
	caryll_setGlyphOrderByGID(map, 0x0151, sdsnew("ohungarumlaut"));
	caryll_setGlyphOrderByGID(map, 0x014D, sdsnew("omacron"));
	caryll_setGlyphOrderByGID(map, 0x03C9, sdsnew("omega"));
	caryll_setGlyphOrderByGID(map, 0x03D6, sdsnew("omega1"));
	caryll_setGlyphOrderByGID(map, 0x03CE, sdsnew("omegatonos"));
	caryll_setGlyphOrderByGID(map, 0x03BF, sdsnew("omicron"));
	caryll_setGlyphOrderByGID(map, 0x03CC, sdsnew("omicrontonos"));
	caryll_setGlyphOrderByGID(map, 0x0031, sdsnew("one"));
	caryll_setGlyphOrderByGID(map, 0x2024, sdsnew("onedotenleader"));
	caryll_setGlyphOrderByGID(map, 0x215B, sdsnew("oneeighth"));
	caryll_setGlyphOrderByGID(map, 0x00BD, sdsnew("onehalf"));
	caryll_setGlyphOrderByGID(map, 0x00BC, sdsnew("onequarter"));
	caryll_setGlyphOrderByGID(map, 0x2153, sdsnew("onethird"));
	caryll_setGlyphOrderByGID(map, 0x25E6, sdsnew("openbullet"));
	caryll_setGlyphOrderByGID(map, 0x00AA, sdsnew("ordfeminine"));
	caryll_setGlyphOrderByGID(map, 0x00BA, sdsnew("ordmasculine"));
	caryll_setGlyphOrderByGID(map, 0x221F, sdsnew("orthogonal"));
	caryll_setGlyphOrderByGID(map, 0x00F8, sdsnew("oslash"));
	caryll_setGlyphOrderByGID(map, 0x01FF, sdsnew("oslashacute"));
	caryll_setGlyphOrderByGID(map, 0x00F5, sdsnew("otilde"));
	caryll_setGlyphOrderByGID(map, 0x0070, sdsnew("p"));
	caryll_setGlyphOrderByGID(map, 0x00B6, sdsnew("paragraph"));
	caryll_setGlyphOrderByGID(map, 0x0028, sdsnew("parenleft"));
	caryll_setGlyphOrderByGID(map, 0x0029, sdsnew("parenright"));
	caryll_setGlyphOrderByGID(map, 0x2202, sdsnew("partialdiff"));
	caryll_setGlyphOrderByGID(map, 0x0025, sdsnew("percent"));
	caryll_setGlyphOrderByGID(map, 0x002E, sdsnew("period"));
	caryll_setGlyphOrderByGID(map, 0x00B7, sdsnew("periodcentered"));
	caryll_setGlyphOrderByGID(map, 0x22A5, sdsnew("perpendicular"));
	caryll_setGlyphOrderByGID(map, 0x2030, sdsnew("perthousand"));
	caryll_setGlyphOrderByGID(map, 0x20A7, sdsnew("peseta"));
	caryll_setGlyphOrderByGID(map, 0x03C6, sdsnew("phi"));
	caryll_setGlyphOrderByGID(map, 0x03D5, sdsnew("phi1"));
	caryll_setGlyphOrderByGID(map, 0x03C0, sdsnew("pi"));
	caryll_setGlyphOrderByGID(map, 0x002B, sdsnew("plus"));
	caryll_setGlyphOrderByGID(map, 0x00B1, sdsnew("plusminus"));
	caryll_setGlyphOrderByGID(map, 0x211E, sdsnew("prescription"));
	caryll_setGlyphOrderByGID(map, 0x220F, sdsnew("product"));
	caryll_setGlyphOrderByGID(map, 0x2282, sdsnew("propersubset"));
	caryll_setGlyphOrderByGID(map, 0x2283, sdsnew("propersuperset"));
	caryll_setGlyphOrderByGID(map, 0x221D, sdsnew("proportional"));
	caryll_setGlyphOrderByGID(map, 0x03C8, sdsnew("psi"));
	caryll_setGlyphOrderByGID(map, 0x0071, sdsnew("q"));
	caryll_setGlyphOrderByGID(map, 0x003F, sdsnew("question"));
	caryll_setGlyphOrderByGID(map, 0x00BF, sdsnew("questiondown"));
	caryll_setGlyphOrderByGID(map, 0x0022, sdsnew("quotedbl"));
	caryll_setGlyphOrderByGID(map, 0x201E, sdsnew("quotedblbase"));
	caryll_setGlyphOrderByGID(map, 0x201C, sdsnew("quotedblleft"));
	caryll_setGlyphOrderByGID(map, 0x201D, sdsnew("quotedblright"));
	caryll_setGlyphOrderByGID(map, 0x2018, sdsnew("quoteleft"));
	caryll_setGlyphOrderByGID(map, 0x201B, sdsnew("quotereversed"));
	caryll_setGlyphOrderByGID(map, 0x2019, sdsnew("quoteright"));
	caryll_setGlyphOrderByGID(map, 0x201A, sdsnew("quotesinglbase"));
	caryll_setGlyphOrderByGID(map, 0x0027, sdsnew("quotesingle"));
	caryll_setGlyphOrderByGID(map, 0x0072, sdsnew("r"));
	caryll_setGlyphOrderByGID(map, 0x0155, sdsnew("racute"));
	caryll_setGlyphOrderByGID(map, 0x221A, sdsnew("radical"));
	caryll_setGlyphOrderByGID(map, 0x0159, sdsnew("rcaron"));
	caryll_setGlyphOrderByGID(map, 0x2286, sdsnew("reflexsubset"));
	caryll_setGlyphOrderByGID(map, 0x2287, sdsnew("reflexsuperset"));
	caryll_setGlyphOrderByGID(map, 0x00AE, sdsnew("registered"));
	caryll_setGlyphOrderByGID(map, 0x2310, sdsnew("revlogicalnot"));
	caryll_setGlyphOrderByGID(map, 0x03C1, sdsnew("rho"));
	caryll_setGlyphOrderByGID(map, 0x02DA, sdsnew("ring"));
	caryll_setGlyphOrderByGID(map, 0x2590, sdsnew("rtblock"));
	caryll_setGlyphOrderByGID(map, 0x0073, sdsnew("s"));
	caryll_setGlyphOrderByGID(map, 0x015B, sdsnew("sacute"));
	caryll_setGlyphOrderByGID(map, 0x0161, sdsnew("scaron"));
	caryll_setGlyphOrderByGID(map, 0x015F, sdsnew("scedilla"));
	caryll_setGlyphOrderByGID(map, 0x015D, sdsnew("scircumflex"));
	caryll_setGlyphOrderByGID(map, 0x2033, sdsnew("second"));
	caryll_setGlyphOrderByGID(map, 0x00A7, sdsnew("section"));
	caryll_setGlyphOrderByGID(map, 0x003B, sdsnew("semicolon"));
	caryll_setGlyphOrderByGID(map, 0x0037, sdsnew("seven"));
	caryll_setGlyphOrderByGID(map, 0x215E, sdsnew("seveneighths"));
	caryll_setGlyphOrderByGID(map, 0x2592, sdsnew("shade"));
	caryll_setGlyphOrderByGID(map, 0x03C3, sdsnew("sigma"));
	caryll_setGlyphOrderByGID(map, 0x03C2, sdsnew("sigma1"));
	caryll_setGlyphOrderByGID(map, 0x223C, sdsnew("similar"));
	caryll_setGlyphOrderByGID(map, 0x0036, sdsnew("six"));
	caryll_setGlyphOrderByGID(map, 0x002F, sdsnew("slash"));
	caryll_setGlyphOrderByGID(map, 0x263A, sdsnew("smileface"));
	caryll_setGlyphOrderByGID(map, 0x0020, sdsnew("space"));
	caryll_setGlyphOrderByGID(map, 0x2660, sdsnew("spade"));
	caryll_setGlyphOrderByGID(map, 0x00A3, sdsnew("sterling"));
	caryll_setGlyphOrderByGID(map, 0x220B, sdsnew("suchthat"));
	caryll_setGlyphOrderByGID(map, 0x2211, sdsnew("summation"));
	caryll_setGlyphOrderByGID(map, 0x263C, sdsnew("sun"));
	caryll_setGlyphOrderByGID(map, 0x0074, sdsnew("t"));
	caryll_setGlyphOrderByGID(map, 0x03C4, sdsnew("tau"));
	caryll_setGlyphOrderByGID(map, 0x0167, sdsnew("tbar"));
	caryll_setGlyphOrderByGID(map, 0x0165, sdsnew("tcaron"));
	caryll_setGlyphOrderByGID(map, 0x2234, sdsnew("therefore"));
	caryll_setGlyphOrderByGID(map, 0x03B8, sdsnew("theta"));
	caryll_setGlyphOrderByGID(map, 0x03D1, sdsnew("theta1"));
	caryll_setGlyphOrderByGID(map, 0x00FE, sdsnew("thorn"));
	caryll_setGlyphOrderByGID(map, 0x0033, sdsnew("three"));
	caryll_setGlyphOrderByGID(map, 0x215C, sdsnew("threeeighths"));
	caryll_setGlyphOrderByGID(map, 0x00BE, sdsnew("threequarters"));
	caryll_setGlyphOrderByGID(map, 0x02DC, sdsnew("tilde"));
	caryll_setGlyphOrderByGID(map, 0x0303, sdsnew("tildecomb"));
	caryll_setGlyphOrderByGID(map, 0x0384, sdsnew("tonos"));
	caryll_setGlyphOrderByGID(map, 0x2122, sdsnew("trademark"));
	caryll_setGlyphOrderByGID(map, 0x25BC, sdsnew("triagdn"));
	caryll_setGlyphOrderByGID(map, 0x25C4, sdsnew("triaglf"));
	caryll_setGlyphOrderByGID(map, 0x25BA, sdsnew("triagrt"));
	caryll_setGlyphOrderByGID(map, 0x25B2, sdsnew("triagup"));
	caryll_setGlyphOrderByGID(map, 0x0032, sdsnew("two"));
	caryll_setGlyphOrderByGID(map, 0x2025, sdsnew("twodotenleader"));
	caryll_setGlyphOrderByGID(map, 0x2154, sdsnew("twothirds"));
	caryll_setGlyphOrderByGID(map, 0x0075, sdsnew("u"));
	caryll_setGlyphOrderByGID(map, 0x00FA, sdsnew("uacute"));
	caryll_setGlyphOrderByGID(map, 0x016D, sdsnew("ubreve"));
	caryll_setGlyphOrderByGID(map, 0x00FB, sdsnew("ucircumflex"));
	caryll_setGlyphOrderByGID(map, 0x00FC, sdsnew("udieresis"));
	caryll_setGlyphOrderByGID(map, 0x00F9, sdsnew("ugrave"));
	caryll_setGlyphOrderByGID(map, 0x01B0, sdsnew("uhorn"));
	caryll_setGlyphOrderByGID(map, 0x0171, sdsnew("uhungarumlaut"));
	caryll_setGlyphOrderByGID(map, 0x016B, sdsnew("umacron"));
	caryll_setGlyphOrderByGID(map, 0x005F, sdsnew("underscore"));
	caryll_setGlyphOrderByGID(map, 0x2017, sdsnew("underscoredbl"));
	caryll_setGlyphOrderByGID(map, 0x222A, sdsnew("union"));
	caryll_setGlyphOrderByGID(map, 0x2200, sdsnew("universal"));
	caryll_setGlyphOrderByGID(map, 0x0173, sdsnew("uogonek"));
	caryll_setGlyphOrderByGID(map, 0x2580, sdsnew("upblock"));
	caryll_setGlyphOrderByGID(map, 0x03C5, sdsnew("upsilon"));
	caryll_setGlyphOrderByGID(map, 0x03CB, sdsnew("upsilondieresis"));
	caryll_setGlyphOrderByGID(map, 0x03B0, sdsnew("upsilondieresistonos"));
	caryll_setGlyphOrderByGID(map, 0x03CD, sdsnew("upsilontonos"));
	caryll_setGlyphOrderByGID(map, 0x016F, sdsnew("uring"));
	caryll_setGlyphOrderByGID(map, 0x0169, sdsnew("utilde"));
	caryll_setGlyphOrderByGID(map, 0x0076, sdsnew("v"));
	caryll_setGlyphOrderByGID(map, 0x0077, sdsnew("w"));
	caryll_setGlyphOrderByGID(map, 0x1E83, sdsnew("wacute"));
	caryll_setGlyphOrderByGID(map, 0x0175, sdsnew("wcircumflex"));
	caryll_setGlyphOrderByGID(map, 0x1E85, sdsnew("wdieresis"));
	caryll_setGlyphOrderByGID(map, 0x2118, sdsnew("weierstrass"));
	caryll_setGlyphOrderByGID(map, 0x1E81, sdsnew("wgrave"));
	caryll_setGlyphOrderByGID(map, 0x0078, sdsnew("x"));
	caryll_setGlyphOrderByGID(map, 0x03BE, sdsnew("xi"));
	caryll_setGlyphOrderByGID(map, 0x0079, sdsnew("y"));
	caryll_setGlyphOrderByGID(map, 0x00FD, sdsnew("yacute"));
	caryll_setGlyphOrderByGID(map, 0x0177, sdsnew("ycircumflex"));
	caryll_setGlyphOrderByGID(map, 0x00FF, sdsnew("ydieresis"));
	caryll_setGlyphOrderByGID(map, 0x00A5, sdsnew("yen"));
	caryll_setGlyphOrderByGID(map, 0x1EF3, sdsnew("ygrave"));
	caryll_setGlyphOrderByGID(map, 0x007A, sdsnew("z"));
	caryll_setGlyphOrderByGID(map, 0x017A, sdsnew("zacute"));
	caryll_setGlyphOrderByGID(map, 0x017E, sdsnew("zcaron"));
	caryll_setGlyphOrderByGID(map, 0x017C, sdsnew("zdotaccent"));
	caryll_setGlyphOrderByGID(map, 0x0030, sdsnew("zero"));
	caryll_setGlyphOrderByGID(map, 0x03B6, sdsnew("zeta"));
}

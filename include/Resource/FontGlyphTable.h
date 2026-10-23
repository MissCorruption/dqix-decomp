#pragma once

#include <globaldefs.h>

struct Entry020429e4 {
    unsigned char first;
    unsigned char second;
};

struct Table020429e4 {
    unsigned short glyphBytes;
    unsigned char glyphWidth;
    unsigned char glyphHeight;
    char unknown4[2];
    short glyphCount;
    Entry020429e4* keys;
    char* glyphs;
};

typedef Table020429e4 FontGlyphTable;

extern "C" FontGlyphTable* func_020429bc(int pixelSize);
#if defined(jpn)
extern "C" char* func_02043060(FontGlyphTable* table, const unsigned char* encodedCharacter);
#define func_020429e4 func_02043060
#else
extern "C" char* func_020429e4(FontGlyphTable* table, const unsigned char* encodedCharacter);
#endif
extern "C" char* func_02042a50(int pixelSize, const char* encodedCharacter);

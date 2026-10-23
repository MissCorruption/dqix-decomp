#include <globaldefs.h>
#include "Resource/MessageGlyphSlot.h"

struct Rect0205b1ac;
struct GlyphDestination0205b234 { unsigned char* pixels; Rect0205b1ac* rectangles; unsigned char rectangleCount; };

#if defined(jpn)
extern "C" FontCharacter* func_02042a50(unsigned char size, const char* text);
extern "C" void func_0205b36c(GlyphDestination0205b234* destination, FontCharacter* glyph, short x, short y, int size, int font);

// JPN: func_0205b234 (fixed-width Shift-JIS text)
extern "C" ARM void func_0205b234(GlyphDestination0205b234* destination, short x, short y, const char* text, unsigned char size, int font) {
    if (destination->pixels == 0 || destination->rectangles == 0 || destination->rectangleCount == 0 || text == 0) return;
    unsigned char w = size;
    while (*text != 0) {
        FontCharacter* character = func_02042a50(w, text);
        if (character != 0) func_0205b36c(destination, character, x, y, w & 0xff, font);
        unsigned char lead = *text;
        if ((lead >= 0x81 && lead <= 0x9f) || (lead >= 0xe0 && lead <= 0xea)) text++;
        text++;
        x += w;
    }
}
#else
extern "C" int func_02042648(int);
extern "C" int func_020424e4(int, int);
extern "C" int func_020425e4(int, int, int);
extern "C" FontCharacter* func_020425b4(int index, int fontIndex);
extern "C" void func_0205b36c(GlyphDestination0205b234* destination, FontCharacter* glyph, short x, short y, unsigned char color, unsigned char font);

// USA: func_0205b234
extern "C" ARM int func_0205b234(GlyphDestination0205b234* destination, short x, short y, const char* text, unsigned char color, unsigned char font) {
    if (destination->pixels == 0) return 0;
    if (destination->rectangles == 0) return 0;
    if (destination->rectangleCount == 0) return 0;
    if (text == 0) return 0;
    unsigned char fallbackWidth = func_02042648(font);
    int previousCharacter = 0xff;
    short cursorX = x;
    while (*text != 0) {
        int index;
        signed char advance = fallbackWidth + 1;
        index = func_020424e4((int)text, font) & 0xff;
        cursorX += func_020425e4(previousCharacter, index, font);
        int length = 1;
        if (index != 0xff) {
            FontCharacter* character = func_020425b4(index, font);
            func_0205b36c(destination, character, cursorX, y, color, font);
            advance = character->width + 1;
            length = character->byteLength;
        }
        previousCharacter = index;
        text += length;
        cursorX += advance;
    }
    return cursorX - x;
}
#endif

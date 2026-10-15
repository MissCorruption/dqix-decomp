#include <globaldefs.h>
#include "Resource/MessageGlyphSlot.h"

struct Rect0205b1ac;
struct GlyphDestination0205b234 { unsigned char* pixels; Rect0205b1ac* rectangles; unsigned char rectangleCount; };

extern "C" int _Z24GetWordFromTable02042648i(int);
extern "C" int _Z27FindEntryIndexByKey020424e4ii(int, int);
extern "C" int _Z22LookupKeyValue020425e4iii(int, int, int);
extern "C" FontCharacter* _Z23GetBoundedEntry020425b4ii(int index, int fontIndex);
extern "C" void func_0205b36c(GlyphDestination0205b234* destination, FontCharacter* glyph, short x, short y, unsigned char color, unsigned char font);

// USA: func_0205b234
extern "C" ARM int func_0205b234(GlyphDestination0205b234* destination, short x, short y, const char* text, unsigned char color, unsigned char font) {
    if (destination->pixels == 0) return 0;
    if (destination->rectangles == 0) return 0;
    if (destination->rectangleCount == 0) return 0;
    if (text == 0) return 0;
    unsigned char fallbackWidth = _Z24GetWordFromTable02042648i(font);
    int previousCharacter = 0xff;
    short cursorX = x;
    while (*text != 0) {
        int index;
        signed char advance = fallbackWidth + 1;
        index = _Z27FindEntryIndexByKey020424e4ii((int)text, font) & 0xff;
        cursorX += _Z22LookupKeyValue020425e4iii(previousCharacter, index, font);
        int length = 1;
        if (index != 0xff) {
            FontCharacter* character = _Z23GetBoundedEntry020425b4ii(index, font);
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

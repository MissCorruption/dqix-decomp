#include <globaldefs.h>
#include "Resource/FontBankLoader.h"
#include "Resource/FontGlyphTable.h"

// USA: func_02042a50
extern "C" ARM char* func_02042a50(int pixelSize, const char* encodedCharacter) {
    if (encodedCharacter == NULL) return NULL;
    char* glyph = func_020429e4(func_020429bc(pixelSize),
        reinterpret_cast<const unsigned char*>(encodedCharacter));
    if (glyph != NULL) return glyph;
    return func_020429e4(
        static_cast<FontGlyphTable*>(func_02094b44(func_02094a00(), pixelSize)),
        reinterpret_cast<const unsigned char*>(encodedCharacter));
}

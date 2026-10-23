#include <globaldefs.h>
#include "Resource/MessageGlyphSlot.h"
#include "Graphics/VRAMStaging.h"

struct Obj02041754;
// USA: func_02041754
extern "C" ARM void func_02041754(MessageGlyphSlot* object) {
    MessageGlyphSlot* glyph = object;
    if (glyph->bitmapIndex < 0) return;
    if (glyph->pendingUpload && glyph->pixels != 0) {
        StageMemoryToVRAM(VRAMSubregion_TextureImage, glyph->pixels, glyph->textureOffset, 16 * 16 / 2, true, true);
        glyph->pendingUpload = false;
    }
}

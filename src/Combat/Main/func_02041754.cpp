#include <globaldefs.h>
#include "Resource/MessageGlyphSlot.h"
#include "Graphics/VRAMStaging.h"

struct Struct_0200f3a4_13;
// USA: func_02041754
extern "C" ARM void func_02041754(Struct_0204166c* arg0) {
    Struct_0204166c* var0 = arg0;
    if (var0->unknown_8_ < 0) return;
    if (var0->unknown_16_0_ && var0->unknown_0_ != 0) {
        StageMemoryToVRAM(VRAMSubregion_TextureImage, var0->unknown_0_, var0->unknown_4_, 16 * 16 / 2, true, true);
        var0->unknown_16_0_ = false;
    }
}

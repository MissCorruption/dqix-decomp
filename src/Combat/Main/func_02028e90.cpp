#include <globaldefs.h>
#include "Graphics/GlyphBitmapContext.h"
#include "Graphics/GlyphMetrics.h"

#include "std_library_functions.h"
#include "NitroSDK/LoadToVRAM.h"
#include "NitroSDK/Cache.h"

// USA: func_02028e90
extern "C" ARM void func_02028e90(void) {
    if (glyphBitmapContext.unknown_0_ == 0) {
        return;
    }

    if (glyphBitmapContext.unknown_0_ != 0) {
        memset(glyphBitmapContext.unknown_0_, 0, 256 * 192 / 2);
    }
    int var0 = data_020ef74c.unknown_c_;
    CleanInvalidateCacheRange(glyphBitmapContext.unknown_0_, 256 * 192 / 2);
    if (var0 == 3) {
        LoadToMainBG1CharacterData(glyphBitmapContext.unknown_0_, 0, 256 * 192 / 2);
        return;
    }
    if (var0 == 4) {
        LoadToSubBG0CharacterData(glyphBitmapContext.unknown_0_, 0, 256 * 192 / 2);
        return;
    }
    if (var0 == 5) {
        LoadToMainBG1CharacterData(glyphBitmapContext.unknown_0_, 0, 256 * 192 / 2);
        return;
    }
    if (var0 == 6) {
        LoadToSubBG0CharacterData(glyphBitmapContext.unknown_0_, 0, 256 * 192 / 2);
        return;
    }
}

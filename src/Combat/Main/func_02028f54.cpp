#include <globaldefs.h>
#include "Graphics/GlyphBitmapContext.h"
#include "Graphics/GlyphMetrics.h"

#include "std_library_functions.h"
#include "NitroSDK/LoadToVRAM.h"

#include "NitroSDK/Cache.h"

// USA: func_02028f54
extern "C" ARM void func_02028f54(void) {
    if (glyphBitmapContext.unknown_0_ == 0) {
        return;
    }

    if (glyphBitmapContext.unknown_0_ != 0) {
        memset(glyphBitmapContext.unknown_0_, 0, 256 * 192 / 2);
    }
    unsigned short* var0 = static_cast<unsigned short*>(glyphBitmapContext.unknown_0_);
    unsigned short var1 = 0;
    int var2;
    int var3;
    for (var2 = 0; var2 < 24; var2++) {
        for (var3 = 0; var3 < 32; var3++) {
            *var0 = var1;
            var0++;
            var1++;
        }
    }
    int var4 = data_020ef74c.unknown_c_;
    CleanInvalidateCacheRange(glyphBitmapContext.unknown_0_, 32 * 24 * sizeof(unsigned short));
    if (var4 == 3) {
        LoadToMainBG1ScreenData(glyphBitmapContext.unknown_0_, 0, 32 * 24 * sizeof(unsigned short));
        return;
    }
    if (var4 == 4) {
        LoadToSubBG0ScreenData(glyphBitmapContext.unknown_0_, 0, 32 * 24 * sizeof(unsigned short));
        return;
    }
    if (var4 == 5) {
        LoadToMainBG1ScreenData(glyphBitmapContext.unknown_0_, 0, 32 * 24 * sizeof(unsigned short));
        return;
    }
    if (var4 == 6) {
        LoadToSubBG0ScreenData(glyphBitmapContext.unknown_0_, 0, 32 * 24 * sizeof(unsigned short));
        return;
    }
}

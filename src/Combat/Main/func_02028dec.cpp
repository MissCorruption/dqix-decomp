#include <globaldefs.h>
#include "Graphics/GlyphBitmapContext.h"

#include "std_library_functions.h"
#include "NitroSDK/LoadToVRAM.h"
#include "NitroSDK/Cache.h"
#include "NitroSDK/Graphics.h"

extern "C" void func_02028e90();
extern "C" void func_02028f54();

extern unsigned char data_020e7390[0x20];

// USA: func_02028dec
extern "C" ARM void func_02028dec(int arg0) {
    if (glyphBitmapContext.unknown_0_ == NULL) {
        return;
    }
    memcpy(glyphBitmapContext.unknown_0_, data_020e7390, 0x20);
    CleanInvalidateCacheRange(glyphBitmapContext.unknown_0_, 0x20);
    if (arg0 == 0) {

        BG1CNT = (BG1CNT & 0x43) | 0x4;
        LoadToMainBGStandardPalette(glyphBitmapContext.unknown_0_, 0, 0x20);
    } else {
        BG0CNTSUB = (BG0CNTSUB & 0x43) | 0x4;
        LoadToSubBGStandardPalette(glyphBitmapContext.unknown_0_, 0, 0x20);
    }
    func_02028e90();
    func_02028f54();
}

#include <globaldefs.h>
#include "NitroSDK/Cache.h"
#include "NitroSDK/LoadToVRAM.h"

struct Struct_020b07c0_2 {
    int unknown_0_;
    int unknown_4_;
    unsigned int unknown_8_;
    const void* unknown_c_;
};

struct Struct_020b07c0 {
    int unknown_0_;
    int unknown_4_;
    char unknown_8_[0x18];
};

extern "C" void func_020b035c(char* arg0, int arg1, int arg2);

// USA: func_020b07c0
extern "C" ARM void func_020b07c0(Struct_020b07c0_2* arg0, int arg1, int arg2, Struct_020b07c0* arg3) {
    const void* var0 = arg0->unknown_c_;
    unsigned int var1 = arg0->unknown_8_;

    CleanInvalidateCacheRange(var0, var1);

    switch (arg2) {
    case 1:
        if (arg0->unknown_4_) {
            MemoryMapMainObjExtendedPalette();
            LoadToMainObjExtendedPalette(var0, arg1, var1);
            MemoryUnmapMainObjExtendedPalette();
        } else {
            LoadToMainObjStandardPalette(var0, arg1, var1);
        }
        break;
    case 2:
        if (arg0->unknown_4_) {
            MemoryMapSubObjExtendedPalette();
            LoadToSubObjExtendedPalette(var0, arg1, var1);
            MemoryUnmapSubObjExtendedPalette();
        } else {
            LoadToSubObjStandardPalette(var0, arg1, var1);
        }
        break;
    case 0:
        MemoryMapTexturePalette();
        LoadToTexturePalette(var0, arg1, var1);
        MemoryUnmapTexturePalette();
        break;
    }

    arg3->unknown_0_ = arg0->unknown_0_;
    arg3->unknown_4_ = arg0->unknown_4_;
    func_020b035c((char*)arg3, arg2, arg1);
}

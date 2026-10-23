#include <globaldefs.h>
#include "NitroSDK/Cache.h"
#include "NitroSDK/LoadToVRAM.h"

struct Struct_020b08b8_3 {
    int unknown_0_;
    int unknown_4_;
    unsigned int unknown_8_;
    const unsigned char* unknown_c_;
};

struct Struct_020b08b8 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    const unsigned short* unknown_4_;
};

struct Struct_020b08b8_2 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_[3];
};

extern "C" void func_020b035c(char* arg0, int arg1, int arg2);

// USA: func_020b08b8
extern "C" ARM void func_020b08b8(Struct_020b08b8_3* arg0, Struct_020b08b8* arg1, int arg2, int arg3,
                                  Struct_020b08b8_2* arg4) {
    unsigned int var0 = (arg0->unknown_0_ == 3) ? 0x20 : 0x200;
    unsigned short var1 = arg1->unknown_0_;
    unsigned int var2;
    const unsigned char* var3;
    unsigned int var4;
    unsigned short var5 = 0;

    if (var1 != 0) {
        do {
            var3 = arg0->unknown_c_;
            unsigned int var6 = arg1->unknown_4_[var5];
            var2 = var0 * var5;
            var4 = var0 * var6;
            CleanInvalidateCacheRange(var3, arg0->unknown_8_);
            switch (arg3) {
            case 1:
                if (arg0->unknown_4_) {
                    MemoryMapMainObjExtendedPalette();
                    LoadToMainObjExtendedPalette(var3 + var2, arg2 + var4, var0);
                    MemoryUnmapMainObjExtendedPalette();
                } else {
                    LoadToMainObjStandardPalette(var3 + var2, arg2 + var4, var0);
                }
                break;
            case 2:
                if (arg0->unknown_4_) {
                    MemoryMapSubObjExtendedPalette();
                    LoadToSubObjExtendedPalette(var3 + var2, arg2 + var4, var0);
                    MemoryUnmapSubObjExtendedPalette();
                } else {
                    LoadToSubObjStandardPalette(var3 + var2, arg2 + var4, var0);
                }
                break;
            case 0:
                MemoryMapTexturePalette();
                LoadToTexturePalette(var3 + var2, arg2 + var4, var0);
                MemoryUnmapTexturePalette();
                break;
            }
            var5++;
        } while (var5 < var1);
    }

    arg4->unknown_0_ = arg0->unknown_0_;
    arg4->unknown_4_ = arg0->unknown_4_;
    func_020b035c((char*)arg4, arg3, arg2);
}

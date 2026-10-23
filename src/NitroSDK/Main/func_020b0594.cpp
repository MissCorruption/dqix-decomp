#include <globaldefs.h>

#include "NitroSDK/Cache.h"
#include "NitroSDK/Graphics.h"
#include "NitroSDK/LoadToVRAM.h"

extern "C" void func_020b0334(int *arg0, int arg1, int arg2);

struct Struct_020b0594 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    int unknown_4_;
    unsigned int unknown_8_;
    unsigned int unknown_c_;
    unsigned int unknown_10_;
    void *unknown_14_;
};

struct Struct_020b0594_2 {
    int unknown_0_[3];
    int unknown_c_;
    int unknown_10_;
    int unknown_14_;
    int unknown_18_;
    int unknown_1c_;
    unsigned int unknown_20_;
};

// USA: func_020b0594
extern "C" ARM void func_020b0594(int arg0, int arg1, int arg2, void *arg3) {
    Struct_020b0594 *var0 = (Struct_020b0594 *) arg0;
    Struct_020b0594_2 *var1      = (Struct_020b0594_2 *) arg3;
    unsigned int var2                 = var0->unknown_8_;

    if (arg2 != 0) {
        switch (arg2) {
            case 1: DISPCNT = (DISPCNT & 0xffcfffef) | var2; break;
            case 2: DISPCNTSUB = (DISPCNTSUB & 0xffcfffef) | var2; break;
        }
    }

    CleanInvalidateCacheRange(var0->unknown_14_, var0->unknown_10_);
    switch (arg2) {
        case 0:
            MemoryMapTextureImage();
            LoadToTextureImage(var0->unknown_14_, arg1, var0->unknown_10_);
            MemoryUnmapTextureImage();
            break;
        case 1: LoadToMainObjVRAM(var0->unknown_14_, arg1, var0->unknown_10_); break;
        case 2: LoadToSubObjVRAM(var0->unknown_14_, arg1, var0->unknown_10_); break;
    }

    if (var0->unknown_8_ == 0) {
        int var3;
        switch (var0->unknown_2_) {
            case 1: var3 = 0; break;
            case 2: var3 = 1; break;
            case 4: var3 = 2; break;
            case 8: var3 = 3; break;
            case 16: var3 = 4; break;
            case 32: var3 = 5; break;
            default: var3 = 0; break;
        }
        var1->unknown_c_ = var3;

        int var4;
        switch (var0->unknown_0_) {
            case 1: var4 = 0; break;
            case 2: var4 = 1; break;
            case 4: var4 = 2; break;
            case 8: var4 = 3; break;
            case 16: var4 = 4; break;
            case 32: var4 = 5; break;
            default: var4 = 0; break;
        }
        var1->unknown_10_ = var4;
    } else {
        var1->unknown_c_  = var0->unknown_2_;
        var1->unknown_10_ = var0->unknown_0_;
    }

    var1->unknown_14_      = var0->unknown_4_;
    var1->unknown_18_   = 0;
    var1->unknown_1c_     = 1;
    var1->unknown_20_ = var0->unknown_8_;
    func_020b0334(var1->unknown_0_, arg2, arg1);
}

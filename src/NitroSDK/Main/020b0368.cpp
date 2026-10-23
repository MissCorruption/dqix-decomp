#include <globaldefs.h>
#include "NitroSDK/Cache.h"

extern "C" void MemoryMapTextureImage(void);
extern "C" void LoadToTextureImage(void* ptr, int a, int b);
extern "C" void MemoryUnmapTextureImage(void);
extern "C" int LoadToMainObjVRAM(int arg0, int arg1, unsigned int arg2);
extern "C" int LoadToSubObjVRAM(int, int, unsigned int);
extern "C" void func_020b0334(int* arg0, int arg1, int arg2);

struct Struct_020b0368 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    int unknown_4_;
    unsigned int unknown_8_;
    char unknown_c_[4];
    unsigned int unknown_10_;
    void* unknown_14_;
};

struct Struct_020b0368_2 {
    char unknown_0_[0xc];
    int unknown_c_;
    int unknown_10_;
    int unknown_14_;
    int unknown_18_;
    int unknown_1c_;
    int unknown_20_;
};

// USA: func_020b0368
extern "C" ARM void func_020b0368(int arg0, int arg1, int arg2, void* arg3) {
    struct Struct_020b0368* var0 = (struct Struct_020b0368*)arg0;
    struct Struct_020b0368_2* var1 = (struct Struct_020b0368_2*)arg3;
    unsigned int var2 = var0->unknown_8_;

    if (arg2 != 0) {
        switch (arg2) {
        case 1:
            *(volatile unsigned int*)0x04000000 = (*(volatile unsigned int*)0x04000000 & 0xffcfffef) | var2;
            break;
        case 2:
            *(volatile unsigned int*)0x04001000 = (*(volatile unsigned int*)0x04001000 & 0xffcfffef) | var2;
            break;
        }
    }

    CleanInvalidateCacheRange(var0->unknown_14_, var0->unknown_10_);

    switch (arg2) {
    case 0:
        MemoryMapTextureImage();
        LoadToTextureImage(var0->unknown_14_, arg1, var0->unknown_10_);
        MemoryUnmapTextureImage();
        break;
    case 1:
        LoadToMainObjVRAM((int)var0->unknown_14_, arg1, var0->unknown_10_);
        break;
    case 2:
        LoadToSubObjVRAM((int)var0->unknown_14_, arg1, var0->unknown_10_);
        break;
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

        switch (var0->unknown_0_) {
        case 1: var3 = 0; break;
        case 2: var3 = 1; break;
        case 4: var3 = 2; break;
        case 8: var3 = 3; break;
        case 16: var3 = 4; break;
        case 32: var3 = 5; break;
        default: var3 = 0; break;
        }
        var1->unknown_10_ = var3;
    } else {
        var1->unknown_c_ = var0->unknown_2_;
        var1->unknown_10_ = var0->unknown_0_;
    }

    var1->unknown_14_ = var0->unknown_4_;
    var1->unknown_18_ = 0;
    var1->unknown_1c_ = 1;
    var1->unknown_20_ = var0->unknown_8_;
    func_020b0334((int*)var1, arg2, arg1);
}

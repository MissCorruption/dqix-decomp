#include <globaldefs.h>
#include "NitroSDK/Cache.h"
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"

extern "C" void LoadToMainBGStandardPalette(int src, int dstOffset, unsigned int size);
extern "C" void LoadToSubBGStandardPalette(int src, int dstOffset, unsigned int size);
extern "C" int func_0203b784(int* arg0, int arg1, int arg2, int arg3, unsigned int arg4, unsigned int arg5);

extern int data_02105254;

struct Struct_02020fc4_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    int unknown_4_;
    void* unknown_8_;
    char unknown_c_[0x14 - 0xc];
    short unknown_14_;
    short unknown_16_;
    short unknown_18_;
};

// USA: func_0203bb3c
extern "C" ARM void func_0203bb3c(struct Struct_02020fc4_2* arg0, char* arg1, SafeAllocator* arg2, int arg3, unsigned short arg4) {
    arg0->unknown_16_ = arg3;
    arg0->unknown_18_ = arg4;
    int* var0 = (int*)&data_02105254;
    memcpy(arg0, arg1, 8);
    arg1 += 8;

    if (arg0->unknown_2_ == 0) {
        CleanInvalidateCacheRange(arg1, 0x20);
        switch (arg3) {
        case 0: LoadToMainBGStandardPalette((int)arg1, 0, 0x20); break;
        case 1: LoadToSubBGStandardPalette((int)arg1, 0, 0x20); break;
        }
        arg1 += 0x20;
        arg0->unknown_14_ = (short)func_0203b784(var0, arg3, arg4, (int)arg1, arg0->unknown_4_ << 5, arg0->unknown_4_);
        arg1 += arg0->unknown_4_ << 5;
    } else if (arg0->unknown_2_ == 1) {
        CleanInvalidateCacheRange(arg1, 0x200);
        switch (arg3) {
        case 0: LoadToMainBGStandardPalette((int)arg1, 0, 0x200); break;
        case 1: LoadToSubBGStandardPalette((int)arg1, 0, 0x200); break;
        }
        arg1 += 0x200;
        arg0->unknown_14_ = (short)func_0203b784(var0, arg3, arg4, (int)arg1, arg0->unknown_4_ << 6, arg0->unknown_4_);
        arg1 += arg0->unknown_4_ << 6;
    }

    arg0->unknown_8_ = arg2->Allocate(arg0->unknown_1_ * (arg0->unknown_0_ * 2));
    memcpy(arg0->unknown_8_, arg1, arg0->unknown_1_ * (arg0->unknown_0_ * 2));
}

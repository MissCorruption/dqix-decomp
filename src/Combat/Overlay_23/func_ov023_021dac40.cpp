#include <globaldefs.h>
#include "NitroSDK/ColorEffects.h"

#if defined(jpn)
#define func_ov023_021dac40 func_ov023_021db4b4
#endif

extern "C" void func_ov023_021dacd4(void*, int, int);

struct Struct_ov023_021dac40 {
#if defined(jpn)
    char unknown_0_[0xd5c];
#else
    char unknown1_0_[0xd98];
#endif
    short unknown_d98_;
    char unknown_d9a_[2];
    int unknown_d9c_;
};

enum { Enum_ov023_021dac40_90 = 90, Enum_ov023_021dac40_31 = 31, Enum_ov023_021dac40_16 = 16 };

// USA: func_ov023_021dac40
extern "C" ARM void func_ov023_021dac40(Struct_ov023_021dac40* arg0, int arg1) {
    if (!(arg0->unknown_d9c_ & 0x10000)) return;
    arg0->unknown_d98_ -= arg1;
    if (arg0->unknown_d98_ < 0) arg0->unknown_d98_ = 0;
    if (arg0->unknown_d9c_ & 0x800000) {
        int var0 = arg0->unknown_d98_ * Enum_ov023_021dac40_31 / Enum_ov023_021dac40_90;
        func_ov023_021dacd4(arg0, 0, Enum_ov023_021dac40_31 - var0);
        return;
    }
    int var1 = -((Enum_ov023_021dac40_90 - arg0->unknown_d98_) * Enum_ov023_021dac40_16) / Enum_ov023_021dac40_90;
    ColorEffect_ConfigureBrightnessAdjust(0x4000050, 0x16, var1);
}

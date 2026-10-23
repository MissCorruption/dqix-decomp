#include <globaldefs.h>
#include "Resource/Brightness.h"

extern "C" void ColorEffect_ConfigureAlphaBlend(unsigned int* out, unsigned char a, unsigned char b, unsigned char c, int d);

struct Struct_ov003_0216fba0 {
    char unknown_0_[1];
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    char unknown_3_[0x3b - 3];
    unsigned char unknown_3b_;
    char unknown_3c_[0x48 - 0x3c];
};

// USA: func_ov003_0216fba0
extern "C" ARM void func_ov003_0216fba0(Struct_ov003_0216fba0* arg0) {
    ClearFlags04(GetGameResources(), 0xc8e);

    volatile unsigned short* var0 = (volatile unsigned short*)0x4000008;
    unsigned int* var1 = (unsigned int*)((char*)var0 + 0x48);
    var0[0] = (var0[0] & ~3) | 3;
    var0[1] = (var0[1] & ~3);
    var0[2] = (var0[2] & ~3) | 1;
    var0[3] = (var0[3] & ~3) | 2;

    unsigned char var2 = arg0->unknown_3b_;
    ColorEffect_ConfigureAlphaBlend(var1, 0x18, 1, var2, 0x10 - var2);

    volatile unsigned int* var3 = (volatile unsigned int*)0x4000000;
    *var3 = (*var3 & ~0x1f00) | 0xf00;

    arg0->unknown_3b_ -= 4;
    if (arg0->unknown_3b_ == 0) {
        arg0->unknown_1_ = 7;
        arg0->unknown_2_ = 0;
    }
}

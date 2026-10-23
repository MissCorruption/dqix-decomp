#include <globaldefs.h>
#include "Resource/Brightness.h"

extern "C" void ColorEffect_ConfigureAlphaBlend(unsigned int* out, unsigned char a, unsigned char b, unsigned char c, int d);

struct Struct_ov003_0216ef14 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    char unknown_3_[0x20 - 3];
    unsigned short unknown_20_;
    char unknown_22_[0x3b - 0x22];
    unsigned char unknown_3b_;
};

// USA: func_ov003_0216ef14
extern "C" ARM void func_ov003_0216ef14(Struct_ov003_0216ef14* arg0) {
    GameResources* var0 = GetGameResources();
    unsigned char var1 = arg0->unknown_3b_;
    if (var1 >= 0x10) {
        arg0->unknown_3b_ = 0x10;
        ColorEffect_ConfigureAlphaBlend((unsigned int*)0x4000050, 4, 8, 0xc, 4);
        volatile unsigned int* var2 = (volatile unsigned int*)0x4000000;
        *var2 = (*var2 & ~0x1f00) | 0x1f00;
        SetFlags04(var0, 0xcce);
        arg0->unknown_20_ |= 0x20;
        arg0->unknown_1_ = 4;
        arg0->unknown_2_ = 0;
    } else {
        arg0->unknown_3b_ = var1 + 4;
        if (arg0->unknown_3b_ > 0x10) {
            arg0->unknown_3b_ = 0x10;
            SetFlags04(var0, 0xcce);
        }
        unsigned char var3 = arg0->unknown_3b_;
        ColorEffect_ConfigureAlphaBlend((unsigned int*)0x4000050, 0x18, 1, var3, 0x10 - var3);
    }
}

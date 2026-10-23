#include <globaldefs.h>

struct Struct_020096ac {
    unsigned char unknown_0_;
    char unknown_1_;
    unsigned short unknown_2_;
    unsigned char unknown_4_;
    unsigned char unknown_5_[0x20];
};

// USA: func_020096ac
extern "C" ARM void func_020096ac(Struct_020096ac* arg0, unsigned long long arg1) {
    arg0->unknown_0_ = 0;
    arg0->unknown_4_ = 0;
    if (arg1 != 0) {
        do {
            arg0->unknown_5_[arg0->unknown_4_++] = arg1 % 10;
            arg1 /= 10;
        } while (arg1 != 0);
    }
    unsigned char* var0 = arg0->unknown_5_;
    unsigned char* var1 = var0 + arg0->unknown_4_;
    unsigned char* var2 = var1 - 1;
    if (var0 < var2) {
        do {
            unsigned char var3 = *var2;
            unsigned char var4 = *var0;
            *var0++ = var3;
            *var2-- = var4;
        } while (var0 < var2);
    }
    arg0->unknown_2_ = arg0->unknown_4_ - 1;
}

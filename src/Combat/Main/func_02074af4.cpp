#include <globaldefs.h>

struct Struct_02074af4 {
    volatile unsigned short unknown_0_;
    char unknown_2_[2];
    volatile unsigned short unknown_4_;
    char unknown_6_[2];
    volatile unsigned short unknown_8_;
    char unknown_a_[2];
    volatile unsigned short unknown_c_;
    char unknown_e_[2];
    unsigned char unknown_10_;
};

// USA: func_02074af4
extern "C" ARM void func_02074af4(struct Struct_02074af4* arg0) {
    if (arg0->unknown_10_ != 0) return;
    unsigned short* const var0 = (unsigned short*)0x4000008;
    volatile short var1, var2, var3, var4;
    {
        unsigned short var5 = *(volatile unsigned short*)&var0[0];
        var1 = var5;
        var1;
        arg0->unknown_0_ = var5;
        var1;
    }
    {
        unsigned short var6 = *(volatile unsigned short*)&var0[1];
        arg0->unknown_4_ = var6;
        var2 = var6;
        var2;
    }
    {
        unsigned short var7 = *(volatile unsigned short*)&var0[2];
        var3 = var7;
        var3;
        arg0->unknown_8_ = var7;
        var3;
    }
    {
        unsigned short var8 = *(volatile unsigned short*)&var0[3];
        arg0->unknown_c_ = var8;
        var4 = var8;
        var4;
    }
    arg0->unknown_10_ = 1;
}

#include <globaldefs.h>

struct Struct_02074b64 {
    char unknown_0_[2];
    volatile unsigned short unknown_2_;
    char unknown_4_[2];
    volatile unsigned short unknown_6_;
    char unknown_8_[2];
    volatile unsigned short unknown_a_;
    char unknown_c_[2];
    volatile unsigned short unknown_e_;
    char unknown_10_;
    unsigned char unknown_11_;
};

// USA: func_02074b64
extern "C" ARM void func_02074b64(struct Struct_02074b64* arg0) {
    if (arg0->unknown_11_ != 0) return;
    unsigned short* const var0 = (unsigned short*)0x4001008;
    volatile short var1, var2, var3, var4;
    {
        unsigned short var5 = *(volatile unsigned short*)&var0[0];
        var1 = var5;
        arg0->unknown_2_ = var5;
        var1;
    }
    {
        unsigned short var6 = *(volatile unsigned short*)&var0[1];
        arg0->unknown_6_ = var6;
        var2 = var6;
        var2;
    }
    {
        unsigned short var7 = *(volatile unsigned short*)&var0[2];
        var3 = var7;
        var3;
        arg0->unknown_a_ = var7;
        var3;
    }
    {
        unsigned short var8 = *(volatile unsigned short*)&var0[3];
        arg0->unknown_e_ = var8;
        var4 = var8;
        var4;
    }
    arg0->unknown_11_ = 1;
}

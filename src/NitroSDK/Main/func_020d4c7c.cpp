#include <globaldefs.h>

struct Struct_020d4c7c
{
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    struct
    {
        unsigned char unknown_0_;
        unsigned char unknown_1_;
        unsigned char unknown_2_[2];
        unsigned char* unknown_4_;
    } unknown_4_[16];
};

struct Struct_020d4c7c_2
{
    unsigned short unknown_0_;
    char unknown_2_[0x3c - 0x2];
    unsigned short unknown_3c_;
    unsigned short unknown_3e_;
    unsigned char unknown_40_[1];
};

// USA: func_020d4c7c
extern "C" ARM Struct_020d4c7c func_020d4c7c(const Struct_020d4c7c_2* arg0)
{
    Struct_020d4c7c var0;
    const unsigned char* var1;
    int var2;
    unsigned char var3;
    unsigned char var4;
    if (arg0->unknown_3c_ != 0)
    {
        var0.unknown_0_ = 0;
        return var0;
    }
    var0.unknown_0_ = arg0->unknown_3e_;
    if (var0.unknown_0_ == 0)
        return var0;
    if (var0.unknown_0_ > 16)
        var0.unknown_0_ = 16;
    var1 = arg0->unknown_40_;
    var4 = arg0->unknown_0_ * 2 - 64;
    var3 = 0;
    for (var2 = 0; var2 < var0.unknown_0_; var2++)
    {
        unsigned char var5;
        var0.unknown_4_[var2].unknown_0_ = var1[0];
        var0.unknown_4_[var2].unknown_1_ = var1[1];
        var0.unknown_4_[var2].unknown_4_ = (unsigned char*)&var1[2];
        var5 = var0.unknown_4_[var2].unknown_1_ + 2;
        var3 += var5;
        if (var3 > var4)
        {
            var0.unknown_0_ = 0;
            return var0;
        }
        var1 += var5;
    }
    return var0;
}

#include <globaldefs.h>

struct Struct_020e1b2c {
    unsigned int unknown_0_;
    unsigned int unknown_4_;
    unsigned char unknown_8_;
    unsigned char unknown_9_;
    unsigned char unknown_a_;
    unsigned char unknown_b_;
};

struct Struct_020e1384 {
    int unknown_0_;
    int unknown_4_;
    char unknown_8_[4];
    int unknown_c_;
    char unknown_10_[4];
    unsigned char unknown_14_;
};

struct Struct_020e1b2c_2 {
    char unknown_0_[8];
    struct Struct_020e1b2c* unknown_8_;
    char unknown_c_[0x30 - 0xc];
    int unknown_30_;
    int unknown_34_;
    unsigned char unknown_38_;
    unsigned char unknown_39_;
    unsigned char unknown_3a_;
    unsigned char unknown_3b_;
    unsigned char unknown_3c_;
    unsigned char unknown_3d_;
    unsigned char unknown_3e_;
};

struct Struct_020e1b2c_3 {
    char unknown_0_[4];
    struct Struct_020e1b2c_2* unknown_4_;
};

struct Struct_020e1674_2;
struct Struct_020e1288;

extern "C" unsigned int func_020e1438(struct Struct_020e1b2c* arg0, unsigned int arg1,
                                      unsigned int arg2, unsigned int arg3,
                                      unsigned int arg4, unsigned int arg5);
extern "C" unsigned int func_0209378c(int arg0);
extern "C" int func_020937f0(int arg0);
extern "C" int func_020e1288(struct Struct_020e1288* arg0);
extern "C" void func_020e1384(struct Struct_020e1384* arg0);
extern "C" void func_020e16f4(struct Struct_020e1674_2* arg0);

// USA: func_020e1b2c
extern "C" ARM int func_020e1b2c(struct Struct_020e1b2c_3* arg0, int arg1) {
    if (arg0->unknown_4_ == 0) return 0;

    func_020e16f4((struct Struct_020e1674_2*)arg0);

    struct Struct_020e1b2c* var0 = arg0->unknown_4_->unknown_8_;
    unsigned int var1 = arg0->unknown_4_->unknown_3b_;
    unsigned int var2 = arg0->unknown_4_->unknown_3c_;
    unsigned int var3 = arg0->unknown_4_->unknown_3a_;
    unsigned int var4;
    int var5;
    unsigned int var6;
    unsigned int var7;
    unsigned int var8;

    if (var0 == 0 || var2 == 0 || var3 == 0 || var1 == 0) {
        var5 = 0;
    } else {
        var5 = 0;
        var7 = (var3 + 7) & ~7u;
        var6 = 0;
        var8 = (var1 + 7) & ~7u;
        while (var6 < var7) {
            if (var5 >= var2) break;
            var4 = 0x40;
            unsigned int var9 = var7 - var6;
            while (var4 > 8 && var4 > var9) var4 >>= 1;
            var5 += func_020e1438(&var0[var5], var2 - var5, var6, 0, var4, var8);
            var6 += var4;
        }
    }
    arg0->unknown_4_->unknown_3c_ = var5;

    unsigned int var10 = 0;
    unsigned char var11 = arg0->unknown_4_->unknown_3e_;
    int var12;
    struct Struct_020e1b2c* var13;
    unsigned int var14 = arg0->unknown_4_->unknown_3c_;
    var13 = arg0->unknown_4_->unknown_8_;
    for (var5 = 0; var5 < var14; var5++) {
        struct Struct_020e1b2c* var15 = &var13[var5];
        var15->unknown_4_ = var10;
        var12 = var15->unknown_a_ * var15->unknown_b_;
        unsigned int var16 = 1 << func_0209378c(var11);
        if (var16 != 0) var16--;
        var10 += (~var16) & (var16 + (var12 >> 1));
    }
    arg0->unknown_4_->unknown_34_ = var10;

    int var17 = func_020937f0(arg0->unknown_4_->unknown_3e_);
    if (arg1 != -1) var17 = arg1;
    arg0->unknown_4_->unknown_30_ =
        var17 - (arg0->unknown_4_->unknown_34_ + func_020e1288((struct Struct_020e1288*)arg0->unknown_4_));
    func_020e1384((struct Struct_020e1384*)((char*)arg0->unknown_4_ + 0xc));
    return arg0->unknown_4_->unknown_30_;
}

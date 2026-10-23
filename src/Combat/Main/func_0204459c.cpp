#include <globaldefs.h>

struct Struct_020e23c0;

struct Struct_0204459c_3 {
    short unknown_0_;
    short unknown_2_;
};

struct Struct_0204459c {
    char unknown_0_[0x14];
    short unknown_14_;
    short unknown_16_;
    short unknown_18_;
    short unknown_1a_;
};

struct Struct_0204459c_2 {
#if !defined(jpn)
    char unknown_0_[0x34];
#endif
    void* unknown_34_;
    struct Struct_020e23c0* unknown_38_;
#if defined(jpn)
    char unknown_8_[0x7d0 - 0x8];
#else
    char unknown_3c_[0x900 - 0x3c];
#endif
    struct Struct_0204459c unknown_900_;
    char unknown_91c_[0x9a0 - 0x91c];
    int unknown_9a0_;
#if defined(jpn)
    char unknown_874_[0x17de - 0x874];
#else
    char unknown_9a4_[0x19ae - 0x9a4];
#endif
    signed char unknown_19ae_;
    unsigned char unknown_19af_;
#if defined(jpn)
    char unknown_17e0_[0x17fb - 0x17e0];
#else
    char unknown_19b0_[0x19ca - 0x19b0];
#endif
    unsigned char unknown_19ca_;
};

extern "C" void func_0204455c(void* arg0, short* arg1, short* arg2);
extern "C" void func_0204f914(void* arg0, int arg1, short arg2, short arg3, short arg4, short arg5);
extern "C" void func_020e23c0(struct Struct_020e23c0*, int, int, int, short, short);

// USA: func_0204459c
extern "C" ARM void func_0204459c(struct Struct_0204459c_2* arg0, int arg1) {
    if (arg0->unknown_9a0_ == 1 || arg0->unknown_9a0_ == 3 || arg0->unknown_9a0_ == 2) {
        if (arg0->unknown_19ca_ == 0) return;
        if (arg1 != 0) {
            struct Struct_0204459c_3 var0;
            func_0204455c(arg0->unknown_34_, &var0.unknown_2_, &var0.unknown_0_);
            int var1 = var0.unknown_0_;
            int var2 = var0.unknown_2_;
            func_0204f914(arg0->unknown_34_, 0, var2 - 3, var1, var2 + 4, var1 + 4);
        }
    }
    if (arg0->unknown_19af_ != 1) return;
    if (arg1 != 0) {
        short var3;
        short var4;
        func_0204455c(arg0->unknown_34_, &var3, &var4);
        if (arg0->unknown_19ae_ <= 15) return;
        for (short var5 = 0; var5 < 4; var5++) {
            func_0204f914(arg0->unknown_34_, 15, var3 - (3 - var5), var4 + var5, var3 + (4 - var5), var4 + var5 + 1);
        }
        return;
    }
    short var6 = arg0->unknown_900_.unknown_1a_;
    short var7 = arg0->unknown_900_.unknown_16_;
    short var8 = arg0->unknown_900_.unknown_18_;
    short var9 = arg0->unknown_900_.unknown_14_;
    int var10 = var9 + (var8 >> 1);
    int var11 = var7 + var6 - 3;
    if (arg0->unknown_38_ != 0) {
        if (arg0->unknown_19ae_ <= 15) return;
        int var12 = var6 - 8;
        for (short var13 = 0; var13 < 4; var13++) {
            func_020e23c0(arg0->unknown_38_, 15, (short)((var8 >> 1) - (3 - var13)), (short)(var12 + var13), (4 - var13) + (var8 >> 1), var12 + var13 + 1);
        }
        return;
    }
    unsigned int var14 = 0xf000f000;
    volatile unsigned int* var15 = (volatile unsigned int*)0x04000444;
    var15[0] = 0;
    var15[0x3c / 4] = 0x7fff;
    var15[0x64 / 4] = 0x900000;
    var15[0x60 / 4] = 0x3e1f00c0;
    var15[0] = 0;
    var15[0x2c / 4] = var10 << 12;
    var15[0x2c / 4] = var11 << 12;
    var15[0x2c / 4] = 0x400000;
    var15[0x28 / 4] = 0x6000;
    var15[0x28 / 4] = 0x6000;
    var15[0x28 / 4] = 0x1000;
    var15[0xbc / 4] = 0;
    var15[0x48 / 4] = 0;
    var15[0x48 / 4] = 0;
    var15[0x48 / 4] = var14;
    var15[0x48 / 4] = 0;
    var15[0x48 / 4] = var14 - 0xe000;
    var15[0x48 / 4] = 0;
    var15[0xc0 / 4] = 0;
    var15[4 / 4] = 1;
    var15[4 / 4] = 1;
}

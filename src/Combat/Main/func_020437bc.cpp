#include <globaldefs.h>

struct Struct_020437bc {
    short unknown_0_, unknown_2_, unknown_4_, unknown_6_;
};

#if defined(jpn)
extern const unsigned char data_020e8453[][8];

extern "C" ARM void func_020437bc(unsigned short* arg0, const Struct_020437bc* arg1, int arg2) {
    if (arg0 == NULL || arg1 == NULL) return;
    if (arg1->unknown_4_ == 0 || arg1->unknown_6_ == 0) return;
    short var0;
    short var1 = arg1->unknown_0_;
    short var2 = arg1->unknown_2_;
    const unsigned char* var3 = data_020e8453[arg2];
    short var4 = var1 + arg1->unknown_4_;
    var0 = var2 + arg1->unknown_6_;
    var1 >>= 3;
    var2 >>= 3;
    var4 >>= 3;
    var0 >>= 3;
    (arg0 + var2 * 32)[var1] = var3[0] - 0x1d;
    (arg0 + var2 * 32)[var4] = var3[1] - 0x1d;
    (arg0 + var0 * 32)[var1] = var3[2] - 0x1d;
    (arg0 + var0 * 32)[var4] = var3[3] - 0x1d;
    for (short var5 = var1 + 1; var5 < var4; var5++) {
        (arg0 + var2 * 32)[var5] = var3[4] - 0x1d;
        (arg0 + var0 * 32)[var5] = var3[5] - 0x1d;
    }
    for (short var6 = var2 + 1; var6 < var0; var6++) {
        (arg0 + var6 * 32)[var1] = var3[6] - 0x1d;
        (arg0 + var6 * 32)[var4] = var3[7] - 0x1d;
    }
    for (short var7 = var2 + 1; var7 < var0; var7++) {
        for (short var8 = var1 + 1; var8 < var4; var8++) {
            (arg0 + var7 * 32)[var8] = 1;
        }
    }
}
#else
extern const unsigned char data_020e7ade[][8];

// USA: func_020437bc
extern "C" ARM void func_020437bc(unsigned short* arg0, const Struct_020437bc* arg1, int arg2) {
    if (arg0 == NULL || arg1 == NULL) return;
    if (arg1->unknown_4_ == 0 || arg1->unknown_6_ == 0) return;
    short var9;
    const unsigned char* var10 = data_020e7ade[arg2];
    short var11 = arg1->unknown_0_;
    short var12 = arg1->unknown_2_;
    short var13 = var11 + arg1->unknown_4_;
    var9 = var12 + arg1->unknown_6_;
    var11 >>= 3;
    var12 >>= 3;
    var13 >>= 3;
    var9 >>= 3;
    short var14 = var12 * 32;
    short var15 = var9 * 32;
    (arg0 + var14)[var11] = var10[0] - 0x13;
    (arg0 + var14)[var13] = var10[1] - 0x13;
    (arg0 + var15)[var11] = var10[2] - 0x13;
    (arg0 + var15)[var13] = var10[3] - 0x13;
    for (short var16 = var11 + 1; var16 < var13; var16++) {
        (arg0 + var14)[var16] = var10[4] - 0x13;
        (arg0 + var15)[var16] = var10[5] - 0x13;
    }
    for (short var17 = var12 + 1; var17 < var9; var17++) {
        short var18 = var17 * 32;
        (arg0 + var18)[var11] = var10[6] - 0x13;
        (arg0 + var18)[var13] = var10[7] - 0x13;
    }
    for (short var19 = var12 + 1; var19 < var9; var19++) {
        short var20 = var19 * 32;
        for (short var21 = var11 + 1; var21 < var13; var21++) {
            (arg0 + var20)[var21] = 1;
        }
    }
}
#endif

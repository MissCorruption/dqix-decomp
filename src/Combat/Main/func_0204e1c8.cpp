#include <globaldefs.h>

struct Struct_0204e1c8 {
    char unknown_0_[8];
    unsigned char* unknown_8_;
    char unknown_c_[0xa8 - 0xc];
    short unknown_a8_;
    short unknown_aa_;
};

// USA: func_0204e1c8
extern "C" ARM void func_0204e1c8(Struct_0204e1c8* arg0, unsigned char* arg1, short arg2, short arg3, short arg4, short arg5, unsigned char arg6, unsigned char arg7) {
    int var0;
    unsigned char var1;
    short var2;
    short var3;
    short var4;
    short var5;
    if (arg1 == NULL) {
        return;
    }
    short var6 = arg0->unknown_a8_;
    short var7 = arg0->unknown_aa_;
    for (var4 = 0; var4 < arg5; var4++) {
        short var8 = arg3 & 7;
        short var9 = var8 << 2;
        var3 = arg3 >> 3;
        bool var10 = var3 >= 0 && var3 < var7;
        var3 *= arg0->unknown_a8_;
        var2 = arg2;
        for (var5 = 0; var5 < arg4; var5++) {
            var0 = var2;
            short var11 = var0 >> 3;
            bool var12 = var11 >= 0 && var11 < var6;
            short var13 = var3 + var11;
            bool var14 = var12 | var10;
            short var15 = var13 * 32;
            var15 += (short)(var0 & 7) >> 1;
            var15 += var9;
            var1 = arg0->unknown_8_[var15];
            if (arg2 & 1) {
                if (var5 & 1) {
                    if (var14) {
                        unsigned char var16 = *arg1 & arg6;
                        if (var16) {
                            var16 >>= 4;
                            var1 &= 0xf0;
                            var1 |= var16;
                        }
                        arg0->unknown_8_[var15] = var1;
                    }
                    arg1++;
                } else {
                    if (var14) {
                        unsigned char var17 = *arg1 & arg7;
                        if (var17) {
                            var17 <<= 4;
                            var1 &= 0x0f;
                            var1 |= var17;
                        }
                        arg0->unknown_8_[var15] = var1;
                    }
                }
            } else {
                if (var5 & 1) {
                    if (var14) {
                        unsigned char var18 = *arg1 & arg6;
                        if (var18) {
                            var1 &= 0x0f;
                            var1 |= var18;
                        }
                        arg0->unknown_8_[var15] = var1;
                    }
                    arg1++;
                } else {
                    if (var14) {
                        unsigned char var19 = *arg1 & arg7;
                        if (var19) {
                            var1 &= 0xf0;
                            var1 |= var19;
                        }
                        arg0->unknown_8_[var15] = var1;
                    }
                }
            }
            var2++;
        }
        arg3++;
    }
}

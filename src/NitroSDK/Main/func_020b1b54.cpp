#include <globaldefs.h>

struct Struct_020b1b54_2 {
    unsigned char* unknown_0_;
    int unknown_4_;
    int unknown_8_;
    unsigned char unknown_c_;
    unsigned char unknown_d_[3];
    unsigned int unknown_10_;
};

union Struct_020b1b54 {
    unsigned int unknown_0_;
    struct {
        unsigned unknown_0_0_ : 8;
        unsigned unknown_1_0_ : 8;
    } unknown1_0_;
};

extern "C" unsigned int func_020b10b4(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3, unsigned int arg4, unsigned int arg5);
extern "C" void func_020b11c8(void* arg0, int arg1, int arg2, int arg3, int arg4, unsigned int arg5, int arg6);

static inline int inline_020b1540(const struct Struct_020b1b54_2* arg0) {
    return 8 * 8 * arg0->unknown_c_ / 8;
}

static inline unsigned int inline_020b19b8(const struct Struct_020b1b54_2* arg0, int arg1) {
    unsigned int var0 = (unsigned int)arg1;

    if (arg0->unknown_c_ == 4) {
        var0 = (var0 << 4) | var0;
        var0 |= var0 << 8;
        var0 |= var0 << 16;
    } else {
        var0 = (var0 << 8) | var0;
        var0 |= var0 << 16;
    }

    return var0;
}

// USA: func_020b1b54
extern "C" ARM void func_020b1b54(const struct Struct_020b1b54_2* arg0, int arg1, int arg2, int arg3, int arg4, int arg5) {
    int var0, var1;
    int var2, var3, var4, var5;
    int var6, var7;
    const int var8 = arg2 + arg4;
    const int var9 = arg3 + arg5;
    unsigned int var10;
    union Struct_020b1b54 var11;

    var10 = inline_020b19b8(arg0, arg1);

    var11.unknown_0_ = arg0->unknown_10_;

    {
        const int var12 = arg2 & ~7;
        const int var13 = arg3 & ~7;
        const int var14 = (var8 + 7) & ~7;
        const int var15 = (var9 + 7) & ~7;

        const int var16 = arg0->unknown_4_;
        const int var17 = arg0->unknown_8_;
        const int var18 = (int)var11.unknown1_0_.unknown_0_0_;
        const int var19 = (int)var11.unknown1_0_.unknown_1_0_;

        const int var20 = inline_020b1540(arg0);
        const int var21 = (int)arg0->unknown_10_ * var20;
        const int var22 = arg0->unknown_c_;
        const int var23 = var12 / 8;
        unsigned char* const var24 = arg0->unknown_0_;
        unsigned char* var25;

        var7 = var13 / 8;

        for (var1 = var13; var1 < var15; var1 += 8) {
            var3 = (var1 < arg3) ? arg3 - var1 : 0;
            var5 = ((var9 - var1 > 8) ? 8 : var9 - var1) - var3;
            var25 = var24;

            var6 = var23;
            for (var0 = var12; var0 < var14; var0 += 8) {
                const unsigned int var26 = func_020b10b4((unsigned int)var6, (unsigned int)var7, (unsigned int)var16, (unsigned int)var17, (unsigned int)var18, (unsigned int)var19);
                var2 = (var0 < arg2) ? arg2 - var0 : 0;
                var4 = ((var8 - var0 > 8) ? 8 : var8 - var0) - var2;

                var25 = var24 + var26 * var20;

                func_020b11c8(var25, var2, var3, var4, var5, var10, var22);
                var6++;
            }
            var7++;
        }
    }
}

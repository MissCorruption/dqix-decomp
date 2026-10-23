#include <globaldefs.h>

typedef unsigned char Type_020b1300;
typedef unsigned int Type_020b11c8;

struct Struct_020b1540_3 {
    Type_020b1300 *unknown_0_;
    int unknown_4_;
    int unknown_8_;
    Type_020b1300 unknown_c_;
    Type_020b1300 unknown_d_[3];
    Type_020b11c8 unknown_10_;
};

extern "C" void func_020b11c8(void *arg0, int arg1, int arg2, int arg3, int arg4, Type_020b11c8 arg5, int arg6);

static inline int inline_020b1540(const Struct_020b1540_3 *arg0) {
    return 8 * 8 * arg0->unknown_c_ / 8;
}

static inline Type_020b11c8 inline_020b19b8(const Struct_020b1540_3 *arg0, int arg1) {
    Type_020b11c8 var0 = (Type_020b11c8)arg1;

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

// USA: func_020b19b8
extern "C" ARM void func_020b19b8(const Struct_020b1540_3 *arg0, int arg1, int arg2, int arg3, int arg4, int arg5) {
    int var0, var1;
    int var2, var3, var4, var5;
    const int var6 = arg2 + arg4;
    const int var7 = arg3 + arg5;
    Type_020b11c8 var8;

    var8 = inline_020b19b8(arg0, arg1);

    {
        const int var9 = arg2 & ~7;
        const int var10 = arg3 & ~7;
        const int var11 = (var6 + 7) & ~7;
        const int var12 = (var7 + 7) & ~7;

        const int var13 = inline_020b1540(arg0);
        const int var14 = (int)(arg0->unknown_10_ * var13);
        const int var15 = arg0->unknown_c_;
        Type_020b1300 *var16;
        Type_020b1300 *var17;

        var16 = arg0->unknown_0_ + ((var10 / 8) * arg0->unknown_10_ + (var9 / 8)) * var13;

        for (var1 = var10; var1 < var12; var1 += 8) {
            var3 = (var1 < arg3) ? arg3 - var1 : 0;
            var5 = ((var7 - var1 > 8) ? 8 : var7 - var1) - var3;
            var17 = var16;

            for (var0 = var9; var0 < var11; var0 += 8) {
                var2 = (var0 < arg2) ? arg2 - var0 : 0;
                var4 = ((var6 - var0 > 8) ? 8 : var6 - var0) - var2;

                func_020b11c8(var17, var2, var3, var4, var5, var8, var15);
                var17 += var13;
            }

            var16 += var14;
        }
    }
}

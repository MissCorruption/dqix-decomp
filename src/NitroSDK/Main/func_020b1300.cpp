#include <globaldefs.h>

typedef unsigned char Type_020b1300;
typedef signed char Type_ov002_0215ab60;
typedef unsigned int Type_020b11c8;
typedef unsigned long long Type_020b11c8_2;

#define CHARACTER_WIDTH 8
#define CHARACTER_HEIGHT 8

struct Struct_020b1300 {
    const Type_020b1300* unknown_0_;
    const Type_020b1300* unknown_4_;
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
    int unknown_14_;
    int unknown_18_;
    int unknown_1c_;
    int unknown_20_;
    Type_020b11c8 unknown_24_;
};

struct Struct_020b1300_2 {
    const Type_020b1300* unknown_0_;
    Type_ov002_0215ab60 unknown_4_;
    Type_020b1300 unknown_5_;
    Type_020b1300 unknown_6_[2];
};

extern "C" Type_020b11c8 func_020b29f8(Struct_020b1300_2* arg0, int arg1);

static inline void inline_020b1300(Struct_020b1300_2* arg0, const void* arg1) {
    arg0->unknown_4_ = 0;
    arg0->unknown_0_ = (const Type_020b1300*)arg1;
    arg0->unknown_5_ = 0;
}

static inline int inline_020b1300_2(int arg0, int arg1) {
    return (arg0 <= arg1) ? arg0 : arg1;
}

static inline int inline_020b1300_3(int arg0, int arg1) {
    return (arg0 >= arg1) ? arg0 : arg1;
}

// USA: func_020b1300
extern "C" ARM void func_020b1300(Struct_020b1300* arg0) {
    const Type_020b1300* var0;
    Type_020b11c8 var1;
    Type_020b11c8 var2;
    Type_020b11c8 var3;
    Type_020b11c8 var4;
    Type_020b11c8 var5;

    {
        Type_020b11c8 var6;

        var1 = (unsigned int)inline_020b1300_3(arg0->unknown_8_, 0);
        var3 = (unsigned int)inline_020b1300_3(arg0->unknown_c_, 0);
        var2 = (unsigned int)inline_020b1300_2(CHARACTER_WIDTH, arg0->unknown_8_ + arg0->unknown_10_);
        var4 = (unsigned int)inline_020b1300_2(CHARACTER_HEIGHT, arg0->unknown_c_ + arg0->unknown_14_);

        var6 = (unsigned int)-inline_020b1300_2(arg0->unknown_c_, 0);
        var5 = -inline_020b1300_2(arg0->unknown_8_, 0) * arg0->unknown_1c_ + var6 * arg0->unknown_18_;

        var0 = arg0->unknown_4_;
    }

    {
        Type_020b11c8 var7;
        const int var8 = arg0->unknown_18_;
        const int var9 = arg0->unknown_1c_;
        const int var10 = arg0->unknown_20_;

        var1 *= var10;
        var2 *= var10;

        if (var10 == 4) {
            Type_020b11c8* var11 = (Type_020b11c8*)arg0->unknown_0_ + var3;
            Type_020b11c8* var12 = (Type_020b11c8*)arg0->unknown_0_ + var4;
            Type_020b11c8 var13 = arg0->unknown_24_;

            for (; var11 < var12; var11++) {
                Struct_020b1300_2 var14;
                Type_020b11c8 var15 = *var11;

                inline_020b1300(&var14, var0 + var5 / 8);
                (void)func_020b29f8(&var14, (int)var5 % 8);

                for (var7 = var1; var7 < var2; var7 += 4) {
                    Type_020b11c8 var16 = func_020b29f8(&var14, var9);

                    if (var16 != 0) {
                        var15 = (var15 & ~(0xF << var7)) | ((var13 + var16) << var7);
                    }
                }

                *var11 = var15;

                var5 += var8;
            }
        } else {
            Type_020b11c8* var17 = (Type_020b11c8*)((Type_020b11c8_2*)arg0->unknown_0_ + var3);
            Type_020b11c8* const var18 = (Type_020b11c8*)((Type_020b11c8_2*)arg0->unknown_0_ + var4);
            Type_020b11c8 var19 = arg0->unknown_24_;

            for (; var17 < var18; var17 += 2) {
                Struct_020b1300_2 var20;
                Type_020b11c8 var21 = *var17;
                Type_020b11c8 var22 = *(var17 + 1);

                inline_020b1300(&var20, var0 + var5 / 8);
                (void)func_020b29f8(&var20, (int)var5 % 8);

                for (var7 = var1; var7 < var2; var7 += 8) {
                    Type_020b11c8 var23 = func_020b29f8(&var20, var9);

                    if (var23 != 0) {
                        if (var7 < 32) {
                            var21 = (var21 & ~((Type_020b11c8)0xFF << var7)) | ((Type_020b11c8)(var19 + var23) << var7);
                        } else {
                            const Type_020b11c8 var24 = var7 - 32;
                            var22 = (var22 & ~((Type_020b11c8)0xFF << var24)) | ((Type_020b11c8)(var19 + var23) << var24);
                        }
                    }
                }

                *var17 = var21;
                *(var17 + 1) = var22;

                var5 += var8;
            }
        }
    }
}

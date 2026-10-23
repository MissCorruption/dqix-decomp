#include <globaldefs.h>
#include "Util/Random.h"

#if defined(jpn)
#define data_020e8e2c data_020e8f40
#endif

struct Struct_0209afd4_3 {
    unsigned int unknown_0_0_ : 12;
    unsigned int unknown_1_4_ : 3;
    unsigned int unknown_1_7_ : 3;
    unsigned int unknown_2_2_ : 3;
    unsigned int unknown_2_5_ : 3;
    unsigned int unknown_3_0_ : 3;
    unsigned int unknown_3_3_ : 5;
    int unknown_4_;
};

struct Struct_0209afd4_4 {
    unsigned int unknown_0_0_ : 12;
    unsigned int unknown_1_4_ : 3;
    unsigned int unknown_1_7_ : 3;
    unsigned int unknown_2_2_ : 3;
    unsigned int unknown_2_5_ : 11;
};

struct Struct_0209afd4_5 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    struct Struct_0209afd4_3 unknown_4_[6];
    struct Struct_0209afd4_4 unknown_34_[6];
};

struct Struct_0209afd4_6;

struct Struct_02073ec4_3 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned int unknown_4_0_ : 10;
    unsigned int unknown_5_2_ : 3;
    unsigned int unknown_5_5_ : 19;
    unsigned char unknown_8_[0x18];
};

struct Struct_02073ec4_2 {
    struct Struct_02073ec4_3 unknown_0_[6];
    int unknown_c0_;
};

struct Struct_0209afd4 {
#if defined(jpn)
    unsigned char unknown_0_[0x5c];
#else
    unsigned char unknown1_0_[0x60];
#endif
    struct Struct_02073ec4_2 unknown_60_;
};

struct Struct_0209afd4_2 {
    short unknown_0_[3];
    short unknown_6_[3];
};

struct Struct_020e8e2c {
    int unknown_0_[6][3];
};

extern "C" struct Struct_0209afd4_3* func_0209b8d4(struct Struct_0209afd4_6* arg0, int arg1, int arg2, int* arg3);
extern "C" struct Struct_0209afd4_5* func_0209b9e4(struct Struct_0209afd4_5* arg0, int arg1);
extern "C" struct Struct_02073ec4_3* func_0209bd94(struct Struct_02073ec4_2* arg0, int arg1);

extern struct Struct_020e8e2c data_020e8e2c;

// USA: func_0209afd4
extern "C" ARM void func_0209afd4(struct Struct_0209afd4_5* arg0, int arg1, int arg2, int arg3, struct Struct_0209afd4_2* arg4, struct Struct_0209afd4* arg5) {
    struct Random* var0;
    struct Struct_0209afd4_3* var1;
    struct Struct_0209afd4_5* var2;
    struct Struct_0209afd4_4* var3;
    struct Struct_02073ec4_3* var4;
    int var5;
    int var6;
    int var7;
    int var8;
    int var9;
    int var10;
    int var11;
    int var12;
    int var13;
    int var14;
    int var15;
    int var16;
    int var17;

    var0 = GetBTRandom();
    arg4->unknown_0_[0] = arg1;
    var5 = 0;
    var1 = func_0209b8d4((struct Struct_0209afd4_6*)arg0, arg1, arg3, &var5);
    var6 = 1;
    if ((unsigned short)(short)(arg1 - 0x26) <= 2) {
        arg4->unknown_6_[0] = 1;
    } else if (var1 == NULL) {
        arg4->unknown_6_[0] = 1;
    } else {
        arg4->unknown_6_[0] = NextRandomMax(var0, var1->unknown_1_7_ - var1->unknown_1_4_ + 1) + var1->unknown_1_4_;
        var7 = NextRandomMax(var0, var1->unknown_2_2_ + var1->unknown_2_5_ + var1->unknown_3_0_) + 1;
        if (var7 <= var1->unknown_2_2_) {
            var6 = 1;
        } else if (var7 <= var1->unknown_2_2_ + var1->unknown_2_5_) {
            var6 = 2;
        } else if (var7 <= var1->unknown_2_2_ + var1->unknown_2_5_ + var1->unknown_3_0_) {
            var6 = 3;
        }
        if (var6 != 1) {
            var2 = func_0209b9e4(arg0, arg2);
            var8 = 0;
            for (var9 = 0; var9 < 6; var9++) {
                var3 = &var2->unknown_34_[var9];
                var8 += var3->unknown_1_4_;
            }
            if (var8 == 0) {
                var6 = 1;
            } else {
                var7 = NextRandomMax(var0, var8) + 1;
                var8 = 0;
                for (var11 = 0; var11 < 6; var11++) {
                    var3 = &var2->unknown_34_[var11];
                    var8 += var3->unknown_1_4_;
                    if (var7 <= var8) {
                        break;
                    }
                }
                arg4->unknown_0_[1] = var3->unknown_0_0_;
                arg4->unknown_6_[1] = NextRandomMax(var0, var3->unknown_2_2_ - var3->unknown_1_7_ + 1) + var3->unknown_1_7_;
                if (var6 != 2) {
                    var8 = 0;
                    for (var10 = 0; var10 < 6; var10++) {
                        var3 = &var2->unknown_34_[var10];
                        var8 += var3->unknown_1_4_;
                    }
                    var7 = NextRandomMax(var0, var8) + 1;
                    var8 = 0;
                    for (var12 = 0; var12 < 6; var12++) {
                        var3 = &var2->unknown_34_[var12];
                        var8 += var3->unknown_1_4_;
                        if (var7 <= var8) {
                            break;
                        }
                    }
                    arg4->unknown_0_[2] = var3->unknown_0_0_;
                    arg4->unknown_6_[2] = NextRandomMax(var0, var3->unknown_2_2_ - var3->unknown_1_7_ + 1) + var3->unknown_1_7_;
                }
            }
        }
    }

    var4 = func_0209bd94(&arg5->unknown_60_, arg2);
    if (var4 != NULL) {
        var13 = var4->unknown_5_2_;
    } else {
        var13 = 5;
    }
    var14 = arg4->unknown_6_[0] + arg4->unknown_6_[1] + arg4->unknown_6_[2] - var13;
    if (var14 > 0) {
        var15 = var14 / 3;
        if (var15 == 0) {
            var15 = 1;
        }
        var17 = 0;
        while (var14 > 0) {
            var16 = arg4->unknown_6_[var17];
            arg4->unknown_6_[var17] -= var15;
            if (arg4->unknown_6_[var17] < 0) {
                arg4->unknown_6_[var17] = 0;
            }
            if (var17 == 0 && arg4->unknown_6_[var17] == 0) {
                arg4->unknown_6_[var17] = 1;
            }
            var14 -= var16 - arg4->unknown_6_[var17];
            var17++;
            if (var17 >= 3) {
                var17 = 0;
            }
        }
    }

    if (var6 == 2) {
        if (NextRandomMax(var0, 2) != 0) {
            short var18 = arg4->unknown_0_[0];
            short var19 = arg4->unknown_6_[0];
            arg4->unknown_0_[0] = arg4->unknown_0_[1];
            arg4->unknown_6_[0] = arg4->unknown_6_[1];
            arg4->unknown_0_[1] = var18;
            arg4->unknown_6_[1] = var19;
        }
    } else if (var6 == 3) {
        struct Struct_020e8e2c var20 = data_020e8e2c;
        struct Struct_0209afd4_2 var21;
        int var22 = NextRandomMax(var0, 6);
        var21 = *arg4;
        arg4->unknown_0_[var20.unknown_0_[var22][0]] = var21.unknown_0_[0];
        arg4->unknown_6_[var20.unknown_0_[var22][0]] = var21.unknown_6_[0];
        arg4->unknown_0_[var20.unknown_0_[var22][1]] = var21.unknown_0_[1];
        arg4->unknown_6_[var20.unknown_0_[var22][1]] = var21.unknown_6_[1];
        arg4->unknown_0_[var20.unknown_0_[var22][2]] = var21.unknown_0_[2];
        arg4->unknown_6_[var20.unknown_0_[var22][2]] = var21.unknown_6_[2];
    }
}

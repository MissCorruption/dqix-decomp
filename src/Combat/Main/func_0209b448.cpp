#include <globaldefs.h>
#include "Util/Random.h"
#include "std_library_functions.h"

#if defined(jpn)
#define data_020e8e74 data_020e8f88
#endif

struct Struct_0209b448_3 {
    unsigned int unknown_0_0_ : 12;
    unsigned int unknown_1_4_ : 3;
    unsigned int unknown_1_7_ : 3;
    unsigned int unknown_2_2_ : 3;
    unsigned int unknown_2_5_ : 3;
    unsigned int unknown_3_0_ : 3;
    unsigned int unknown_3_3_ : 5;
    int unknown_4_;
};

struct Struct_0209b448_4 {
    unsigned int unknown_0_0_ : 12;
    unsigned int unknown_1_4_ : 3;
    unsigned int unknown_1_7_ : 3;
    unsigned int unknown_2_2_ : 3;
    unsigned int unknown_2_5_ : 11;
};

struct Struct_0209b448_5 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    struct Struct_0209b448_3 unknown_4_[6];
    struct Struct_0209b448_4 unknown_34_[6];
};

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

struct Struct_0209b448 {
#if defined(jpn)
    unsigned char unknown_0_[0x5c];
#else
    unsigned char unknown1_0_[0x60];
#endif
    struct Struct_02073ec4_2 unknown_60_;
};

struct Struct_0209b448_2 {
    short unknown_0_[3];
    short unknown_6_[3];
};

extern "C" struct Struct_0209b448_3* func_0209b944(struct Struct_0209b448_5* arg0, int arg1, int arg2, int* arg3);
extern "C" struct Struct_02073ec4_3* func_0209bd94(struct Struct_02073ec4_2* arg0, int arg1);

extern const int data_020e8e74[6][3];

// USA: func_0209b448
extern "C" ARM void func_0209b448(struct Struct_0209b448_5* arg0, int arg1, struct Struct_0209b448_2* arg2, struct Struct_0209b448* arg3) {
    int var0;
    int var1;
    int var2;
    int var3;
    int var4;
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
    struct Struct_02073ec4_3* var15;
    struct Struct_0209b448_4* var16;
    int var17;
    int var18;
    int var19;
    int var20;
    struct Struct_0209b448_3* var21;
    struct Random* var22;

    var22 = GetBTRandom();
    var13 = 1;
    var14 = 0;
    var21 = func_0209b944(arg0, 0, arg1, &var14);
    if (var21 == NULL) {
        var13 = 1;
        arg2->unknown_6_[0] = 1;
        arg2->unknown_0_[0] = 0x10;
    } else {
        var10 = var21->unknown_2_2_ + var21->unknown_2_5_ + var21->unknown_3_0_;
        var12 = rand() % var10 + 1;
        if (var12 <= var21->unknown_2_2_) {
            var13 = 1;
        } else if (var12 <= var21->unknown_2_2_ + var21->unknown_2_5_) {
            var13 = 2;
        } else if (var12 <= var21->unknown_2_2_ + var21->unknown_2_5_ + var21->unknown_3_0_) {
            var13 = 3;
        }
        var20 = 0;
        for (var9 = 0; var9 < 6; var9++) {
            var16 = &arg0[var14].unknown_34_[var9];
            var20 += var16->unknown_1_4_;
        }
        if (var20 == 0) {
            var13 = 1;
            arg2->unknown_6_[0] = 1;
            arg2->unknown_0_[0] = 0x10;
        } else {
            var11 = rand() % var20 + 1;
            var5 = 0;
            for (var8 = 0; var8 < 6; var8++) {
                var16 = &arg0[var14].unknown_34_[var8];
                var5 += var16->unknown_1_4_;
                if (var11 <= var5) {
                    break;
                }
            }
            arg2->unknown_0_[0] = var16->unknown_0_0_;
            var17 = var16->unknown_2_2_ - var16->unknown_1_7_;
            arg2->unknown_6_[0] = rand() % (var17 + 1) + var16->unknown_1_7_;
            if (var13 != 1) {
                var11 = rand() % var20 + 1;
                var5 = 0;
                for (var7 = 0; var7 < 6; var7++) {
                    var16 = &arg0[var14].unknown_34_[var7];
                    var5 += var16->unknown_1_4_;
                    if (var11 <= var5) {
                        break;
                    }
                }
                arg2->unknown_0_[1] = var16->unknown_0_0_;
                var18 = var16->unknown_2_2_ - var16->unknown_1_7_;
                arg2->unknown_6_[1] = rand() % (var18 + 1) + var16->unknown_1_7_;
                if (var13 != 2) {
                    var11 = rand() % var20 + 1;
                    var5 = 0;
                    for (var6 = 0; var6 < 6; var6++) {
                        var16 = &arg0[var14].unknown_34_[var6];
                        var5 += var16->unknown_1_4_;
                        if (var11 <= var5) {
                            break;
                        }
                    }
                    arg2->unknown_0_[2] = var16->unknown_0_0_;
                    var19 = var16->unknown_2_2_ - var16->unknown_1_7_;
                    arg2->unknown_6_[2] = rand() % (var19 + 1) + var16->unknown_1_7_;
                }
            }
        }
    }

    var15 = func_0209bd94(&arg3->unknown_60_, arg1);
    if (var15 != NULL) {
        var4 = var15->unknown_5_2_;
    } else {
        var4 = 5;
    }
    var3 = arg2->unknown_6_[0] + arg2->unknown_6_[1] + arg2->unknown_6_[2] - var4;
    if (var3 > 0) {
        var2 = var3 / 3;
        if (var2 == 0) {
            var2 = 1;
        }
        var0 = 0;
        while (var3 > 0) {
            var1 = arg2->unknown_6_[var0];
            arg2->unknown_6_[var0] -= var2;
            if (arg2->unknown_6_[var0] < 0) {
                arg2->unknown_6_[var0] = 0;
            }
            if (var0 == 0 && arg2->unknown_6_[var0] == 0) {
                arg2->unknown_6_[var0] = 1;
            }
            var3 -= var1 - arg2->unknown_6_[var0];
            var0++;
            if (var0 >= 3) {
                var0 = 0;
            }
        }
    }

    if (var13 == 2) {
        if (NextRandomMax(var22, 2) != 0) {
            short var23 = arg2->unknown_0_[0];
            short var24 = arg2->unknown_6_[0];
            arg2->unknown_0_[0] = arg2->unknown_0_[1];
            arg2->unknown_6_[0] = arg2->unknown_6_[1];
            arg2->unknown_0_[1] = var23;
            arg2->unknown_6_[1] = var24;
        }
    } else if (var13 == 3) {
        struct Struct_0209b448_2 var25;
        int var26 = NextRandomMax(var22, 6);
        var25 = *arg2;
        arg2->unknown_0_[data_020e8e74[var26][0]] = var25.unknown_0_[0];
        arg2->unknown_6_[data_020e8e74[var26][0]] = var25.unknown_6_[0];
        arg2->unknown_0_[data_020e8e74[var26][1]] = var25.unknown_0_[1];
        arg2->unknown_6_[data_020e8e74[var26][1]] = var25.unknown_6_[1];
        arg2->unknown_0_[data_020e8e74[var26][2]] = var25.unknown_0_[2];
        arg2->unknown_6_[data_020e8e74[var26][2]] = var25.unknown_6_[2];
    }
}

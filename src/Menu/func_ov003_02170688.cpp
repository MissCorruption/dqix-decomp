#include "globaldefs.h"

struct Struct_ov003_02170688 {
    unsigned char unknown_0_[0xb];
    unsigned char unknown_b_0_ : 7;
    unsigned char unknown_b_7_ : 1;
    unsigned int unknown_c_0_ : 4;
    unsigned int unknown_c_4_ : 4;
    unsigned int unknown_d_0_ : 7;
    unsigned int unknown_d_7_ : 4;
    unsigned int unknown_e_3_ : 5;
    unsigned int unknown_f_0_ : 8;
};
struct Struct_ov003_02170688_2 {
    unsigned char unknown_0_[0x1b38];
    int unknown_1b38_;
};
struct Struct_ov003_02170688_3 {
    unsigned char unknown_0_[0xf4];
    Struct_ov003_02170688* unknown_f4_[31];
    Struct_ov003_02170688_2* unknown_170_;
};
struct Struct_02098e70;
extern "C" int func_02098e70(Struct_02098e70*);
struct Struct_02098eac;
extern "C" int func_02098eac(Struct_02098eac*);

extern "C" ARM void func_ov003_02170688(Struct_ov003_02170688_3* arg0) {
    Struct_ov003_02170688_2* var0 = arg0->unknown_170_;
    int var1 = var0->unknown_1b38_;
    int var2 = func_02098e70((Struct_02098e70*)var0);
    int var3 = var2 + func_02098eac((Struct_02098eac*)var0);
    int var4 = 0;
    for (int var5 = 0; var5 < var1; ++var5) {
        Struct_ov003_02170688* var6 = arg0->unknown_f4_[var5];
        if (var6->unknown_c_4_ == 9 || var6->unknown_c_4_ == 10) {
            arg0->unknown_f4_[var5] = arg0->unknown_f4_[var4];
            arg0->unknown_f4_[var4] = var6;
            ++var4;
        }
    }
    for (int var7 = 0; var7 < var3 - 1; ++var7) {
        for (int var8 = 0; var8 < var3 - 1 - var7; ++var8) {
            Struct_ov003_02170688* var9 = arg0->unknown_f4_[var8];
            Struct_ov003_02170688* var10 = arg0->unknown_f4_[var8 + 1];
            if (var9->unknown_b_0_ < var10->unknown_b_0_) {
                arg0->unknown_f4_[var8] = var10;
                arg0->unknown_f4_[var8 + 1] = var9;
            } else if (var9->unknown_b_0_ > var10->unknown_b_0_) {
                continue;
            } else {
                if (var9->unknown_d_7_ < var10->unknown_d_7_) {
                    arg0->unknown_f4_[var8] = var10;
                    arg0->unknown_f4_[var8 + 1] = var9;
                } else if (var9->unknown_d_7_ > var10->unknown_d_7_) {
                    continue;
                } else if (var9->unknown_e_3_ < var10->unknown_e_3_) {
                    arg0->unknown_f4_[var8] = var10;
                    arg0->unknown_f4_[var8 + 1] = var9;
                }
            }
        }
    }
    int var11 = 0;
    for (int var12 = var3; var12 < var1 - 1; ++var12, ++var11) {
        for (int var13 = var3; var13 < var1 - 1 - var11; ++var13) {
            Struct_ov003_02170688* var14 = arg0->unknown_f4_[var13];
            Struct_ov003_02170688* var15 = arg0->unknown_f4_[var13 + 1];
            if (var14->unknown_b_0_ < var15->unknown_b_0_) {
                arg0->unknown_f4_[var13] = var15;
                arg0->unknown_f4_[var13 + 1] = var14;
            } else if (var14->unknown_b_0_ > var15->unknown_b_0_) {
                continue;
            } else {
                if (var14->unknown_d_7_ < var15->unknown_d_7_) {
                    arg0->unknown_f4_[var13] = var15;
                    arg0->unknown_f4_[var13 + 1] = var14;
                } else if (var14->unknown_d_7_ > var15->unknown_d_7_) {
                    continue;
                } else {
                    if (var14->unknown_e_3_ < var15->unknown_e_3_) {
                        arg0->unknown_f4_[var13] = var15;
                        arg0->unknown_f4_[var13 + 1] = var14;
                    } else if (var14->unknown_e_3_ > var15->unknown_e_3_) {
                        continue;
                    } else if (var14->unknown_c_4_ > var15->unknown_c_4_) {
                        arg0->unknown_f4_[var13] = var15;
                        arg0->unknown_f4_[var13 + 1] = var14;
                    }
                }
            }
        }
    }
}

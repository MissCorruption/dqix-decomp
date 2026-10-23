#include <globaldefs.h>
#include <std_library_functions.h>

struct Struct_ov000_0215ed8c_4 { char unknown_0_[0x25]; unsigned char unknown_25_; char unknown_26_[0xa4 - 0x26]; };
struct Struct_02070b6c_3 { char unknown_0_[4]; };
struct Struct_0200f3a4_15 { char unknown_0_[0x58]; };
struct Struct_02070b6c_4 { char unknown_0_[0x2c]; Struct_0200f3a4_15 unknown_2c_; };
struct Struct_ov000_0215ed8c { char unknown_0_[0x400]; Struct_02070b6c_3 unknown_400_; };
struct Struct_020a95a4_8 {
    char unknown_0_[0x158];
    Struct_ov000_0215ed8c_4 unknown_158_[1];
    char unknown_1fc_[0x284 - 0x1fc];
    Struct_ov000_0215ed8c unknown_284_;
};
struct Struct_ov000_0215ed8c_2 {
    unsigned short unknown_0_;
    unsigned char unknown_2_[8];
    unsigned char unknown_a_0_ : 4;
    unsigned char unknown_a_4_ : 4;
    char unknown_b_[0x18 - 0xb];
};
struct Struct_ov000_0215ed8c_3 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned short unknown_2_;
    unsigned int unknown_4_;
};
struct Struct_ov000_0215767c_2 {
    char unknown_0_[0x81b1];
    unsigned char unknown_81b1_0_ : 4;
    unsigned char unknown_81b1_4_ : 2;
    unsigned char unknown_81b1_6_ : 2;
    char unknown_81b2_[2];
    Struct_ov000_0215ed8c_2 unknown_81b4_[3];
    Struct_ov000_0215ed8c_3 unknown_81fc_[4];
    char unknown_821c_[0x8e18 - 0x821c];
    Struct_020a95a4_8* unknown_8e18_;
};
extern "C" Struct_02070b6c_4* func_02070fd0(Struct_02070b6c_3*, int);
extern "C" int func_020a3694(int*);
extern "C" void func_02089630(Struct_ov000_0215ed8c_4*, Struct_0200f3a4_15*, int);

// USA: func_ov000_0215ed8c
extern "C" ARM void func_ov000_0215ed8c(Struct_ov000_0215767c_2* arg0) {
    Struct_02070b6c_3* var0 = &arg0->unknown_8e18_->unknown_284_.unknown_400_;
    Struct_ov000_0215ed8c_2* var1 = arg0->unknown_81b4_;
    Struct_ov000_0215ed8c_3* var2 = arg0->unknown_81fc_;
    unsigned char var3 = 0;
    int var4[4] = {0};
    int var5;
    int var6;
    unsigned char* var7;
    Struct_ov000_0215ed8c_4* var8;
    Struct_02070b6c_4* var9;
    Struct_ov000_0215ed8c_2* var10;
    for (var5 = 0; var5 < arg0->unknown_81b1_4_; ++var5) {
        var10 = &var1[var5];
        var6 = var10->unknown_0_;
        int var11;
        for (var11 = 0; var11 < arg0->unknown_81b1_6_; ++var11) {
            if (var6 == var2[var11].unknown_2_) break;
        }
        var7 = var1[var5].unknown_2_;
        memset(var7, 0, 8);
        var4[var11] += var1[var5].unknown_a_0_;
        for (int var12 = 0; var12 < var10->unknown_a_0_; ++var12) {
            var7[var12] = var3;
            var8 = &arg0->unknown_8e18_->unknown_158_[var3];
            var9 = func_02070fd0(var0, var6);
            if (var9) {
                func_02089630(var8, &var9->unknown_2c_, func_020a3694((int*)arg0->unknown_8e18_) != 0);
                for (;;) {
                    if (!(var2[var11].unknown_4_ & (1 << var2[var11].unknown_0_))) break;
                    ++var2[var11].unknown_0_;
                    if (var2[var11].unknown_0_ >= 18) var2[var11].unknown_0_ = 1;
                }
                var8->unknown_25_ = var2[var11].unknown_0_;
                var2[var11].unknown_4_ |= 1 << var8->unknown_25_;
                ++var2[var11].unknown_0_;
                if (var2[var11].unknown_0_ >= 18) var2[var11].unknown_0_ = 1;
            }
            ++var3;
        }
    }
    for (int var13 = 0; var13 < 4; ++var13) var2[var13].unknown_1_ = var4[var13];
    for (int var14 = 0; var14 < arg0->unknown_81b1_6_; ++var14) {
        if (var2[var14].unknown_1_ <= 1) {
            int var15 = var2[var14].unknown_2_;
            int var16;
            for (var16 = 0; var16 < arg0->unknown_81b1_4_; ++var16) {
                if (var15 == var1[var16].unknown_0_) break;
            }
            arg0->unknown_8e18_->unknown_158_[var1[var16].unknown_2_[0]].unknown_25_ = 0;
        }
    }
}

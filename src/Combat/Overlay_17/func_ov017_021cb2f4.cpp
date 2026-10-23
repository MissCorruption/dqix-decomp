#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_ov017_021b8470(void* arg0);
extern "C" int func_020100a8(GameState* arg0);

struct Struct_ov017_021cb2f4_2 {
    unsigned int unknown_0_0_ : 3;
    unsigned int unknown_0_3_ : 3;
    unsigned int unknown_0_6_ : 3;
    unsigned int unknown_1_1_ : 3;
    unsigned int unknown_1_4_ : 3;
    unsigned int unknown_1_7_ : 3;
    unsigned int unknown_2_2_ : 3;
    unsigned int unknown_2_5_ : 3;
    unsigned int unknown_3_0_ : 3;
    unsigned int unknown_3_3_ : 3;
    unsigned int unknown_3_6_ : 2;
};

struct Struct_ov017_021cb2f4_3 {
    unsigned char unknown_0_[4];
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    Struct_ov017_021cb2f4_2 unknown_8_;
    Struct_ov017_021cb2f4_2 unknown_c_;
    unsigned short unknown_10_;
    unsigned char unknown_12_;
};

struct Struct_ov017_021cb2f4_4 {
    unsigned char unknown_0_[0x36];
    unsigned short unknown_36_;
    unsigned char unknown_38_[0x5c - 0x38];
    unsigned char unknown_5c_[0x14];
    unsigned char unknown_70_[0x7f - 0x70];
    unsigned char unknown_7f_[0x14];
    unsigned char unknown_93_[0xa4 - 0x93];
};

struct Struct_ov017_021cb2f4 {
    unsigned char unknown_0_[8];
    unsigned short unknown_8_;
    unsigned char unknown_a_[0x2a - 0xa];
    signed char unknown_2a_;
    unsigned char unknown_2b_[0x158 - 0x2b];
    Struct_ov017_021cb2f4_4 unknown_158_[8];
};

// USA: func_ov017_021cb2f4
extern "C" ARM void func_ov017_021cb2f4(int arg0, Struct_ov017_021cb2f4_3* arg1, GameState* arg2, unsigned char* arg3) {
#if defined(jpn)
    void* var0 = *(void**)(arg3 + 0x3000 + 0x508);
#else
    void* var0 = *(void**)(arg3 + 0x3000 + 0x718);
#endif
    void* var1 = func_ov017_021b8470(var0);
    if (!var1) return;
    Struct_ov017_021cb2f4* var2 = *(Struct_ov017_021cb2f4**)((unsigned char*)var1 + 0x8000 + 0xe18);
    if (!var2) return;
    int var3 = func_020100a8(arg2);
    if (var2->unknown_2a_ == var3) return;
    if (var2->unknown_8_ != arg1->unknown_4_) return;
    int var4 = (int)arg1->unknown_6_ - 0xc0;
    if (var4 < 0) return;
    if (var4 >= 8) return;
    Struct_ov017_021cb2f4_4* var5 = &var2->unknown_158_[var4];
    if (arg1->unknown_12_ == 1) {
        var5->unknown_5c_[0] = (unsigned char)arg1->unknown_8_.unknown_0_0_;
        var5->unknown_5c_[1] = (unsigned char)arg1->unknown_8_.unknown_0_3_;
        var5->unknown_5c_[2] = (unsigned char)arg1->unknown_8_.unknown_0_6_;
        var5->unknown_5c_[3] = (unsigned char)arg1->unknown_8_.unknown_1_1_;
        var5->unknown_5c_[4] = (unsigned char)arg1->unknown_8_.unknown_1_4_;
        var5->unknown_5c_[5] = (unsigned char)arg1->unknown_8_.unknown_1_7_;
        var5->unknown_5c_[6] = (unsigned char)arg1->unknown_8_.unknown_2_2_;
        var5->unknown_5c_[7] = (unsigned char)arg1->unknown_8_.unknown_2_5_;
        var5->unknown_5c_[8] = (unsigned char)arg1->unknown_8_.unknown_3_0_;
        var5->unknown_5c_[9] = (unsigned char)arg1->unknown_8_.unknown_3_3_;
        var5->unknown_5c_[10] = (unsigned char)arg1->unknown_c_.unknown_0_0_;
        var5->unknown_5c_[11] = (unsigned char)arg1->unknown_c_.unknown_0_3_;
        var5->unknown_5c_[12] = (unsigned char)arg1->unknown_c_.unknown_0_6_;
        var5->unknown_5c_[13] = (unsigned char)arg1->unknown_c_.unknown_1_1_;
        var5->unknown_5c_[14] = (unsigned char)arg1->unknown_c_.unknown_1_4_;
        var5->unknown_5c_[15] = (unsigned char)arg1->unknown_c_.unknown_1_7_;
        var5->unknown_5c_[16] = (unsigned char)arg1->unknown_c_.unknown_2_2_;
        var5->unknown_5c_[17] = (unsigned char)arg1->unknown_c_.unknown_2_5_;
        var5->unknown_5c_[18] = (unsigned char)arg1->unknown_c_.unknown_3_0_;
        var5->unknown_5c_[19] = (unsigned char)arg1->unknown_c_.unknown_3_3_;
        var5->unknown_36_ = arg1->unknown_10_;
    } else {
        var5->unknown_7f_[0] = (unsigned char)arg1->unknown_8_.unknown_0_0_;
        var5->unknown_7f_[1] = (unsigned char)arg1->unknown_8_.unknown_0_3_;
        var5->unknown_7f_[2] = (unsigned char)arg1->unknown_8_.unknown_0_6_;
        var5->unknown_7f_[3] = (unsigned char)arg1->unknown_8_.unknown_1_1_;
        var5->unknown_7f_[4] = (unsigned char)arg1->unknown_8_.unknown_1_4_;
        var5->unknown_7f_[5] = (unsigned char)arg1->unknown_8_.unknown_1_7_;
        var5->unknown_7f_[6] = (unsigned char)arg1->unknown_8_.unknown_2_2_;
        var5->unknown_7f_[7] = (unsigned char)arg1->unknown_8_.unknown_2_5_;
        var5->unknown_7f_[8] = (unsigned char)arg1->unknown_8_.unknown_3_0_;
        var5->unknown_7f_[9] = (unsigned char)arg1->unknown_8_.unknown_3_3_;
        var5->unknown_7f_[10] = (unsigned char)arg1->unknown_c_.unknown_0_0_;
        var5->unknown_7f_[11] = (unsigned char)arg1->unknown_c_.unknown_0_3_;
        var5->unknown_7f_[12] = (unsigned char)arg1->unknown_c_.unknown_0_6_;
        var5->unknown_7f_[13] = (unsigned char)arg1->unknown_c_.unknown_1_1_;
        var5->unknown_7f_[14] = (unsigned char)arg1->unknown_c_.unknown_1_4_;
        var5->unknown_7f_[15] = (unsigned char)arg1->unknown_c_.unknown_1_7_;
        var5->unknown_7f_[16] = (unsigned char)arg1->unknown_c_.unknown_2_2_;
        var5->unknown_7f_[17] = (unsigned char)arg1->unknown_c_.unknown_2_5_;
        var5->unknown_7f_[18] = (unsigned char)arg1->unknown_c_.unknown_3_0_;
        var5->unknown_7f_[19] = (unsigned char)arg1->unknown_c_.unknown_3_3_;
    }
}

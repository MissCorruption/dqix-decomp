#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_ov017_021b8478(void*);
extern "C" void* func_ov017_021b8468(void*);
extern "C" void* func_ov017_021b8470(void*);
extern "C" int func_020100a8(GameState*);

struct Struct_ov017_021c787c {
    unsigned char unknown_0_[8];
    unsigned short unknown_8_;
    unsigned char unknown_a_[0x20];
    signed char unknown_2a_;
};
struct Struct_ov017_021c787c_2 {
    unsigned int unknown_0_0_:3, unknown_0_3_:3, unknown_0_6_:3, unknown_1_1_:3, unknown_1_4_:3;
    unsigned int unknown_1_7_:3, unknown_2_2_:3, unknown_2_5_:3, unknown_3_0_:3, unknown_3_3_:3;
};
struct Struct_ov017_021c787c_3 {
    unsigned int unknown_0_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned int unknown_8_;
    unsigned int unknown_c_;
    unsigned short unknown_10_;
    unsigned char unknown_12_;
};
struct Struct_ov017_021c787c_4 {
    unsigned char unknown_0_[0x5c];
    unsigned char unknown_5c_[20];
    unsigned char unknown_70_[15];
    unsigned char unknown_7f_[20];
};

// USA: func_ov017_021c787c
extern "C" ARM void func_ov017_021c787c(int arg0, Struct_ov017_021c787c_3* arg1, GameState* arg2, GameResources* arg3) {
    void* var0 = arg3->unknown_ptr_3718;
    Struct_ov017_021c787c* var1 = (Struct_ov017_021c787c*)func_ov017_021b8478(var0);
    if (!var1) return;
    if (!func_ov017_021b8468(var0)) return;
    if (!func_ov017_021b8470(var0)) return;
    int var2 = func_020100a8(arg2);
    if (var1->unknown_2a_ == var2) return;
    if (var1->unknown_8_ != arg1->unknown_4_) return;
    GameObject* var3 = arg2->GetCombatantByIndex(arg1->unknown_6_);
    if (!var3) return;
    Struct_ov017_021c787c_2* var4 = (Struct_ov017_021c787c_2*)&arg1->unknown_8_;
    Struct_ov017_021c787c_2* var5 = (Struct_ov017_021c787c_2*)&arg1->unknown_c_;
    Struct_ov017_021c787c_4* var6 = (Struct_ov017_021c787c_4*)var3->currentStats_;
    switch (arg1->unknown_12_) {
    case 1: {
        var6->unknown_5c_[0] = var4->unknown_0_0_;
        var6->unknown_5c_[1] = var4->unknown_0_3_;
        var6->unknown_5c_[2] = var4->unknown_0_6_;
        var6->unknown_5c_[3] = var4->unknown_1_1_;
        var6->unknown_5c_[4] = var4->unknown_1_4_;
        var6->unknown_5c_[5] = var4->unknown_1_7_;
        var6->unknown_5c_[6] = var4->unknown_2_2_;
        var6->unknown_5c_[7] = var4->unknown_2_5_;
        var6->unknown_5c_[8] = var4->unknown_3_0_;
        var6->unknown_5c_[9] = var4->unknown_3_3_;
        var6->unknown_5c_[10] = var5->unknown_0_0_;
        var6->unknown_5c_[11] = var5->unknown_0_3_;
        var6->unknown_5c_[12] = var5->unknown_0_6_;
        var6->unknown_5c_[13] = var5->unknown_1_1_;
        var6->unknown_5c_[14] = var5->unknown_1_4_;
        var6->unknown_5c_[15] = var5->unknown_1_7_;
        var6->unknown_5c_[16] = var5->unknown_2_2_;
        var6->unknown_5c_[17] = var5->unknown_2_5_;
        var6->unknown_5c_[18] = var5->unknown_3_0_;
        var6->unknown_5c_[19] = var5->unknown_3_3_;
        break;
    }
    default: {
        var6->unknown_7f_[0] = var4->unknown_0_0_;
        var6->unknown_7f_[1] = var4->unknown_0_3_;
        var6->unknown_7f_[2] = var4->unknown_0_6_;
        var6->unknown_7f_[3] = var4->unknown_1_1_;
        var6->unknown_7f_[4] = var4->unknown_1_4_;
        var6->unknown_7f_[5] = var4->unknown_1_7_;
        var6->unknown_7f_[6] = var4->unknown_2_2_;
        var6->unknown_7f_[7] = var4->unknown_2_5_;
        var6->unknown_7f_[8] = var4->unknown_3_0_;
        var6->unknown_7f_[9] = var4->unknown_3_3_;
        var6->unknown_7f_[10] = var5->unknown_0_0_;
        var6->unknown_7f_[11] = var5->unknown_0_3_;
        var6->unknown_7f_[12] = var5->unknown_0_6_;
        var6->unknown_7f_[13] = var5->unknown_1_1_;
        var6->unknown_7f_[14] = var5->unknown_1_4_;
        var6->unknown_7f_[15] = var5->unknown_1_7_;
        var6->unknown_7f_[16] = var5->unknown_2_2_;
        var6->unknown_7f_[17] = var5->unknown_2_5_;
        var6->unknown_7f_[18] = var5->unknown_3_0_;
        var6->unknown_7f_[19] = var5->unknown_3_3_;
    }
    }
}

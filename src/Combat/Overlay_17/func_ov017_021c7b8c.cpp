#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

struct Struct_ov017_021c7b8c {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned int unknown_4_0_:3, unknown_4_3_:3, unknown_4_6_:3, unknown_5_1_:3, unknown_5_4_:3;
    unsigned int unknown_5_7_:3, unknown_6_2_:3, unknown_6_5_:3, unknown_7_0_:3, unknown_7_3_:3;
    unsigned int :0;
    unsigned int unknown_8_0_:3, unknown_8_3_:3, unknown_8_6_:3, unknown_9_1_:3, unknown_9_4_:4;
    unsigned char unknown_a_;
};
struct Struct_ov017_021c7b8c_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    Struct_ov017_021c7b8c unknown_4_;
};
struct Struct_ov017_021c7b8c_3 {
    unsigned char unknown_0_[0x26];
    unsigned char unknown_26_;
    unsigned char unknown_27_[0x70 - 0x27];
    unsigned char unknown_70_[15];
    unsigned char unknown_7f_[0x93 - 0x7f];
    unsigned char unknown_93_[15];
};
struct Struct_ov017_021c7b8c_4 {
    unsigned char unknown_0_[8];
    unsigned short unknown_8_;
};
extern "C" void* func_ov017_021b8478(void*);
extern "C" void* func_0202ae24();
extern "C" int func_020a35e0(unsigned char*, unsigned char);
extern "C" void func_0205e330(void*, Struct_ov017_021c7b8c_2*, int);

// USA: func_ov017_021c7b8c
extern "C" ARM void func_ov017_021c7b8c() {
    GameState* var0 = GameState::GetInstance();
    Struct_ov017_021c7b8c_4* var1 = (Struct_ov017_021c7b8c_4*)func_ov017_021b8478(GetGameResources()->unknown_ptr_3718);
    void* var2 = func_0202ae24();
    Struct_ov017_021c7b8c* var3;
    Struct_ov017_021c7b8c_2 var4;
    var3 = &var4.unknown_4_;
    var4.unknown_0_ = 0x73;
    for (int var5 = 0; var5 < 4; ++var5) {
        if (!func_020a35e0((unsigned char*)var1, var5 & 255)) continue;
        GameObject* var6 = var0->GetCombatantByIndex(var5);
        if (!var6 || !((Struct_ov017_021c7b8c_3*)var6->currentStats_)->unknown_26_) continue;
        var3->unknown_0_ = var1->unknown_8_;
        var3->unknown_2_ = var5;
        Struct_ov017_021c7b8c_3* var7 = (Struct_ov017_021c7b8c_3*)var6->currentStats_;
        var3->unknown_a_ = 1;
        var3->unknown_4_0_ = var7->unknown_70_[0];
        var3->unknown_4_3_ = var7->unknown_70_[1];
        var3->unknown_4_6_ = var7->unknown_70_[2];
        var3->unknown_5_1_ = var7->unknown_70_[3];
        var3->unknown_5_4_ = var7->unknown_70_[4];
        var3->unknown_5_7_ = var7->unknown_70_[5];
        var3->unknown_6_2_ = var7->unknown_70_[6];
        var3->unknown_6_5_ = var7->unknown_70_[7];
        var3->unknown_7_0_ = var7->unknown_70_[8];
        var3->unknown_7_3_ = var7->unknown_70_[9];
        var3->unknown_8_0_ = var7->unknown_70_[10];
        var3->unknown_8_3_ = var7->unknown_70_[11];
        var3->unknown_8_6_ = var7->unknown_70_[12];
        var3->unknown_9_1_ = var7->unknown_70_[13];
        var3->unknown_9_4_ = var7->unknown_70_[14];
        func_0205e330(var2, &var4, 0);
        var7 = (Struct_ov017_021c7b8c_3*)var6->currentStats_;
        var3->unknown_a_ = 0;
        var3->unknown_4_0_ = var7->unknown_93_[0];
        var3->unknown_4_3_ = var7->unknown_93_[1];
        var3->unknown_4_6_ = var7->unknown_93_[2];
        var3->unknown_5_1_ = var7->unknown_93_[3];
        var3->unknown_5_4_ = var7->unknown_93_[4];
        var3->unknown_5_7_ = var7->unknown_93_[5];
        var3->unknown_6_2_ = var7->unknown_93_[6];
        var3->unknown_6_5_ = var7->unknown_93_[7];
        var3->unknown_7_0_ = var7->unknown_93_[8];
        var3->unknown_7_3_ = var7->unknown_93_[9];
        var3->unknown_8_0_ = var7->unknown_93_[10];
        var3->unknown_8_3_ = var7->unknown_93_[11];
        var3->unknown_8_6_ = var7->unknown_93_[12];
        var3->unknown_9_1_ = var7->unknown_93_[13];
        var3->unknown_9_4_ = var7->unknown_93_[14];
        func_0205e330(var2, &var4, 0);
    }
}

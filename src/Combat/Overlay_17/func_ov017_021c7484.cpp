#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

struct Struct_ov017_021c7484 {
    unsigned int unknown_0_0_ : 3, unknown_0_3_ : 3, unknown_0_6_ : 3, unknown_1_1_ : 3, unknown_1_4_ : 3, unknown_1_7_ : 3, unknown_2_2_ : 3, unknown_2_5_ : 3, unknown_3_0_ : 3, unknown_3_3_ : 3;
};

struct Struct_ov017_021c7484_2 {
    char unknown_0_[0x26];
    unsigned char unknown_26_;
    char unknown_27_[0x35];
    unsigned char unknown_5c_[20];
    char unknown_70_[0xf];
    unsigned char unknown_7f_[20];
};

struct Struct_ov017_021c7484_3 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    Struct_ov017_021c7484 unknown_4_;
    Struct_ov017_021c7484 unknown_8_;
    char unknown_c_[2];
    unsigned char unknown_e_;
    char unknown_f_;
};

struct Struct_ov017_021c7484_4 {
    unsigned char unknown_0_;
    char unknown_1_[3];
    Struct_ov017_021c7484_3 unknown_4_;
};

struct Struct_ov017_021c7484_5 { char unknown_0_[8]; unsigned short unknown_8_; };

extern "C" void* func_ov017_021b8478(void*);
extern "C" void* func_0202ae24();
extern "C" int func_020a35e0(unsigned char*, unsigned char);
extern "C" void func_0205e330(void*, void*, int);

// USA: func_ov017_021c7484
extern "C" ARM void func_ov017_021c7484() {
    GameState* var0 = GameState::GetInstance();
    Struct_ov017_021c7484_5* var1 = (Struct_ov017_021c7484_5*)func_ov017_021b8478(GetGameResources()->unknown_ptr_3718);
    void* var2 = func_0202ae24();
    Struct_ov017_021c7484_4 var3;
    var3.unknown_0_ = 0x72;
    Struct_ov017_021c7484_3* var4 = &var3.unknown_4_;
    for (int var5 = 0; var5 < 4; ++var5) {
        if (!func_020a35e0((unsigned char*)var1, var5)) continue;
        GameObject* var6 = var0->GetCombatantByIndex(var5);
        if (!((Struct_ov017_021c7484_2*)var6->currentStats_)->unknown_26_) continue;
        var4->unknown_0_ = var1->unknown_8_;
        var4->unknown_2_ = var5;
        Struct_ov017_021c7484_2* var7 = (Struct_ov017_021c7484_2*)var6->currentStats_;
        var4->unknown_e_ = 1;
        var4->unknown_4_.unknown_0_0_ = var7->unknown_5c_[0];
        var4->unknown_4_.unknown_0_3_ = var7->unknown_5c_[1];
        var4->unknown_4_.unknown_0_6_ = var7->unknown_5c_[2];
        var4->unknown_4_.unknown_1_1_ = var7->unknown_5c_[3];
        var4->unknown_4_.unknown_1_4_ = var7->unknown_5c_[4];
        var4->unknown_4_.unknown_1_7_ = var7->unknown_5c_[5];
        var4->unknown_4_.unknown_2_2_ = var7->unknown_5c_[6];
        var4->unknown_4_.unknown_2_5_ = var7->unknown_5c_[7];
        var4->unknown_4_.unknown_3_0_ = var7->unknown_5c_[8];
        var4->unknown_4_.unknown_3_3_ = var7->unknown_5c_[9];
        var4->unknown_8_.unknown_0_0_ = var7->unknown_5c_[10];
        var4->unknown_8_.unknown_0_3_ = var7->unknown_5c_[11];
        var4->unknown_8_.unknown_0_6_ = var7->unknown_5c_[12];
        var4->unknown_8_.unknown_1_1_ = var7->unknown_5c_[13];
        var4->unknown_8_.unknown_1_4_ = var7->unknown_5c_[14];
        var4->unknown_8_.unknown_1_7_ = var7->unknown_5c_[15];
        var4->unknown_8_.unknown_2_2_ = var7->unknown_5c_[16];
        var4->unknown_8_.unknown_2_5_ = var7->unknown_5c_[17];
        var4->unknown_8_.unknown_3_0_ = var7->unknown_5c_[18];
        var4->unknown_8_.unknown_3_3_ = var7->unknown_5c_[19];
        func_0205e330(var2, &var3, 0);
        var7 = (Struct_ov017_021c7484_2*)var6->currentStats_;
        var4->unknown_e_ = 0;
        var4->unknown_4_.unknown_0_0_ = var7->unknown_7f_[0];
        var4->unknown_4_.unknown_0_3_ = var7->unknown_7f_[1];
        var4->unknown_4_.unknown_0_6_ = var7->unknown_7f_[2];
        var4->unknown_4_.unknown_1_1_ = var7->unknown_7f_[3];
        var4->unknown_4_.unknown_1_4_ = var7->unknown_7f_[4];
        var4->unknown_4_.unknown_1_7_ = var7->unknown_7f_[5];
        var4->unknown_4_.unknown_2_2_ = var7->unknown_7f_[6];
        var4->unknown_4_.unknown_2_5_ = var7->unknown_7f_[7];
        var4->unknown_4_.unknown_3_0_ = var7->unknown_7f_[8];
        var4->unknown_4_.unknown_3_3_ = var7->unknown_7f_[9];
        var4->unknown_8_.unknown_0_0_ = var7->unknown_7f_[10];
        var4->unknown_8_.unknown_0_3_ = var7->unknown_7f_[11];
        var4->unknown_8_.unknown_0_6_ = var7->unknown_7f_[12];
        var4->unknown_8_.unknown_1_1_ = var7->unknown_7f_[13];
        var4->unknown_8_.unknown_1_4_ = var7->unknown_7f_[14];
        var4->unknown_8_.unknown_1_7_ = var7->unknown_7f_[15];
        var4->unknown_8_.unknown_2_2_ = var7->unknown_7f_[16];
        var4->unknown_8_.unknown_2_5_ = var7->unknown_7f_[17];
        var4->unknown_8_.unknown_3_0_ = var7->unknown_7f_[18];
        var4->unknown_8_.unknown_3_3_ = var7->unknown_7f_[19];
        func_0205e330(var2, &var3, 0);
    }
}

#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Util/Random.h"

extern "C" void __clear(void* arg0, int arg1);

struct Struct_02010088;
extern "C" int func_02010088(struct Struct_02010088* arg0);
extern "C" int func_ov000_02153c0c(GameObject* arg0);

struct Struct_ov000_02153aa4 {
    unsigned short unknown_0_;
    unsigned char unknown_2_[8];
    unsigned char unknown_a_0_ : 4;
    unsigned char unknown_a_4_ : 4;
    char unknown_b_[0x18 - 0xb];
};

struct Struct_ov000_02153aa4_2 {
    unsigned char unknown_0_0_ : 4;
    unsigned char unknown_0_4_ : 2;
    unsigned char unknown_0_6_ : 2;
};

struct Struct_ov000_02153aa4_3 {
    Random unknown_0_;
    char unknown_20_[0x81b1 - sizeof(Random)];
    Struct_ov000_02153aa4_2 unknown_81b1_;
    char unknown_81b2_[2];
    Struct_ov000_02153aa4 unknown_81b4_[3];
};

static inline GameObject* inline_ov000_02153aa4(short arg0) {
    return GameState::GetInstance()->GetCombatantByIndex(arg0);
}

// USA: func_ov000_02153aa4
extern "C" ARM void func_ov000_02153aa4(Struct_ov000_02153aa4_3* arg0, int arg1, int* arg2) {
    short var0 = *arg2;
    GameState* var1 = GameState::GetInstance();
    GameObject* var2 = var1->GetCombatantByIndex(var0);
    if (var2 == NULL) {
        return;
    }
    if (!func_02010088((struct Struct_02010088*)var2) && !func_ov000_02153c0c(var2)) {
        return;
    }
    Struct_ov000_02153aa4* var3 = arg0->unknown_81b4_;
    int var4[3];
    __clear(var4, 0xc);
    int* var5 = var4;
    int var6 = 0;
    if (var3[arg1].unknown_a_4_ == 0) {
        for (int var7 = 0; var7 < arg0->unknown_81b1_.unknown_0_4_; var7++) {
            if (var3[var7].unknown_a_4_ != 0) {
                var5[var6++] = var7;
            }
        }
        arg1 = var5[NextRandomMax(&arg0->unknown_0_, var6)];
    }

    int var8;
    unsigned char* var9;
    int var10;
    int var11;
    Struct_ov000_02153aa4* var12;
    int* var13;
    int var14[8];
    __clear(var14, 0x20);
    var8 = 0;
    var12 = &var3[arg1];
    var9 = var12->unknown_2_;
    var13 = var14;
    for (var10 = 0; var10 < var12->unknown_a_0_; var10++) {
        var11 = var9[var10] + 0xc0;
        GameObject* var15 = inline_ov000_02153aa4(var11);
        if (var15 != NULL && !func_02010088((struct Struct_02010088*)var15) && !func_ov000_02153c0c(var15)) {
            var13[var8] = var11;
            var8++;
        }
    }
    *arg2 = var13[NextRandomMax(&arg0->unknown_0_, var8)];
}

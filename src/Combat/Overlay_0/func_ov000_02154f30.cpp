#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Util/Random.h"

struct Struct_02010088;
extern "C" int func_02010088(struct Struct_02010088* arg0);
extern "C" GameObject* func_0200fea4(GameState* arg0, int arg1);

struct Struct_ov000_02154f30 {
    char unknown_0_[0x3c];
    unsigned int unknown_3c_0_ : 30;
    unsigned int unknown_3f_6_ : 1;
    unsigned int unknown_3f_7_ : 1;
};

struct Struct_ov000_02154f30_2 {
    char unknown_0_[0x2e];
    short unknown_2e_;
    char unknown_30_[0x32 - 0x30];
    short unknown_32_;
    short unknown_34_;
};

struct Struct_ov000_02154f30_3 {
    char unknown_0_[0x10];
    unsigned int unknown_10_0_ : 26;
    unsigned int unknown_13_2_ : 1;
    unsigned int unknown_13_3_ : 5;
};

struct Struct_ov000_02154f30_4 {
    char unknown_0_[0x134];
    struct Struct_ov000_02154f30* unknown_134_;
    struct Struct_ov000_02154f30_2* unknown_138_;
    char unknown_13c_[0x148 - 0x13c];
    struct Struct_ov000_02154f30_3* unknown_148_;
};

struct Struct_ov000_02182ca4 {
    int unknown_0_[4];
};

struct Struct_ov000_02182c94 {
    short unknown_0_[8];
};

extern "C" int func_ov000_02155154(GameObject* arg0);
extern "C" int func_ov000_02153c0c(GameObject* arg0);
extern "C" int func_ov000_0215516c(GameObject* arg0);

extern struct Struct_ov000_02182ca4 data_ov000_02182ca4;
extern struct Struct_ov000_02182c94 data_ov000_02182c94;

// USA: func_ov000_02154f30
extern "C" ARM short func_ov000_02154f30(struct Random* arg0, int arg1, int arg2, short* arg3) {
    struct Struct_ov000_02154f30_4* var0 = (struct Struct_ov000_02154f30_4*)func_0200fea4(GameState::GetInstance(), arg1);
    struct Struct_ov000_02154f30_3* var1 = var0->unknown_148_;
    struct Struct_ov000_02182ca4 var2 = data_ov000_02182ca4;
    int var3 = 0;
    if (func_ov000_02155154((GameObject*)var0)) {
        short var4 = var0->unknown_138_->unknown_2e_;
        GameState* var5 = GameState::GetInstance();
        GameObject* var6 = var5->GetCombatantByIndex(var4);
        if (var6 != NULL && !func_02010088((struct Struct_02010088*)var6) && !func_ov000_02153c0c(var6)) {
            return var0->unknown_138_->unknown_2e_;
        }
    }
    struct Struct_ov000_02182c94 var7 = data_ov000_02182c94;
    unsigned char var8 = 0;
    for (int var9 = 0; var9 < arg2; var9++) {
        short var10 = arg3[var9];
        GameState* var11 = GameState::GetInstance();
        GameObject* var12 = var11->GetCombatantByIndex(var10);
        if (var12 == NULL || func_02010088((struct Struct_02010088*)var12) || func_ov000_02153c0c(var12)) {
            continue;
        }
        var2.unknown_0_[var8] = (unsigned short)((struct Struct_ov000_02154f30_4*)var12)->unknown_134_->unknown_3f_6_ == 0 ? 2 : 1;
        if (var1->unknown_13_2_ == 1) {
            struct Struct_ov000_02154f30_2* var13 = var0->unknown_138_;
            short var14 = arg3[var9];
            if (var14 == var13->unknown_32_) {
                var2.unknown_0_[var8] += 2;
            }
            if (var14 == var13->unknown_34_) {
                var2.unknown_0_[var8] += 1;
            }
        }
        var3 += var2.unknown_0_[var8];
        var7.unknown_0_[var8] = arg3[var9];
        if (func_ov000_0215516c(var12)) {
            var2.unknown_0_[var8] >>= 1;
        }
        var8++;
    }
    if (var8 == 0) {
        return -1;
    }
    int var15 = NextRandomMax(arg0, var3) + 1;
    for (int var16 = 0; var16 < var8; var16++) {
        if (var2.unknown_0_[var16] >= var15) {
            return var7.unknown_0_[var16];
        }
        var15 -= var2.unknown_0_[var16];
    }
    return var7.unknown_0_[NextRandomMax(arg0, var8)];
}

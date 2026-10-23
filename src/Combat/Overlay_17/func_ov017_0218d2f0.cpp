#include <globaldefs.h>
#include "Combat/CombatantRecovery.h"
#include "GameState/GameState.h"

struct Struct_ov000_02175808_4 { char unknown_0_[0xf78]; signed char unknown_f78_[4]; unsigned char unknown_f7c_; };
struct Struct_ov017_021d82e0 { int unknown_0_; void* unknown_4_; };
extern Struct_ov017_021d82e0 data_ov017_021d82e0;
extern "C" void func_02039830(void*);
extern "C" unsigned char func_02039820(void*);
extern "C" unsigned char func_020100b0(GameState*);
extern "C" void func_02048418(unsigned char*, unsigned short);
extern "C" void func_ov017_021c9e00(int, int, int, int);
extern "C" void func_ov017_02191108(void*, int, int, int, int);
extern "C" void func_020397c0(void*);
struct Struct_02018300_3;
extern "C" void func_020397cc(Struct_02018300_3*, int);

// USA: func_ov017_0218d2f0
extern "C" ARM void func_ov017_0218d2f0(unsigned char arg0, unsigned char arg1, int arg2, unsigned char arg3) {
    GameState* var0 = GameState::GetInstance();
    Struct_ov000_02175808_4* var1 = (Struct_ov000_02175808_4*)func_02010828(var0);
    int var2 = 1;
    unsigned char var3 = var1->unknown_f7c_;
    GameObject* var4 = var0->GetUnknownGameObject();
    if (var4) {
        func_02039830(var4);
        var2 = func_02039820(var4) != 0;
    }
    for (unsigned char var5 = 0; var5 < var3; ++var5) {
        short var6 = var1->unknown_f78_[var5];
        GameObject* var7 = func_0200ff1c(var0, var6);
        if (!var7 || (!arg3 && var6 != func_020100b0(var0))) continue;
        if (arg0) {
            if (var7->unknown_ac_.unknown_84_->unknown_0_ & 1) {
                func_02053fe4(var7, 1, 1);
                func_02048418((unsigned char*)var7, 1);
            }
        }
        if (arg1 && !(var7->unknown_ac_.unknown_84_->unknown_0_ & 1)) {
            if (var7->unknown_ac_.unknown_84_->unknown_0_) var7->unknown_ac_.unknown_84_->unknown_0_ &= 4;
        }
        if (arg2 && !(var7->unknown_ac_.unknown_84_->unknown_0_ & 1)) {
            int var8 = var7->unknown_ac_.unknown_84_->unknown_4_ + arg2;
            if (var7->baseStats_->primaryStats.maxHP < var8) var8 = var7->baseStats_->primaryStats.maxHP;
            var7->unknown_ac_.unknown_84_->unknown_4_ = var8;
            var8 = var7->unknown_ac_.unknown_84_->unknown_6_ + arg2;
            if (var7->baseStats_->primaryStats.maxMP < var8) var8 = var7->baseStats_->primaryStats.maxMP;
            var7->unknown_ac_.unknown_84_->unknown_6_ = var8;
        }
        func_ov017_021c9e00(var6, 1, 0, 1);
        func_ov017_02191108(data_ov017_021d82e0.unknown_4_, 1, 1, 1, 1);
    }
    var4 = var0->GetUnknownGameObject();
    if (var4) {
        if (var2) func_020397c0(var4);
        else func_020397cc((Struct_02018300_3*)var4, 1);
    }
}

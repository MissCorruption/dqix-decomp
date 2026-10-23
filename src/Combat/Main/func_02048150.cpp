#include <globaldefs.h>
#include "Combat/CombatantRecovery.h"
#include "GameState/GameState.h"
#include "Resource/GameResources.h"
struct Struct_02048150;
extern "C" int func_02086ef0(Struct_02048150*, int);
extern "C" void func_ov017_02191108(GameResources*, int, int, int, int);

// USA: func_02048150
extern "C" ARM void func_02048150(GameObject* arg0, int arg1, int arg2) {
    GameState* var0 = GameState::GetInstance();
    GameResources* var1 = GetGameResources();
    Struct_02048150* var2 = (Struct_02048150*)func_02010828(var0);
    Struct_020200c0* var3 = arg0->unknown_ac_.unknown_84_;
    int var4 = 0;
    if (var3->unknown_0_ & 1) var4 = 1;
    int var5 = arg0->baseStats_->primaryStats.maxHP;
    if (arg1 > 0) {
        if (arg1 > var5) arg1 = var5;
        var3->unknown_4_ = arg1;
    } else if (var3->unknown_4_ == 0) var3->unknown_4_ = var5;
    int var6 = 0;
    Struct_020200c0* var7 = arg0->unknown_ac_.unknown_84_;
    if (var7->unknown_0_ & 4) var6 = 1;
    var7->unknown_0_ = 0;
    if (var6) arg0->unknown_ac_.unknown_84_->unknown_0_ |= 4;
    if (var4 && func_02086ef0(var2, arg0->obj3D_.unknown_4_) && arg2)
        func_ov017_02191108(var1, 1, 1, 1, 1);
}

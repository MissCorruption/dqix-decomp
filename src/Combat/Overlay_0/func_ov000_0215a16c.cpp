#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: func_ov000_0215a16c
extern "C" ARM short func_ov000_0215a16c(void* arg0, int arg1, int arg2, short* arg3) {
    GameObject* var0 = GameState::GetInstance()->GetCombatantByIndex(arg1);
    if (var0 == 0) {
        return 0;
    }
    int var1 = var0->currentStats_->primaryStats.currHP;
    *arg3 = (short)arg2;
    int var2 = var1 + arg2;
    if (var2 > var0->currentStats_->primaryStats.maxHP) {
        int var3 = var0->currentStats_->primaryStats.maxHP - var0->currentStats_->primaryStats.currHP;
        *arg3 = (short)var3;
        var2 = var0->currentStats_->primaryStats.maxHP;
    }
    var0->currentStats_->primaryStats.currHP = (unsigned short)var2;
    return (short)var2;
}

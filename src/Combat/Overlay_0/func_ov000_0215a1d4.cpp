#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: func_ov000_0215a1d4
extern "C" ARM short func_ov000_0215a1d4(void* arg0, int arg1, int arg2, short* arg3) {
    GameObject* var0 = GameState::GetInstance()->GetCombatantByIndex(arg1);
    if (var0 == 0) {
        return 0;
    }
    int var1 = var0->currentStats_->primaryStats.currMP;
    *arg3 = (short)arg2;
    int var2 = var1 + arg2;
    if (var2 > var0->currentStats_->primaryStats.maxMP) {
        int var3 = var0->currentStats_->primaryStats.maxMP - var0->currentStats_->primaryStats.currMP;
        *arg3 = (short)var3;
        var2 = var0->currentStats_->primaryStats.maxMP;
    }
    var0->currentStats_->primaryStats.currMP = (unsigned short)var2;
    return (short)var2;
}

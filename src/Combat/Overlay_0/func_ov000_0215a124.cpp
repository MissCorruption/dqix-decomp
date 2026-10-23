#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: func_ov000_0215a124
extern "C" ARM int func_ov000_0215a124(void* arg0, int arg1, int arg2) {
    GameObject* var0 = GameState::GetInstance()->GetCombatantByIndex(arg1);
    if (var0 == 0) {
        return 0;
    }
    int var1;
    struct ModifiableCombatStats* var2 = var0->currentStats_;
    var1 = var2->primaryStats.currMP - arg2;
    if (var1 <= 0) {
        var1 = 0;
    }
    var2->primaryStats.currMP = (unsigned short)var1;
    return (short)var1;
}

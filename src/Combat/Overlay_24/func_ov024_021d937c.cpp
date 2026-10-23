#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Util/Random.h"

// USA: func_ov024_021d937c
extern "C" ARM int func_ov024_021d937c(struct Random** arg0, int arg1, int arg2, int arg3, int arg4, int arg5) {
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = var0->GetCombatantByIndex(arg1);
    if (!var1) return arg5;
    unsigned short var2 = var1->currentStats_->primaryStats.maxHP;
    struct Random* var3 = *arg0;
    float var4 = NextRandomFloatBetween(var3, 0.4f, 0.6f);
    return (int)((float)var2 * var4);
}

#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov024_021d923c { void* unknown_0_; };

// USA: func_ov024_021d923c
extern "C" ARM int func_ov024_021d923c(struct Struct_ov024_021d923c* arg0, int arg1, int arg2, int arg3, int arg4, int arg5) {
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = var0->GetCombatantByIndex(arg1);
    GameObject* var2 = var0->GetCombatantByIndex(arg2);
    if (var1 == NULL || var2 == NULL) {
        return arg5;
    }
    int var3 = (int)((float)var1->currentStats_->primaryStats.currHP * 0.8f);
    *(int*)((char*)arg0->unknown_0_ + 0x8e38) = var3 + 2;
    int var4 = (int)((float)var2->currentStats_->primaryStats.currHP * 0.8f);
    return var4;
}

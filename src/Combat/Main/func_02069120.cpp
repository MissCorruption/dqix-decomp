#include <globaldefs.h>
#include "GameState/GameState.h"

static inline BaseCombatStats* inline_02069120(GameObject* arg0) {
    return arg0->baseStats_;
}

// USA: func_02069120
extern "C" ARM void func_02069120(void* arg0, int* arg1) {
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = var0->GetPartyMemberByIndex(0);
    if (var1 == NULL) {
        return;
    }
    BaseCombatStats* var2 = inline_02069120(var1);
    *arg1 += sprintf((char*)(*arg1), var2->unk);
}

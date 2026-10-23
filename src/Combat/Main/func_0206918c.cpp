#include <globaldefs.h>
#include "GameState/GameState.h"

static inline BaseCombatStats* GetBaseStats(GameObject* obj) {
    return obj->baseStats_;
}

// USA: func_0206918c
extern "C" ARM void func_0206918c(void* unused, int* accum) {
    GameState* battleStruct = GameState::GetInstance();
    GameObject* combatant = battleStruct->GetProtagonist();
    if (combatant == NULL) {
        return;
    }
    BaseCombatStats* stats = GetBaseStats(combatant);
    *accum += sprintf((char*)(*accum), (const char*)stats);
}

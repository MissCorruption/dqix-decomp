#include <globaldefs.h>
#include "GameState/GameState.h"

static inline BaseCombatStats* GetBaseStats(GameObject* obj) {
    return obj->baseStats_;
}

// USA: func_02069158
extern "C" ARM void func_02069158(void* unused, int* accum) {
    GameState* battleStruct = GameState::GetInstance();
    GameObject* combatant = battleStruct->GetUnknownGameObject();
    if (combatant == NULL) {
        return;
    }
    BaseCombatStats* stats = GetBaseStats(combatant);
    *accum += sprintf((char*)(*accum), (const char*)stats);
}

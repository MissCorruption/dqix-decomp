#include <globaldefs.h>
#include "GameState/GameState.h"

struct FieldRefStruct_021d923c { void* field0; };

// USA: func_ov024_021d923c
extern "C" ARM int func_ov024_021d923c(struct FieldRefStruct_021d923c* param1, int attackerId, int defenderId, int unused4, int unused5, int fallback) {
    GameState* bs = GameState::GetInstance();
    GameObject* attacker = bs->GetCombatantByIndex(attackerId);
    GameObject* defender = bs->GetCombatantByIndex(defenderId);
    if (attacker == NULL || defender == NULL) {
        return fallback;
    }
    int scaledAttackerHP = (int)((float)attacker->currentStats_->primaryStats.currHP * 0.8f);
    *(int*)((char*)param1->field0 + 0x8e38) = scaledAttackerHP + 2;
    int scaledDefenderHP = (int)((float)defender->currentStats_->primaryStats.currHP * 0.8f);
    return scaledDefenderHP;
}

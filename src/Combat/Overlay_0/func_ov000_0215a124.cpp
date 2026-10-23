#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: func_ov000_0215a124
extern "C" ARM int func_ov000_0215a124(void* unused, int id, int amount) {
    GameObject* c = GameState::GetInstance()->GetCombatantByIndex(id);
    if (c == 0) {
        return 0;
    }
    int newMP;
    struct ModifiableCombatStats* stats = c->currentStats_;
    newMP = stats->primaryStats.currMP - amount;
    if (newMP <= 0) {
        newMP = 0;
    }
    stats->primaryStats.currMP = (unsigned short)newMP;
    return (short)newMP;
}

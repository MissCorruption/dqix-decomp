#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: func_ov000_0215a1d4
extern "C" ARM short func_ov000_0215a1d4(void* unused, int id, int delta, short* outApplied) {
    GameObject* c = GameState::GetInstance()->GetCombatantByIndex(id);
    if (c == 0) {
        return 0;
    }
    int cur = c->currentStats_->primaryStats.currMP;
    *outApplied = (short)delta;
    int newVal = cur + delta;
    if (newVal > c->currentStats_->primaryStats.maxMP) {
        int applied = c->currentStats_->primaryStats.maxMP - c->currentStats_->primaryStats.currMP;
        *outApplied = (short)applied;
        newVal = c->currentStats_->primaryStats.maxMP;
    }
    c->currentStats_->primaryStats.currMP = (unsigned short)newVal;
    return (short)newVal;
}

#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Util/Random.h"

// USA: func_ov024_021d8b68
extern "C" ARM int func_ov024_021d8b68(struct Random** rngPtr, int id, int a2, int a3, int a4, int val) {
    GameState* bs = GameState::GetInstance();
    GameObject* c = bs->GetCombatantByIndex(id);
    if (!c) return val;
    unsigned short atk = c->baseStats_->primaryStats.attack;
    struct Random* rng = *rngPtr;
    float f = NextRandomFloatBetween(rng, 0.85f, 0.95f);
    return (int)((float)atk * f);
}

#include <globaldefs.h>
#include "GameState/GameState.h"

struct OutStruct0215ccbc;

extern "C" void func_ov000_0215ccbc(int unused, struct OutStruct0215ccbc* out, GameObject* combatant,
                            short valC, short valA, short valB, unsigned long long words, unsigned char byteE);

static inline short GetCurrHP(GameObject* c) { SDK_NULL_ASSERT(c); return c->currentStats_->primaryStats.currHP; }
static inline short GetCurrMP(GameObject* c) { SDK_NULL_ASSERT(c); return c->currentStats_->primaryStats.currMP; }

// USA: func_ov000_0215cd44
extern "C" ARM void func_ov000_0215cd44(int unused, struct OutStruct0215ccbc* out, GameObject* combatant,
                                        short valC, unsigned long long words, unsigned char byteE) {
    func_ov000_0215ccbc(unused, out, combatant, valC, GetCurrHP(combatant), GetCurrMP(combatant), words, byteE);
}

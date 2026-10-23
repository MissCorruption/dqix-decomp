#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Util/Random.h"

extern "C" int func_020882f8(unsigned char* stats);
extern "C" float func_02074968(int x);
extern "C" int func_ov000_021543f4(GameObject* combatant);
extern "C" float func_02074978(int x);
extern "C" void func_02088390(void* obj);
extern "C" void func_020883fc(void* obj);

struct Action_02157288 {
    char pad0[0x10];
    unsigned int flags;
};

struct CombatStats_02157288 {
    char pad0[0x3b];
    unsigned char flag3b_0 : 1;
};

static inline bool IsPartyIndex(int idx) {
    return (idx >= 0 && idx <= 3) ? 1 : 0;
}

// USA: func_ov000_02157288
extern "C" ARM int func_ov000_02157288(struct Random* rng, int combatantId, struct Action_02157288* action) {
    float rate;
    signed char isParty;
    int roll;
    int result;
    GameObject* c;

    if (!(action->flags & 0x800)) {
        return 0;
    }

    rate = 0;
    c = GameState::GetInstance()->GetCombatantByIndex(combatantId);
    if (c == NULL) {
        return 0;
    }

    isParty = IsPartyIndex(combatantId);
    if (func_020882f8((unsigned char*)c->currentStats_)) {
        rate = func_02074968(isParty);
    } else if (func_ov000_021543f4(c)) {
        rate = func_02074978(isParty);
    }

    rate *= 100.0f;
    roll = NextRandomMax(rng, 100);
    if (roll < (int)rate) {
        result = 0x40;
        if (func_ov000_021543f4(c)) {
            result = 0x173;
        }
        func_02088390(c->currentStats_);
        func_020883fc(c->currentStats_);
        ((struct CombatStats_02157288*)c->currentStats_)->flag3b_0 = 1;
        return result;
    }
    return 0;
}

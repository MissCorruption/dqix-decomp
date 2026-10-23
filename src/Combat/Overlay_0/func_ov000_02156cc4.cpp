#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Util/Random.h"

struct Combatant02156cc4 {
#if defined(jpn)
    char pad0[0x144];
#else
    char pad0[0x150];
#endif
    unsigned char* status;
};

struct Battler02156cc4 {
    char pad0[4];
    unsigned int deftness : 10;
    unsigned int rest : 22;
};

struct Param2085ab8 {
    char pad0[8];
    unsigned int lo8 : 29;
    unsigned int alwaysCrit : 1;
    unsigned int hi8 : 2;
    char pad1[0x14 - 0xc];
    unsigned int lo14 : 21;
    unsigned int critChance : 7;
    unsigned int hi14 : 4;
};

extern "C" unsigned char* func_02053c6c(unsigned char* obj);
extern "C" int func_02083b00(unsigned char* obj, int index);
extern "C" float func_02084e78(void* param0);
extern "C" int func_02085ab8(unsigned char* actor, Param2085ab8* action);
float CalculateCritRate(int deftness, float accessoryBonus, float bookBonus, float skillBonus, unsigned char hitCount);
extern "C" float func_020748f8(float a, unsigned int b);
extern "C" float func_ov000_02155a04(GameObject* obj);

static inline unsigned char* GetStatus(GameObject* c) {
    return ((Combatant02156cc4*)c)->status;
}

static inline int IsPartyIndex(int id) {
    return id >= 0 && id <= 3;
}

// USA: func_ov000_02156cc4
extern "C" ARM int func_ov000_02156cc4(struct Random* rand, int attackerId, Param2085ab8* action, int hitCount) {
    if (action->alwaysCrit) {
        return 1;
    }
    GameState* bs = GameState::GetInstance();
    float rate;
    if (IsPartyIndex(attackerId)) {
        GameObject* attacker = func_0200ff1c(bs, attackerId);
        unsigned char* battler = func_02053c6c((unsigned char*)attacker);
        int deftness = ((Battler02156cc4*)battler)->deftness;
        float mending = func_02084e78(battler);
        float bonus = func_02085ab8(battler, action);
        rate = CalculateCritRate(deftness, mending, bonus, action->critChance / 100.0f, (unsigned char)hitCount);
        if (func_02083b00(GetStatus(attacker), 0x11d)) {
            if (func_ov000_02155a04(attacker) < 0.25f) {
                rate *= 2.0f;
            }
        }
    } else {
        rate = func_020748f8(action->critChance / 100.0f, (unsigned char)hitCount);
    }
    rate = 100.0f * rate;
    return NextRandomMax(rand, 10000) < (int)rate;
}

#include <globaldefs.h>
#include "Combat/CombatantRecovery.h"
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

struct SearchStruct0202c1a4;
struct Foo02033b58;

extern "C" void* func_0202ae18(void);
extern "C" int func_0202b7d8(int* obj);
extern "C" signed char func_0202c1a4(struct SearchStruct0202c1a4* obj);
extern "C" int func_02048418(unsigned char* obj, unsigned short flag);
extern "C" void func_02033b58(struct Foo02033b58* p, unsigned char v);
extern "C" void func_ov017_021c9d2c(int slot, unsigned short a1, unsigned short a2, unsigned short a3, int a4, unsigned int a5, unsigned char a6, int flagA, int flagB);
extern "C" void func_ov017_02191108(void* unused, int c, int d, int e, int flag);

static inline unsigned short GetMaximumMP(const BaseCombatStats* stats) {
    return stats->primaryStats.maxMP;
}
static inline unsigned short GetMaximumHP(const BaseCombatStats* stats) {
    return stats->primaryStats.maxHP;
}

// USA: func_ov017_021bd5d0
extern "C" ARM void func_ov017_021bd5d0(void) {
    GameState* battle = GameState::GetInstance();
    void* g = func_0202ae18();
    GameObject* combatant = battle->GetGameObjectByIndex(0);
    void* other = GetGameResources();
    struct CombatantStatus* p = combatant->combatFields_.savedState_130_;

    if (p->GetFlags() & 1) {
        if (func_0202b7d8((int*)g) && func_0202c1a4((struct SearchStruct0202c1a4*)g) == 0) {
            func_02053fe4(combatant, 1, 0);
            func_02048418((unsigned char*)combatant, 1);

            p = combatant->combatFields_.savedState_130_;
            struct BaseCombatStats* q = combatant->baseStats_;
            unsigned char byte8 = p->GetStatus();
            unsigned int word0 = p->GetFlags();
            unsigned short maxMP = GetMaximumMP(q);
            unsigned short maxHP = GetMaximumHP(q);
            unsigned short half6 = p->GetMP();
            func_ov017_021c9d2c(combatant->obj3D_.unknown_4_, 1, maxHP, half6, maxMP, word0, byte8, 1, 0);

            func_02033b58((struct Foo02033b58*)combatant, 0);
            combatant->combatFields_.unknown_b2_ = 0;
        } else if (func_0202b7d8((int*)g) == 0) {
            func_02053fe4(combatant, 1, 0);
            func_02048418((unsigned char*)combatant, 1);
            func_02033b58((struct Foo02033b58*)combatant, 0);
            combatant->combatFields_.unknown_b2_ = 0;
        }
        func_ov017_02191108(other, 1, 1, 1, 0);
    }
}

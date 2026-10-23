#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "Util/Random.h"

struct GoldBattleState {
    unsigned char pad_00[0x8e02];
    unsigned char entryCount;
};
struct GoldActionEntry {
    unsigned char pad_00[0x1b];
    unsigned char amount;
};
struct GoldAction {
    unsigned char pad_00[8];
    void* chain;
    GoldActionEntry* source;
    GoldBattleState* battle;
};
struct GoldInventory {
    unsigned char pad_00[0xf6c];
    unsigned int gold;
};
struct MonsterGold {
    unsigned char pad_00[0xc];
    unsigned short gold;
};
struct GoldCombatant : GameObject {
    unsigned char pad_13c[0xc];
    MonsterGold* monster;
};
extern "C" GameObject* func_ov000_021536f8(int, int);
extern "C" void* func_ov000_0215e958(void*);
extern "C" int func_ov000_0215ffa0(void*);
extern "C" int func_ov000_0215fd24(int, int);
extern "C" void func_ov000_0215a88c(void*, void*, int);
extern "C" void func_ov000_0215cd44(void*, void*, GameObject*, int, int, int, int);
extern "C" void func_ov000_0215fe84(void*, void*, int);
static inline int IsPartyMember(int id) { return id >= 0 && id <= 3; }

// USA: func_ov024_021e5c7c
extern "C" ARM void func_ov024_021e5c7c(GoldAction* action, int id, int unused, int damage) {
    if (damage <= 0) return;
    GameObject* combatant = GetCombatantByID((int)action->battle, id);
    if (!combatant) return;
    if ((int)(float)NextRandomMax((Random*)action->battle, 2) <= 0) return;
    void* entry = func_ov000_0215e958(action->battle);
    if (!entry) return;
    GoldInventory* inventory = (GoldInventory*)func_02010828(GameState::GetInstance());
    int other;
    int amount;
    GoldActionEntry* source = action->source;
    if (!source) return;
    other = func_ov000_0215ffa0(source);
    if (IsPartyMember(other)) return;
    amount = 0;
    if (IsPartyMember(id)) {
        GoldCombatant* monster = (GoldCombatant*)func_ov000_021536f8((int)action->battle, other);
        if (monster) {
            amount = (int)(0.1f * (float)(unsigned int)monster->monster->gold);
            if (amount > 100) amount = 100;
            if (amount > 0) {
                if (func_ov000_0215fd24((int)action->battle, id)) {
                    unsigned int total = inventory->gold + amount;
                    if (total > 9999999) inventory->gold = 9999999;
                    else inventory->gold = total;
                }
                source->amount = amount;
                func_ov000_0215a88c(action->battle, entry, 0x172);
            }
        }
    } else {
        amount = (int)(0.1f * (float)inventory->gold);
        if (amount > 100) amount = 100;
        if (amount > 0) {
            if (func_ov000_0215fd24((int)action->battle, other)) inventory->gold -= amount;
            source->amount = amount;
            func_ov000_0215a88c(action->battle, entry, 0x172);
        }
    }
    if (amount > 0) {
        func_ov000_0215cd44(action->battle, entry, combatant, (short)amount, 0, 0, 0);
        func_ov000_0215fe84(action->chain, entry, 2);
        action->battle->entryCount++;
    }
}

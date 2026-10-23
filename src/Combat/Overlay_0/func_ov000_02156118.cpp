#include <globaldefs.h>
#include "GameState/GameState.h"

struct Container02070e60;

struct MonsterEntry {
    char unk_0[0x10];
    unsigned int unk_10_0 : 16;
    unsigned int rank : 3;
};

struct BattleContext {
    char unk_0[0x8e18];
    char* data;
};

extern "C" int func_ov000_0215fc60(char* base);
extern "C" GameObject* func_0200ff1c(GameState* gameState, int combatantId);
extern "C" GameObject* func_0200ff94(GameState* gameState, int combatantId);
extern "C" unsigned char* func_02053c6c(unsigned char* obj);
extern "C" float func_02084ee8(void* actor);
extern "C" int func_02085b88(unsigned char* actor);
extern "C" MonsterEntry* func_02070fd0(Container02070e60* container, int key);
extern "C" float func_02074988(int i);
extern "C" int func_ov000_02156258(GameObject* combatant);

// USA: func_ov000_02156118
extern "C" ARM float func_ov000_02156118(BattleContext* ctx, int combatantId) {
    if (func_ov000_0215fc60((char*)ctx) != 0) {
        return 0;
    }
    GameState* gs = GameState::GetInstance();
    GameObject* combatant = GameState::GetInstance()->GetCombatantByIndex(combatantId);
    if (combatant == 0) {
        return 0;
    }
    float value;
    int isParty = (combatantId >= 0 && combatantId <= 3) ? 1 : 0;
    if (isParty) {
        GameObject* member = func_0200ff1c(gs, combatantId);
        if (member == 0) {
            return 0;
        }
        unsigned char* actor = func_02053c6c((unsigned char*)member);
        if (actor == 0) {
            return 0;
        }
        if (*(short*)(actor + 0x2cc) <= 0) {
            return 0;
        }
        float sum = 0.0f;
        float charm = func_02084ee8(actor);
        int slots = func_02085b88(actor);
        value = slots + (sum + charm);
    } else {
        GameObject* monster = func_0200ff94(gs, combatantId);
        if (monster == 0) {
            return 0;
        }
        MonsterEntry* entry = func_02070fd0((Container02070e60*)(ctx->data + 0x684), monster->obj3D_.unknown_2_);
        signed char rank = entry->rank;
        value = func_02074988(rank);
    }
    if (func_ov000_02156258(combatant) != 0) {
        value = 2.0f * value;
    }
    return value;
}

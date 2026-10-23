#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_ov000_0215fc60(char* base);
extern "C" int func_02053c6c(unsigned char* obj);
extern "C" float func_02084f58(void* actor);
extern "C" int func_02085c08(unsigned char* actor);
extern "C" int func_02083b00(unsigned char* obj, int index);
extern "C" float func_ov000_02155a04(GameObject* combatant);
extern "C" GameObject* func_0200ff94(GameState* battleStruct, int combatantId);
extern "C" int func_ov000_021563ec(GameObject* combatant);
extern "C" int func_ov000_02156404(GameObject* combatant);

struct Element02070e60 {
    char pad0[0x10];
    unsigned int key : 13;
    unsigned int rank : 3;
};
struct Container02070e60;
extern "C" struct Element02070e60* func_02070fd0(struct Container02070e60* container, int key);
extern "C" float func_02074988(int i);

struct Battle02156270 {
    char pad0[0x8e18];
    char* field8e18;
};

// USA: func_ov000_02156270
extern "C" ARM float func_ov000_02156270(struct Battle02156270* battle, int combatantId) {
    float rate;
    if (func_ov000_0215fc60((char*)battle) != 0) {
        return 0.0f;
    }
    GameState* bs = GameState::GetInstance();
    GameObject* combatant = GameState::GetInstance()->GetCombatantByIndex(combatantId);
    if (combatant == NULL) {
        return 0.0f;
    }
    int isParty = (combatantId >= 0 && combatantId <= 3) ? 1 : 0;
    if (isParty) {
        GameObject* member = func_0200ff1c(bs, combatantId);
        if (member == NULL) {
            return 0.0f;
        }
        unsigned char* actor = (unsigned char*)func_02053c6c((unsigned char*)member);
        if (actor == NULL) {
            return 0.0f;
        }
        float scale = 2.0f;
        float might = func_02084f58(actor);
        float slots = func_02085c08(actor);
        rate = slots + (scale + might);
        if (func_02083b00(actor, 0xa6) && func_ov000_02155a04(combatant) < 0.08f) {
            rate = rate * scale;
        }
    } else {
        GameObject* monster = func_0200ff94(bs, combatantId);
        if (monster == NULL) {
            return 0.0f;
        }
        struct Element02070e60* e = func_02070fd0(
            (struct Container02070e60*)(battle->field8e18 + 0x684), monster->obj3D_.unknown_2_);
        rate = func_02074988((signed char)e->rank);
    }
    if (func_ov000_021563ec(combatant)) {
        rate = 2.0f * rate;
    }
    if (func_ov000_02156404(combatant)) {
        return 50.0f;
    }
    return rate;
}

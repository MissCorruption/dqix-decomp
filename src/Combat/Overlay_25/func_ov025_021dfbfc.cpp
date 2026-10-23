#include <globaldefs.h>
#include "GameState/GameState.h"

struct CombatInfo_021dfbfc {
#if defined(jpn)
    char pad0[0x8b4];
#else
    char pad0[0x94c];
#endif
    int status;
};

extern "C" struct CombatInfo_021dfbfc* func_02053c6c(unsigned char* obj);
extern "C" void func_02049458(unsigned char* obj, unsigned char value);

struct Action_021dfbfc {
    char pad0[0xe];
    short value;
};

struct Node_021dfbfc {
    char pad0[0x20];
    unsigned short id;
    char pad22[0xe];
    struct Node_021dfbfc* next;
};

struct Slot_021dfbfc {
    char pad0[0x10];
    struct Node_021dfbfc* head;
    struct Action_021dfbfc* action;
    char pad18[0x10];
};

struct Party_021dfbfc {
    char pad0[0x821c];
    struct Slot_021dfbfc slots[77];
    int slotCount;
};

struct BattleCtrl_021dfbfc {
#if defined(jpn)
    char pad0[0x218];
#else
    char pad0[0x29c];
#endif
    struct Party_021dfbfc* party;
};

static inline int IsInRange(int id) {
    return id >= 0xc0 && id <= 0xc7;
}

// USA: func_ov025_021dfbfc
extern "C" ARM void func_ov025_021dfbfc(BattleCtrl_021dfbfc* obj) {
    GameState* bs = GameState::GetInstance();
    struct Party_021dfbfc* party = obj->party;
    for (int i = 0; i < party->slotCount; i++) {
        struct Slot_021dfbfc* slot = &party->slots[i];
        for (struct Node_021dfbfc* node = slot->head; node != 0; node = node->next) {
            int id = node->id;
            int apply = 0;
            if (IsInRange(id)) {
                apply = 1;
            } else {
                GameObject* c = func_0200ff1c(bs, id);
                if (c != 0) {
                    struct CombatInfo_021dfbfc* info = func_02053c6c((unsigned char*)c);
                    if (info != 0 && (signed char)info->status != 5) {
                        apply = 1;
                    }
                }
            }
            if (apply) {
                GameObject* target = bs->GetCombatantByIndex(id);
                if (target != 0 && slot->action != 0) {
                    func_02049458((unsigned char*)target, slot->action->value);
                }
            }
        }
    }
}

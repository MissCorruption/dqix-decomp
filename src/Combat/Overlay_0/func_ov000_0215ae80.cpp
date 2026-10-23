#include <globaldefs.h>
#include "GameState/GameState.h"
#include "std_library_functions.h"

struct S_10088;
extern "C" int func_02010088(struct S_10088* obj);
extern "C" int func_ov000_02153c0c(GameObject* combatant);

struct ActionEntry0215ae80 {
    char pad0[0x20];
    short combatantId;
};

struct List02160094;
struct List021600f8;
extern "C" ActionEntry0215ae80* func_ov000_02160094(struct List02160094* list, int index);
extern "C" void* func_ov000_021600f8(struct List021600f8* list, int index);

struct ActionNode0215ae80 {
    char pad0[0x28];
};

extern "C" void* func_ov000_0215e9d8(void* work);
extern "C" void func_ov000_02160030(void* obj);

struct Battle0215ae80 {
    char pad0[0x7770];
    ActionNode0215ae80 actions[0x40];
    char pad8170[0x8e0a - 0x8170];
    unsigned char actionCursor;
    char pad8e0b[0x8e0f - 0x8e0b];
    unsigned char actionCount;
    char pad8e10[0x8e24 - 0x8e10];
    int workCount;
};

// USA: func_ov000_0215ae80
extern "C" ARM void func_ov000_0215ae80(Battle0215ae80* self) {
    int i;
    for (i = self->actionCursor; i < self->actionCount; i++) {
        void* work = func_ov000_0215e9d8(self);
        if (work == NULL) return;
        func_ov000_02160030(work);
        ActionNode0215ae80* node = &self->actions[i];
        ActionEntry0215ae80* entry = func_ov000_02160094((struct List02160094*)node, 0);
        if (entry != NULL && func_ov000_021600f8((struct List021600f8*)node, 0) != NULL) {
            short id = entry->combatantId;
            GameState* gs = GameState::GetInstance();
            GameObject* c = gs->GetCombatantByIndex(id);
            if (c == NULL) return;
            if (func_02010088((struct S_10088*)c)) return;
            if (func_ov000_02153c0c(c)) return;
            memcpy(work, node, sizeof(ActionNode0215ae80));
            self->workCount++;
        }
    }
    self->actionCursor = self->actionCount;
}

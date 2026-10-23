#include <globaldefs.h>
#if defined(jpn)
#define COMBATANT_ID_OFFSET 0x1ae8
#else
#define COMBATANT_ID_OFFSET 0x1c20
#endif
#include "GameState/GameState.h"

extern "C" void* func_02010828(GameState* battleStruct);
extern "C" int func_02053c6c(unsigned char* obj);

struct ItemTable {
    char unk0[0xc];
    short items[1];
};

struct Storage {
    char unk0[0xc00];
    ItemTable table;
    ItemTable* GetTable() { return &table; }
};

struct Inventory {
    char unk0[0x204];
    Storage storage;
    Storage* GetStorage() { return &storage; }
};

// USA: func_ov002_0215707c
// KEEP-NAME
extern "C" ARM int GetInventoryItemByID(void* self, int idx, int kind) {
    if (idx < 0) {
        return -1;
    }
    if (kind < 0) {
        return -1;
    }
    GameState* battle = GameState::GetInstance();
    if (kind == 5) {
        Inventory* p = (Inventory*)func_02010828(battle);
        return p->GetStorage()->GetTable()->items[idx];
    }
    if (kind == 4) {
        char* p = (char*)func_02010828(battle);
        return *(short*)(p + 0xc + idx * 2);
    }
    signed char id = *(signed char*)((char*)self + COMBATANT_ID_OFFSET);
    GameObject* combatant = func_0200ff1c(battle, id);
    if (combatant == 0) {
        return -1;
    }
    return *(short*)((char*)func_02053c6c((unsigned char*)combatant) + 0x454 + idx * 2);
}

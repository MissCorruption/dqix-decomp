#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_ov017_021d60f4(void* p);
extern "C" int func_ov001_0215ad2c(int x);
extern "C" void func_ov001_0215acb4(void* entry);
extern "C" int func_020100a8(GameState* gs);
extern "C" int func_ov001_02164214(void* arr, int idx, int type, int val, int flag);
extern "C" int func_ov001_02164248(void* arr, int idx, int type, int val, int flag);

#include "Combat/EntryGetterTypes.h"
struct EntryList_203dce4;
extern "C" void* func_0203cf4c(void);
extern "C" struct Entry_203dce4* func_0203dce4(struct EntryList_203dce4* list, int id);

struct QueueTable_0215bdd0 { void* unused0; char* entries; };
extern QueueTable_0215bdd0 data_ov001_02165880;

// USA: func_ov001_0215bdd0
extern "C" ARM int func_ov001_0215bdd0(char* self) {
    GameState* gs = GameState::GetInstance();
    int id;
    int slot = func_ov017_021d60f4(self);
    id = func_ov017_021d60f4(self + 0x8);
    int type = func_ov017_021d60f4(self + 0x10);
    id = func_ov001_0215ad2c(id);

    func_ov001_0215acb4(data_ov001_02165880.entries + (slot << 4));

    if (type == 0 || type == 1 || (unsigned)(type - 4) <= 1) {
        GameObject* obj = NULL;
        if (type == 0) {
            obj = gs->GetGameObjectByIndex(func_020100a8(gs));
        } else if (type == 1) {
            obj = gs->GetGameObjectByIndex(id);
        } else if (type == 4) {
            obj = gs->GetGameObjectByIndex(0);
        } else if (type == 5) {
            obj = gs->GetGameObjectByIndex(id);
        }
        if (obj == NULL) return 0;
        return func_ov001_02164214(data_ov001_02165880.entries, slot, type, id, (int)obj);
    }

    if (type == 2 || type == 6) {
        struct Entry_203dce4* entry = func_0203dce4((struct EntryList_203dce4*)func_0203cf4c(), id);
        if (entry == NULL) return 0;
        entry->flags |= 0x10000;
        return func_ov001_02164248(data_ov001_02165880.entries, slot, type, id, (int)entry);
    }
    return 0;
}

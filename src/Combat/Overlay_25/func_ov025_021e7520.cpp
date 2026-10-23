#include <globaldefs.h>
#include "GameState/GameState.h"
struct ObjectStatePrefix;

extern "C" void func_02033fec(ObjectStatePrefix* obj);
extern "C" void func_0203400c(ObjectStatePrefix* obj);
extern "C" int func_ov000_021820bc(void* obj, int unused, int index, int arg);

struct Param021e7520 {
    char pad[8];
    unsigned short field8;
    unsigned short pad2;
    int field_c;
};

// USA: func_ov025_021e7520
extern "C" ARM int func_ov025_021e7520(struct Param021e7520* p, int unused, int unusedR2, void* obj) {
    GameState* bs = GameState::GetInstance();
    int ids[8];
    int count = func_ov000_021820bc(obj, unused, p->field8, (int)&ids[0]);
    for (int i = 0; i < count; i++) {
        GameObject* c = bs->GetMaybeWanderingMonsterByIndex(ids[i]);
        if (c) {
            if (p->field_c != 0) {
                func_02033fec((ObjectStatePrefix*)c);
            } else {
                func_0203400c((ObjectStatePrefix*)c);
            }
        }
    }
    return 1;
}

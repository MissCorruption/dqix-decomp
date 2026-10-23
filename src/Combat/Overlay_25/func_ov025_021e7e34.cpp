#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_ov000_021820bc(void* obj, int unused, int index, int arg);

struct Flags02033fdc;
struct Flags02033fcc;
extern "C" void func_02033fdc(struct Flags02033fdc* p);
extern "C" void func_02033fcc(struct Flags02033fcc* p);

struct Param021e7e34 {
    char pad[8];
    unsigned short field8;
    unsigned short pad2;
    int field_c;
};

// USA: func_ov025_021e7e34
extern "C" ARM int func_ov025_021e7e34(struct Param021e7e34* p, int unused, int unusedR2, void* obj) {
    GameState* bs = GameState::GetInstance();
    int ids[12];
    int count = func_ov000_021820bc(obj, unused, p->field8, (int)&ids[0]);
    for (int i = 0; i < count; i++) {
        GameObject* c = bs->GetMaybeWanderingMonsterByIndex(ids[i]);
        if (c) {
            if (p->field_c != 0) {
                func_02033fdc((struct Flags02033fdc*)c);
            } else {
                func_02033fcc((struct Flags02033fcc*)c);
            }
        }
    }
    return 1;
}

#include <globaldefs.h>
#include "GameState/GameState.h"
#include "World/Object3D.h"

struct Entry_02028bd0 {
    unsigned short id;
    unsigned short field2 : 2;
    unsigned short : 14;
};
extern "C" struct Entry_02028bd0* func_02027ca4(void);
extern "C" struct Entry_02028bd0* func_02028bd0(struct Entry_02028bd0* base, int key);
extern "C" void* func_0202ae18(void);
extern "C" int func_0202b7d8(int* obj);
struct SearchStruct0202c1a4;
extern "C" signed char func_0202c1a4(struct SearchStruct0202c1a4* obj);
extern "C" GameObject* func_ov017_021a2738(void* unused, int value);

// USA: func_ov017_0219e180
extern "C" ARM void func_ov017_0219e180(void* param, int id) {
    GameState* bs = GameState::GetInstance();
    struct Entry_02028bd0* table = func_02027ca4();
    void* search = func_0202ae18();
    if (func_0202b7d8((int*)search) != 0) {
        if (func_0202c1a4((struct SearchStruct0202c1a4*)search) != 0) {
            return;
        }
    }
    struct Entry_02028bd0* entry = func_02028bd0(table, id);
    if (entry == NULL) {
        return;
    }
    int group = entry->field2;
    for (int i = 0; i < 0xc; i++) {
        GameObject* monster = bs->GetMaybeFieldMonsterByIndex(group * 0xc + 0x70 + i);
        if (monster == NULL) {
            continue;
        }
        GameObject* found = func_ov017_021a2738(param, monster->obj3D_.unknown_2_);
        if (found == NULL) {
            continue;
        }
        found->obj3D_.ShallowCloneModelAndAnimationsTo(&monster->obj3D_);
    }
}

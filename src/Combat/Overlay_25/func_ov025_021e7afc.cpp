#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_ov000_021820bc(void* obj, int unused, int index, int arg);

struct ShortPair0xba0xbc;
extern "C" void func_02032fd0(ShortPair0xba0xbc*, short, unsigned short);

struct S021e7afc { char pad[8]; unsigned short field8; short fieldA; unsigned short fieldC; };

// USA: func_ov025_021e7afc
extern "C" ARM int func_ov025_021e7afc(struct S021e7afc* obj, int b, int unused, int c) {
    GameState* battle = GameState::GetInstance();
    int ids[12];
    int count = func_ov000_021820bc((void*)c, b, obj->field8, (int)ids);
    int i;
    for (i = 0; i < count; i++) {
        GameObject* combatant = battle->GetMaybeWanderingMonsterByIndex(ids[i]);
        if (combatant) {
            func_02032fd0((struct ShortPair0xba0xbc*)combatant, obj->fieldA, obj->fieldC);
        }
    }
    return 1;
}

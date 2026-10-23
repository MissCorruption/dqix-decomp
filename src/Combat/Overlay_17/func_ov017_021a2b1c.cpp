#include <globaldefs.h>
#include "GameState/GameState.h"

struct Entry_02028bd0 {
    unsigned short id;
    unsigned short field2 : 2;
    unsigned short : 14;
};
extern "C" struct Entry_02028bd0* func_02027cb0(void);
extern "C" GameObject* func_ov017_021a2738(void* unused, int value);
struct PairStruct;
extern "C" void func_02072adc(struct PairStruct* src, struct PairStruct* dst);
struct Bytes02033b88;
extern "C" int func_02033b88(struct Bytes02033b88* p, int val);

// USA: func_ov017_021a2b1c
extern "C" ARM void func_ov017_021a2b1c(void* param) {
    GameState* bs = GameState::GetInstance();
    struct Entry_02028bd0* entry = func_02027cb0();
    if (!entry) return;

    int i;
    for (i = 0; i < 0xc; i++) {
        int t = entry->field2 * 0xc;
        t = t + 0x70;
        int idx = i + t;
        GameObject* combatant = bs->GetMaybeFieldMonsterByIndex(idx);
        if (!combatant) continue;
        GameObject* found = func_ov017_021a2738(param, combatant->obj3D_.unknown_2_);
        if (!found) continue;
        func_02072adc((struct PairStruct*)found, (struct PairStruct*)combatant);
        switch (*(int*)((char*)combatant + 0x130)) {
            case 0:
                func_02033b88((struct Bytes02033b88*)combatant, 5);
                break;
            case 2: case 4: case 5: case 6:
                func_02033b88((struct Bytes02033b88*)combatant, 1);
                break;
            case 9:
                func_02033b88((struct Bytes02033b88*)combatant, 2);
                break;
            default:
                func_02033b88((struct Bytes02033b88*)combatant, 0);
                break;
        }
    }
}

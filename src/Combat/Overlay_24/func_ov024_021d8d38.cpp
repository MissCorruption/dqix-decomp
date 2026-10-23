#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_020885b4;
extern "C" int func_020885b4(struct Struct_020885b4* arg0);
struct Struct_02088514;
extern "C" int func_02088514(struct Struct_02088514* arg0);

// USA: func_ov024_021d8d38
extern "C" ARM int func_ov024_021d8d38(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5) {
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = var0->GetCombatantByIndex(arg2);
    if (var1 == NULL) {
        return arg5;
    }
    if (func_020885b4((struct Struct_020885b4*)var1->currentStats_) ||
        func_02088514((struct Struct_02088514*)var1->currentStats_) ||
        (*(int*)((char*)var1->currentStats_ + 0x14) & 0x8) != 0) {
        return (int)(arg5 * 1.5f);
    }
    return arg5;
}

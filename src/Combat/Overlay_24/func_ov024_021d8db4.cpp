#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_020882f8(unsigned char* arg0);

// USA: func_ov024_021d8db4
extern "C" ARM int func_ov024_021d8db4(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5) {
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = var0->GetCombatantByIndex(arg2);
    if (var1 == NULL) {
        return arg5;
    }
    if (func_020882f8((unsigned char*)var1->currentStats_) ||
        (*(int*)((char*)var1->currentStats_ + 0x14) & 0x20) != 0) {
        return (int)(arg5 * 2.0f);
    }
    return arg5;
}

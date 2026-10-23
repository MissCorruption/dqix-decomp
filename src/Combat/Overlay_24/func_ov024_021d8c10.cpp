#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: func_ov024_021d8c10
extern "C" ARM int func_ov024_021d8c10(char** arg0, int arg1, int arg2, int arg3, int arg4, int arg5) {
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = var0->GetCombatantByIndex(arg1);
    if (!var1) return arg5;
    int var2 = *(int*)((char*)var1->currentStats_ + 0x18);
    if (var2 & 0x200) {
        return *(short*)(*arg0 + 0x8e00 + 0x54);
    }
    return (int)((float)(*(short*)(*arg0 + 0x8e00 + 0x54)) * 1.5f);
}

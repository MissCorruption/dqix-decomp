#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Util/Random.h"

// USA: func_ov024_021d95e0
extern "C" ARM int func_ov024_021d95e0(struct Random** arg0, int arg1, int arg2, int arg3, int arg4, int arg5) {
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = var0->GetCombatantByIndex(arg2);
    if (!var1) return arg5;
    if (NextRandomMax(*arg0, 2) > 0) {
        *((unsigned char*)(*arg0) + 0x8e94) = 1;
        return 0xffff;
    }
    unsigned short var2 = *(unsigned short*)((char*)var1->currentStats_ + 0);
    return (int)((float)var2 * 0.99f);
}

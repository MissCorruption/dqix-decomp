#include <globaldefs.h>
#include "GameState/GameState.h"


// USA: func_ov003_02155fc0
extern "C" ARM int func_ov003_02155fc0(void* arg0, int arg1) {
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = var0->GetPartyMemberByIndex(arg1);
    int var2;
    if (var1 != NULL) {
        unsigned int* var3 = *(unsigned int**)((char*)var1 + 0x130);
        var2 = (*var3 & 1) != 0;
    } else {
        var2 = 0;
    }
    return var2;
}

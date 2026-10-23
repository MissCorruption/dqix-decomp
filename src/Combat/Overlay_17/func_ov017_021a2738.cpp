#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: func_ov017_021a2738
extern "C" ARM GameObject* func_ov017_021a2738(void* arg0, int arg1) {
    if (arg1 < 0) return NULL;
    GameState* var0 = GameState::GetInstance();
    int var1;
    for (var1 = 0; var1 < 0xc; var1++) {
        GameObject* var2 = var0->GetGameObjectByIndex(var1 + 7);
        if (var2) {
            if (arg1 == var2->obj3D_.unknown_2_) return var2;
        }
    }
    return NULL;
}

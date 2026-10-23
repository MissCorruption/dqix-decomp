#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

// USA: func_ov017_02197394
extern "C" ARM void func_ov017_02197394(GameResources*) {
    GameState* var0 = GameState::GetInstance();
    int var1;
    for (var1 = 0xa0; var1 < 0xc0; var1++) {
        GameObject* var2 = var0->GetGameObjectByIndex(var1);
        if (!var2) continue;
        if (var2->obj3D_.GetFlag(0x40000000) != 0) continue;
        var2->obj3D_.AdvanceEffects();
    }
}

#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: func_ov017_021a20c0
extern "C" ARM int func_ov017_021a20c0(int arg0, int arg1, int arg2) {
    GameState* var0 = GameState::GetInstance();
    if (arg2 > 0xc) arg2 = 0xc;
    int var1 = arg1 * 0xc;
    var1 = var1 + 0x70;
    for (int var2 = 0; var2 < arg2; var2++) {
        GameObject* var3 = var0->GetGameObjectByIndex(var2 + var1);
        if (var3 != NULL) {
            short var4 = var3->obj3D_.unknown_2_;
            if (var4 < 0) return var2 + var1;
        }
    }
    return -1;
}

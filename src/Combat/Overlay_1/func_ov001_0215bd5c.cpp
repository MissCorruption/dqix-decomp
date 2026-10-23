#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_ov017_021d60f4(void*);

// USA: func_ov001_0215bd5c
extern "C" ARM int func_ov001_0215bd5c(void* arg0, int arg1) {
    void* var0 = GameState::GetInstance();
    if (var0 == NULL) return 0;
    int var1 = 1;
    int var2 = func_ov017_021d60f4(arg0);
    if (arg1 >= 2) {
        var1 = func_ov017_021d60f4((char*)arg0 + 0x8);
    }
    void* var3 = ((GameState*)var0)->GetGameObjectByIndex(var2);
    if (var3 == NULL) return 0;
    if (var1 != 0) {
        ((Object3D*)var3)->MakeVisible();
    } else {
        ((Object3D*)var3)->MakeHidden();
    }
    return 1;
}

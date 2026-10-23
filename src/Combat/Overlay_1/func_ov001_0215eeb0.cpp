#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_ov017_021d60f4(void*);
extern "C" int func_ov001_0215ad2c(int arg0);

// USA: func_ov001_0215eeb0
extern "C" ARM int func_ov001_0215eeb0(void* arg0) {
    GameState* var0 = GameState::GetInstance();
    int var1 = func_ov001_0215ad2c(func_ov017_021d60f4(arg0));
    int var2 = func_ov017_021d60f4((char*)arg0 + 0x8);
    int var3 = func_ov017_021d60f4((char*)arg0 + 0x10);
    GameObject* var4 = var0->GetGameObjectByIndex(var1);
    if (var4 == NULL) return 0;
    if (var3 != 0) {
        ((Object3D*)((unsigned char*)var4))->EnableFlag(var2);
    } else {
        ((Object3D*)((unsigned char*)var4))->DisableFlag(var2);
    }
    return 1;
}

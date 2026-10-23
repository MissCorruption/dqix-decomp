#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_020243b8;

// USA: func_020243b8
extern "C" ARM int func_020243b8(void* arg0, int arg1) {
    if (arg1 < 0) {
        return 1;
    }
    GameObject* var0 = func_0200ff1c(GameState::GetInstance(), arg1);
    if (var0 == NULL) {
        return 1;
    }
    if (((Object3D*)((struct Struct_020243b8*)var0))->GetInheritedAlpha() == 0) {
        return 0;
    }
    if (((Object3D*)((unsigned char*)var0))->GetAlphaScaleFactor() == 0) {
        return 0;
    }
    return ((Object3D*)((unsigned char*)var0))->IsVisible() != 0;
}

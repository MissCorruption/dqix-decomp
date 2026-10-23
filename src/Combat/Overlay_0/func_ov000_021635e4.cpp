#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_020a2be8;

// USA: func_ov000_021635e4
extern "C" ARM short func_ov000_021635e4(int arg0, int arg1) {
    GameState* var0 = GameState::GetInstance();
    if (var0 == 0) {
        return 0x10a;
    }
    GameObject* var1 = var0->GetGameObjectByIndex(arg0);
    if (var1 == 0) {
        return 0x10a;
    }
    int var2 = 0x1000;
    int var3 = ((Object3D*)((struct Struct_020a2be8*)var1))->GetHeight();
    int var4 = ((Object3D*)((unsigned char*)var1))->GetRadius();
    switch (arg1) {
        case 0:
            if (var3 > var4) {
                var3 = var4;
            }
            var2 = var3;
            break;
        case 1:
            if (var3 < var4) {
                var3 = var4;
            }
            var2 = var3;
            break;
        case 2:
            var2 = (var3 + var4) >> 1;
            break;
        case 3:
            var2 = var4;
            break;
        case 4:
            var2 = var3;
            break;
    }
    return (short)var2;
}

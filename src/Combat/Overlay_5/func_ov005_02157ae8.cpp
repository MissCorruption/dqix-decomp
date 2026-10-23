#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int* func_0202ae18(GameState* arg0);
extern "C" int func_0202b7d8(int* arg0);
extern "C" int func_020100a8(GameState* arg0);
extern "C" void* func_0200ff58(GameState* arg0, int arg1);
extern "C" int func_020546a8(void* arg0);

// USA: func_ov005_02157ae8
extern "C" ARM int func_ov005_02157ae8(void* arg0, int arg1) {
    GameState* var0 = GameState::GetInstance();
    if (func_0202b7d8(func_0202ae18(var0))) {
        GameObject* var1 = var0->GetGameObjectByIndex(arg1);
        if (var1 == NULL)
            return 0;
        unsigned short var2 = var1->obj3D_.unknown_0_;
        int var3 = func_020100a8(var0);
        if (var2 & 0x200) {
            if (arg1 != var3)
                return 0;
        } else if (var2 & 0x1000) {
            if (var3 != func_020546a8(func_0200ff58(var0, arg1)))
                return 0;
        }
    }
    return 1;
}

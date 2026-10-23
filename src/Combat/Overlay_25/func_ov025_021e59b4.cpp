#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_ov000_021820bc(void* arg0, int arg1, int arg2, int arg3);
struct Struct_02037d88_9;

struct Struct_ov025_021e59b4 {
    char unknown_0_[8];
    unsigned char unknown_8_;
    unsigned char unknown_9_;
    unsigned short unknown_a_;
};

// USA: func_ov025_021e59b4
extern "C" ARM int func_ov025_021e59b4(struct Struct_ov025_021e59b4* arg0, int arg1, int arg2, void* arg3) {
    GameState* var0 = GameState::GetInstance();
    int var1[8];
    int var2 = func_ov000_021820bc(arg3, arg1, arg0->unknown_8_, (int)var1);
    for (int var3 = 0; var3 < var2; var3++) {
        GameObject* var4 = var0->GetGameObjectByIndex(var1[var3]);
        if (var4) {
            ((Object3D*)((struct Struct_02037d88_9*)var4))->TransitionInheritedAlpha(arg0->unknown_9_, arg0->unknown_a_);
        }
    }
    return 1;
}

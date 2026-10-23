#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_ov000_0215e9fc(int arg0, short* arg1, int arg2, int arg3);
extern "C" void func_ov017_021917f0(int arg0, int arg1);

struct Struct_ov000_021639b4 {
#if defined(jpn)
    char unknown_0_[0x218];
#else
    char unknown1_0_[0x29c];
#endif
    int unknown_29c_;
};

// USA: func_ov000_021639b4
extern "C" ARM void func_ov000_021639b4(struct Struct_ov000_021639b4* arg0) {
    GameState* var0 = GameState::GetInstance();
    short var1[4];
    int var2 = func_ov000_0215e9fc(arg0->unknown_29c_, var1, 4, 0);
    for (int var3 = 0; var3 < var2; var3++) {
        GameObject* var4 = var0->GetGameObjectByIndex(var1[var3] * 12 + 0x1c);
        if (var4 && var4->obj3D_.unknown_2_ >= 0) {
            ((Object3D*)((unsigned char*)var4))->MakeVisible();
        }
        var4 = var0->GetGameObjectByIndex(var1[var3] * 12 + 0x1d);
        if (var4 && var4->obj3D_.unknown_2_ >= 0) {
            ((Object3D*)((unsigned char*)var4))->MakeVisible();
        }
        func_ov017_021917f0(var1[var3], 1);
    }
}

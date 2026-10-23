#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_020e7bfc { int unknown_0_[7]; };
extern struct Struct_020e7bfc data_020e7bfc;

struct Struct_02053cf8 {
    char unknown_0_[4];
    short unknown_4_;
};

// USA: func_02053cf8
extern "C" ARM void func_02053cf8(struct Struct_02053cf8* arg0) {
    GameState* var0 = GameState::GetInstance();
    ((Object3D*)arg0)->UseRenderConfigDiffuseColor();
    int var1 = arg0->unknown_4_ * 0xc;
    struct Struct_020e7bfc var2 = data_020e7bfc;
    var2.unknown_0_[0] = var1 + 0x13;
    var2.unknown_0_[1] = var1 + 0x14;
    var2.unknown_0_[2] = var1 + 0x15;
    var2.unknown_0_[3] = var1 + 0x1b;
    var2.unknown_0_[4] = var1 + 0x1c;
    var2.unknown_0_[5] = var1 + 0x1d;

    int* var3 = var2.unknown_0_;
    while (*var3 >= 0) {
        GameObject* var4 = var0->GetGameObjectByIndex(*var3);
        if (var4 != 0) {
            ((Object3D*)var4)->UseRenderConfigDiffuseColor();
        }
        var3++;
    }
}

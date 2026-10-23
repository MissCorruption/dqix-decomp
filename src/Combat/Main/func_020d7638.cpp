#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_0205a148;
extern "C" void func_0205a148(struct Struct_0205a148* arg0);

struct Struct_020d7638 {
    unsigned char unknown_0_[0xd0];
    int unknown_d0_;
    unsigned char unknown_d4_[4];
};

struct Struct_020d7638_2 {
    unsigned char unknown_0_[0x41];
    unsigned char unknown_41_0_ : 5;
    unsigned char unknown_41_5_ : 1;
    unsigned char unknown_41_6_ : 2;
};

// USA: func_020d7638
extern "C" ARM void func_020d7638(struct Struct_020d7638* arg0) {
    GameState* var0 = GameState::GetInstance();
    int var1;
    for (var1 = 0; var1 < 0xc; var1++) {
        GameObject* var2;
        int var3;
        if (arg0[var1].unknown_d0_ < 0) continue;
        var3 = var1;
        if (var1 > 3) var3 = var1 + 0xbc;
        var2 = var0->GetGameObjectByIndex(var3);
        if (!var2) continue;
        if (!((Object3D*)((unsigned char*)var2))->IsVisible()) continue;
        if (!((struct Struct_020d7638_2*)var2)->unknown_41_5_) continue;
        func_0205a148((struct Struct_0205a148*)&arg0[var1]);
    }
}

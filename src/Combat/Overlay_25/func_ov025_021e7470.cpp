#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov001_0215cdf8;
extern "C" void func_0200fd48(GameState* arg0, int arg1);

struct Struct_ov025_021e7470 { char unknown_0_[0x10]; unsigned char* unknown_10_; };

// USA: func_ov025_021e7470
extern "C" ARM int func_ov025_021e7470(void* arg0, struct Struct_ov025_021e7470* arg1) {
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = var0->GetGameObjectByIndex(0xc8);
    if (var1) {
        ((Object3D*)((struct Struct_ov001_0215cdf8*)var1))->Detach();
        func_0200fd48(var0, 0xc8);
    }
    unsigned short var2 = *(unsigned short*)(arg1->unknown_10_ + 0x20);
    GameObject* var3 = var0->GetGameObjectByIndex(var2 * 0xc + 0x1c);
    if (var3) {
        ((Object3D*)((unsigned char*)var3))->MakeVisible();
    }
    return 1;
}

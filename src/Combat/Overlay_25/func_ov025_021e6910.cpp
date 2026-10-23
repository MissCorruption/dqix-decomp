#include <globaldefs.h>
#include "GameState/GameState.h"

extern int data_ov025_021ef82b;

struct Struct_ov025_021e6910 { char unknown_0_[0x10]; unsigned char* unknown_10_; };

// USA: func_ov025_021e6910
extern "C" ARM int func_ov025_021e6910(void* arg0, struct Struct_ov025_021e6910* arg1) {
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = var0->GetGameObjectByIndex(0xc8);
    if (!var1) return 1;
    ((Object3D*)((unsigned char*)var1))->MakeVisible();
    var1->obj3D_.MaybeSetRegularAnimation((char const*)&data_ov025_021ef82b, 1);
    unsigned short var2 = *(unsigned short*)(arg1->unknown_10_ + 0x20);
    GameObject* var3 = var0->GetGameObjectByIndex(var2 * 0xc + 0x1c);
    if (var3) {
        ((Object3D*)((unsigned char*)var3))->MakeHidden();
    }
    return 1;
}

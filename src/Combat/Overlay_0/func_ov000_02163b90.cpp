#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0x21c
#else
#define REGION_OFFSET_0 0x2a0
#endif

#include "GameState/GameState.h"

struct Struct_ov000_02163b90 { char unknown_0_[REGION_OFFSET_0]; unsigned char* unknown_2a0_; };

extern "C" int func_020a35e0(unsigned char* arg0, unsigned char arg1);
extern "C" void func_02049f28(unsigned char* arg0);
extern "C" void func_02049f3c(unsigned char* arg0);

// USA: func_ov000_02163b90
extern "C" ARM void func_ov000_02163b90(struct Struct_ov000_02163b90* arg0, int arg1) {
    GameState* var0 = GameState::GetInstance();
    int var1;
    for (var1 = 0; var1 <= 3; var1++) {
        GameObject* var2 = func_0200ff1c(var0, var1);
        if (!var2) continue;
        if (!func_020a35e0(arg0->unknown_2a0_, var1 & 0xff)) continue;
        if (arg1) {
            ((Object3D*)((unsigned char*)var2))->MakeVisible();
            func_02049f28((unsigned char*)var2);
        } else {
            ((Object3D*)((unsigned char*)var2))->MakeHidden();
            func_02049f3c((unsigned char*)var2);
        }
    }
}

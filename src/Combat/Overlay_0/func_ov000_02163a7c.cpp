#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_ov000_0215e9fc(int arg0, short* arg1, int arg2, int arg3);
extern "C" int func_ov000_0215ec1c(int arg0, short* arg1, int arg2, int arg3);
struct Struct_02049f50;
extern "C" void func_02049f50(struct Struct_02049f50* arg0, int arg1, int arg2);

struct Struct_ov000_02163a7c {
#if defined(jpn)
    char unknown_0_[0x218];
#else
    char unknown1_0_[0x29c];
#endif
    int unknown_29c_;
};

// USA: func_ov000_02163a7c
extern "C" ARM void func_ov000_02163a7c(struct Struct_ov000_02163a7c* arg0) {
    GameState* var0 = GameState::GetInstance();
    short var1[16];
    int var2 = 0;
    var2 = var2 + func_ov000_0215e9fc(arg0->unknown_29c_, var1, 0x10, var2);
    var2 = var2 + func_ov000_0215ec1c(arg0->unknown_29c_, var1 + var2, 0x10 - var2, 0);
    short* var3 = var1;
    for (int var4 = 0; var4 < var2; var3++, var4++) {
        GameObject* var5 = var0->GetCombatantByIndex(*var3);
        if (var5) {
            func_02049f50((struct Struct_02049f50*)var5, 0x1f, 0);
        }
    }
}

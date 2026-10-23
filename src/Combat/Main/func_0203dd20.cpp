#include <globaldefs.h>
#include "GameState/Field3b0.h"
#include "GameState/GameState.h"
#include "Combat/CombatantMotion.h"

struct Struct_0203dd20_2 {
    char unknown_0_[0xc];
    Struct_0203dd20* unknown_c_[0x20];
};

// USA: func_0203dd20
extern "C" ARM void func_0203dd20(struct Struct_0203dd20_2* arg0) {
    GameState* var0;
    void* var1;
    int var2;
    unsigned int var3;
    int var4;
    var0 = GameState::GetInstance();
    var1 = func_020100bc(var0);
    var2 = var0->GetEffectiveDeltaTime();
    var3 = var0->GetTickCount();
    for (var4 = 0; var4 < 0x20; var4++) {
        Struct_0203dd20* var5 = arg0->unknown_c_[var4];
        if (var5 != NULL && !(var5->unknown_0_ & 0x8000)) {
            func_02040c2c(var5, var1, var2, var3);
        }
    }
}

#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_020d738c {
    unsigned short unknown_0_0_ : 2;
    unsigned short unknown_0_2_ : 4;
    unsigned short unknown_0_6_ : 10;
};

extern "C" void func_020d6f9c(void* arg0, int arg1, int arg2);

// USA: func_020d738c
extern "C" ARM void func_020d738c(void* arg0) {
    GameState* var0 = GameState::GetInstance();
    int var1;
    for (var1 = 0; var1 < 0xc; var1++) {
        int var2 = var1;
        if (var1 > 3) {
            var2 = var1 + 0xbc;
        }
        GameObject* var3 = var0->GetCombatantByIndex(var2);
        struct ModifiableCombatStats* var4;
        unsigned short var5;
        int var6;
        unsigned short var7;
        if (var3 == NULL) {
            continue;
        }
        var4 = var3->currentStats_;
        var5 = *(unsigned int*)var4->unk1;
        var6 = ((struct Struct_020d738c*)(var4->unk1 + 0xE))->unknown_0_2_;
        var7 = var4->primaryStats.currHP;
        if (var5 & 1) {
            continue;
        }
        if (var7 == 0) {
            continue;
        }
        if (var5 & 2) {
            func_020d6f9c(arg0, var2, 0);
            continue;
        }
        if (var5 & 0x10) {
            func_020d6f9c(arg0, var2, 1);
            continue;
        }
        if (var5 & 8) {
            func_020d6f9c(arg0, var2, 3);
            continue;
        }
        if (var5 & 0x20) {
            func_020d6f9c(arg0, var2, 4);
            continue;
        }
        if ((var5 & 0x80000) && var6 == 6) {
            func_020d6f9c(arg0, var2, 2);
        }
    }
}

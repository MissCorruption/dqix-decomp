#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void func_020dc4d0(signed char*, signed char*);
extern "C" GameObject* func_0200ff58(GameState*, int);
extern "C" int func_020546a8(void*);
static inline int inline_020dc548(int arg0) { return arg0 >= 0 && arg0 <= 3; }

// USA: func_020dc548
extern "C" ARM void func_020dc548(int arg0, signed char* arg1, signed char* arg2) {
    if (!inline_020dc548(arg0)) { *arg2 = 0; return; }
    GameState* var0 = GameState::GetInstance();
    signed char var1[4], var2;
    func_020dc4d0(var1, &var2);
    signed char var3[4][4];
    int var4 = -1;
    signed char var5 = 0;
    signed char var6 = 0;
    signed char var7[4] = {};
    for (signed char var8 = 0; var8 < var2; ++var8) {
        int var9 = var1[var8];
        GameObject* var10 = func_0200ff58(var0, var9);
        if (var10) {
            if (var4 == func_020546a8(var10)) {
                var3[var6][var5] = var9;
                ++var7[var6];
                ++var5;
            }
        } else {
            var0->GetPartyMemberByIndex(var9);
            if (var4 >= 0) ++var6;
            var3[var6][0] = var9;
            ++var7[var6];
            var5 = 0;
            ++var5;
            var4 = var9;
        }
    }
    for (signed char var11 = 0; var11 < 4; ++var11) {
        bool var12 = false;
        for (signed char var13 = 0; var13 < var7[var11]; ++var13) {
            if (arg0 == var3[var11][var13]) var12 = true;
        }
        if (var12) {
            if (arg1) memcpy(arg1, var3[var11], var7[var11]);
            *arg2 = var7[var11];
            break;
        }
    }
}

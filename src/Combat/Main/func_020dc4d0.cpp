#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" unsigned char func_020114ec(char* arg0, void* arg1);

// USA: func_020dc4d0
extern "C" ARM void func_020dc4d0(signed char* arg0, signed char* arg1) {
    GameState* var0 = GameState::GetInstance();
    signed char var1[8];
    signed char var2 = func_020114ec((char*)var0, var1);
    signed char var3 = 0;
    for (signed char var4 = 0; var4 < var2; var4++) {
        if (var0->GetPartyMemberByIndex(var1[var4]) != NULL) {
            arg0[var3] = var1[var4];
            var3 = var3 + 1;
        }
    }
    *arg1 = var3;
}

#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" GameObject* func_0200ff58(GameState* arg0, int arg1);
extern "C" int func_020546a8(void* arg0);

// USA: func_0206867c
extern "C" ARM int func_0206867c(GameState* arg0) {
    signed char var0 = 0;
    int var1;
    for (var1 = 1; var1 < 4; var1++) {
        GameObject* var2 = func_0200ff58(arg0, var1);
        if (var2 != 0) {
            if (func_020546a8(var2) == 0) {
                var0 = var0 + 1;
            }
        }
    }
    return (signed char)(var0 + 1) != 1;
}

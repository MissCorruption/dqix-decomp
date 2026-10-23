#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" GameObject* func_0200ff58(GameState* arg0, int arg1);

// USA: func_02010038
extern "C" ARM int func_02010038(GameState* arg0, unsigned char* arg1) {
    int var0;
    int var1;
    if (arg1 == NULL) {
        return 0;
    }
    var0 = 0;
    arg1[0] = 0;
    var1 = 1;
    for (; var0 < 4; var0++) {
        if (func_0200ff58(arg0, var0) != NULL) {
            arg1[var1] = var0;
            var1++;
        }
    }
    return var1;
}

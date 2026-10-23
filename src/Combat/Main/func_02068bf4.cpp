#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_02067f9c(int arg0, void* arg1, int arg2);

// USA: func_02068bf4
extern "C" ARM int func_02068bf4(GameState* arg0, int arg1, int arg2) {
    GameObject* var0 = arg0->GetProtagonist();
    if (var0 != NULL) {
        return func_02067f9c(0, var0->baseStats_, arg2) == 0;
    }
    return 0;
}

#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_02067fec(int, void*, int);

// USA: func_02068a20
extern "C" ARM int func_02068a20(GameState* arg0, int arg1, int arg2) {
    GameObject* var0 = arg0->GetUnknownGameObject();
    if (var0 != 0) {
        return func_02067fec(0, var0->baseStats_, arg2) == 0;
    }
    return 0;
}

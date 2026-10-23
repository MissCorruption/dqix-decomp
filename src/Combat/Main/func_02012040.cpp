#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" ARM void func_02012040(void* arg0) {
    GameState* var0 = static_cast<GameState*>(arg0);
    var0->unk_397d[0x63d5 - 0x397d] = 1;
}

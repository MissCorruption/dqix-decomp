#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" ARM void func_02012040(void* owner) {
    GameState* state = static_cast<GameState*>(owner);
    state->unk_397d[0x63d5 - 0x397d] = 1;
}

#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: func_020100a0
extern "C" ARM void func_020100a0(GameState* battleStruct, int value) {
    battleStruct->protagonistObjectIndex_ = value;
}

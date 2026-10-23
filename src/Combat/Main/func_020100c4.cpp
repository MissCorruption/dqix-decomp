#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: func_020100c4
extern "C" ARM void func_020100c4(GameState* battleStruct, int value) {
    *(int*)((char*)battleStruct + 0x3b0) = value;
}

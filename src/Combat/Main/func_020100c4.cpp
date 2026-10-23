#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: func_020100c4
extern "C" ARM void func_020100c4(GameState* arg0, int arg1) {
    *(int*)((char*)arg0 + 0x3b0) = arg1;
}

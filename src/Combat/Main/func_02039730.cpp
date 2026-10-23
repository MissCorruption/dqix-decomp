#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: func_02039730
extern "C" ARM int func_02039730(void* arg0, int arg1) {
    char* var0 = (char*)func_02010828((GameState*)(GameState::GetInstance())) + arg1;
    return var0[0x2c8d];
}

#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: func_02039730
extern "C" ARM int func_02039730(void* unused, int index) {
    char* p = (char*)func_02010828((GameState*)(GameState::GetInstance())) + index;
    return p[0x2c8d];
}

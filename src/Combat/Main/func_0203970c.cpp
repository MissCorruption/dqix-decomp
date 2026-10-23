#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: func_0203970c
extern "C" ARM void func_0203970c(void* unused, int index, int value) {
    char* p = (char*)func_02010828((GameState*)(GameState::GetInstance())) + index;
    p[0x2c8d] = (char)value;
}

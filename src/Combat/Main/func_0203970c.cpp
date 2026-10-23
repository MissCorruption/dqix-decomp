#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: func_0203970c
extern "C" ARM void func_0203970c(void* arg0, int arg1, int arg2) {
    char* var0 = (char*)func_02010828((GameState*)(GameState::GetInstance())) + arg1;
    var0[0x2c8d] = (char)arg2;
}

#include <globaldefs.h>
#include "GameState/GameState.h"
extern "C" void* func_02010828(GameState*);

// USA: func_02068650
extern "C" ARM int func_02068650(GameState* battleStruct, void* arg2) {
    signed char v = *(signed char*)((char*)arg2 + 0x30);
    if (v < 0) {
        v = *(signed char*)((char*)func_02010828(battleStruct) + 0xf7c);
    }
    return v != 1;
}

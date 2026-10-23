#include <globaldefs.h>
#include "GameState/GameState.h"
extern "C" void* func_02010828(GameState*);

// USA: func_02068650
extern "C" ARM int func_02068650(GameState* arg0, void* arg1) {
    signed char var0 = *(signed char*)((char*)arg1 + 0x30);
    if (var0 < 0) {
        var0 = *(signed char*)((char*)func_02010828(arg0) + 0xf7c);
    }
    return var0 != 1;
}

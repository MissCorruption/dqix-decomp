#include <globaldefs.h>
#include "GameState/GameState.h"
extern "C" int func_02011538(GameState*);
extern "C" void* func_02010828(GameState*);

// USA: func_0206852c
extern "C" ARM int func_0206852c(void* arg0) {
    unsigned char* var0 = (unsigned char*)func_02010828((GameState*)(arg0));
    int var1 = func_02011538((GameState*)(arg0));
    return var0[0xf7c] != var1;
}

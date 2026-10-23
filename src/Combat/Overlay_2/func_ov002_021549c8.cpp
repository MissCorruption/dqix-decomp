#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: func_ov002_021549c8
extern "C" ARM int func_ov002_021549c8(void* arg0, int arg1, int arg2, unsigned char* arg3) {
    GameObject* var0 = func_0200ff1c(GameState::GetInstance(), arg1);
    if (!var0) {
        return 0;
    }
    int* var1 = *(int**)((char*)var0 + 0x130);
    int var2 = *var1;
    if ((var2 & arg2) == 0) goto notset;
    *var1 = (unsigned short)(var2 & ~arg2);
    *arg3 = 3;
    goto success;
notset:
    *arg3 = 0;
    return 0;
success:
    return 1;
}

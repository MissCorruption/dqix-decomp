#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void func_02067b28(void* arg0);

// USA: func_02067e58
extern "C" ARM void func_02067e58(void* arg0, int arg1) {
    GameState* var0;
    unsigned int var1;
    if (arg1 == 0) {
        return;
    }
    var0 = GameState::GetInstance();
    var1 = ((GameState*)(var0))->GetTickCount();
    if ((unsigned int)arg1 < var1) {
        arg1 = var1;
    }
#if defined(jpn)
    while (arg1 != 0 || ((unsigned char*)arg0)[0x17f2] != 0) {
#else
    while (arg1 > 0) {
#endif
        func_02067b28(arg0);
        if (arg1 != 0) {
            arg1--;
        }
    }
}

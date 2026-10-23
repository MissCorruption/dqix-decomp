#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_02053ccc(unsigned char*);
extern "C" int func_020649b0(void* arg0, int arg1, void* arg2);

// USA: func_02064a9c
extern "C" ARM int func_02064a9c(void* arg0, void* arg1) {
    void* var0 = func_02053ccc((unsigned char*)(GameState::GetInstance()->GetUnknownGameObject()));
    if (var0 != NULL) {
        if (*(int*)((char*)var0 + 4) == 3) {
            *(int*)((char*)arg1 + 4) = *(unsigned char*)((char*)var0 + 0x2c);
        }
    } else {
        signed char var1 = *(signed char*)((char*)arg0 + 0x491);
        if (var1 > -1) {
            *(int*)((char*)arg1 + 4) = var1;
        }
    }
    return func_020649b0(arg0, 0x13, arg1);
}

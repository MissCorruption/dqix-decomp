#include <globaldefs.h>

#if defined(jpn)
enum { Enum_020dd154_2384 = 0x8b8 };
#else
enum { Enum_020dd154_2384 = 0x950 };
#endif
extern "C" int func_020dd19c(unsigned int, int);
#include "GameState/GameState.h"

extern "C" void* func_02053c6c(unsigned char*);

// USA: func_020dd154
extern "C" ARM int func_020dd154(int arg0, int arg1) {
    GameObject* var0 = func_0200ff1c(GameState::GetInstance(), arg0);
    if (var0 == NULL) {
        return 0;
    }
    void* var1 = func_02053c6c((unsigned char*)var0);
    if (var1 == NULL) {
        return 0;
    }
    int var2 = *(int*)((char*)var1 + Enum_020dd154_2384);
    return func_020dd19c((unsigned int)(var2 & 0xff), (int)(arg1));
}

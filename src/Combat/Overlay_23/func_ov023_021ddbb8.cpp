#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_0200fb8c(int* arg0);
struct GameResources;
int SetSubBrightness(GameResources*, int, int);
int SetMainBrightness(GameResources*, int, int);

// USA: func_ov023_021ddbb8
extern "C" ARM int func_ov023_021ddbb8(void* arg0, int arg1, int arg2) {
    int var0 = func_0200fb8c((int*)GameState::GetInstance());
    signed char var1 = *(signed char*)((char*)arg0
#if defined(jpn)
        + 0x6f8
#else
        + 0x77c
#endif
);
    if (var1 == 1) {
        return SetSubBrightness((GameResources*)var0, arg1, arg2);
    }
    return SetMainBrightness((GameResources*)var0, arg1, arg2);
}

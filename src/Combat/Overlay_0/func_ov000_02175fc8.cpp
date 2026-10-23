#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0x8b4
#define REGION_OFFSET_1 0x483
#else
#define REGION_OFFSET_0 0x94c
#define REGION_OFFSET_1 0x443
#endif

#include "GameState/GameState.h"

extern "C" void* func_ov000_02161318(void* arg0, int arg1);
extern "C" GameObject* func_0200ff1c(GameState* arg0, int arg1);
extern "C" int func_02053c6c(unsigned char* arg0);

// USA: func_ov000_02175fc8
extern "C" ARM void func_ov000_02175fc8(void* arg0) {
    char* var0;
    int var1;
    for (var1 = 0; var1 < 4; var1++) {
        var0 = (char*)func_ov000_02161318(arg0, var1);
        if (var0 == NULL) continue;
        GameState* var2 = GameState::GetInstance();
        GameObject* var3 = func_0200ff1c(var2, *(int*)(var0 + 0x4c));
        if (var3 == NULL) continue;
        int* var4 = *(int**)((char*)var3 + 0x130);
        if (*var4 & 4) {
            *(int*)(var0 + 0x28) |= 4;
        }
        int var5 = func_02053c6c((unsigned char*)var3);
        if (var5 != 0) {
            *(unsigned char*)(var0 + REGION_OFFSET_1) = (unsigned char)*(int*)(var5 + REGION_OFFSET_0);
        }
    }
}

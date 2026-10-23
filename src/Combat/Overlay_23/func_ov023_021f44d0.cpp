#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
#define RATIO_A 0x5ab4
#define RATIO_B 0x5abc
#define RATIO_C 0x5abe
#else
#define RATIO_A 0x58c4
#define RATIO_B 0x58cc
#define RATIO_C 0x58ce
#endif

// USA: func_ov023_021f44d0
extern "C" ARM int func_ov023_021f44d0(void* arg0) {
    GameState::GetInstance();
    unsigned int var0 = *(unsigned int*)((char*)arg0 + RATIO_A);
    unsigned short var1 = *(unsigned short*)((char*)arg0 + RATIO_B);
    unsigned short var2 = *(unsigned short*)((char*)arg0 + RATIO_C);
    float var3 = (float)var0;
    float var4 = (float)var1;
    float var5 = (float)var2;
    float var6 = var3 * (var5 / var4);
    if (0.0f < var6) {
        if (var6 < 1.0f) {
            var6 = 1.0f;
        }
    }
    return (int)var6;
}

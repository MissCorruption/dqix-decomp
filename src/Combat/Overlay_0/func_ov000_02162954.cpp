#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0x7c8
#else
#define REGION_OFFSET_0 0x5d8
#endif

#include "GameState/GameState.h"

extern "C" void* func_02057924(void* arg0);
extern "C" int func_ov000_02162908(void* arg0, int arg1, int* arg2);
extern "C" int func_02058680(char* arg0, int arg1, void** arg2, int arg3);

// USA: func_ov000_02162954
extern "C" ARM int func_ov000_02162954(void* arg0) {
    GameState* var0 = GameState::GetInstance();
    void* var1 = func_02057924(var0);
    int var2 = *(int*)((char*)arg0 + 0x5000 + REGION_OFFSET_0);
    int var3[12];
    int var4 = func_ov000_02162908(arg0, var2, var3);
    int var5 = 0;
    while (var5 < var4) {
        GameObject* var6 = var0->GetCombatantByIndex(var3[var5]);
        if (var6 != NULL) {
            if (*((unsigned char*)var6 + 0xbe) == 4) {
                return 1;
            }
        }
        var5++;
    }
    return func_02058680((char*)var1, 2, NULL, 0) > 0;
}

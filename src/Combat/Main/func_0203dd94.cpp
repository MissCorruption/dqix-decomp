#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void func_0203f2b0(void* arg0);

// USA: func_0203dd94
extern "C" ARM void func_0203dd94(char* arg0) {
    int var0;
    if (*(int*)(arg0 + 0x98) & 1) return;
    GameState::GetInstance();
    for (var0 = 0; var0 < 0x20; var0++) {
        char* var1 = *(char**)(arg0 + var0 * 4 + 0xc);
        if (var1 != NULL && *(void**)(var1 + 0x14) != NULL) {
            func_0203f2b0(*(void**)(var1 + 0x14));
        }
    }
}

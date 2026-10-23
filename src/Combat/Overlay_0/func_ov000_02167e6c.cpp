#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov000_02167e6c_672 = 0x21c, Enum_ov000_02167e6c_2385 = 0xb41 };
#else
enum { Enum_ov000_02167e6c_672 = 0x2a0, Enum_ov000_02167e6c_2385 = 0x951 };
#endif
#include "GameState/GameState.h"

extern "C" int func_020a35e0(unsigned char* arg0, unsigned char arg1);
extern "C" void func_02049d6c(GameObject* arg0);
extern "C" void func_02049ae4(unsigned char* arg0);

// USA: func_ov000_02167e6c
extern "C" ARM void func_ov000_02167e6c(unsigned char* arg0) {
    GameState* var0 = GameState::GetInstance();
    for (int var1 = 0; var1 < 4; var1++) {
        if (func_020a35e0(*(unsigned char**)(arg0 + Enum_ov000_02167e6c_672), var1)) {
            GameObject* var2 = var0->GetCombatantByIndex(var1);
            if (var2) {
                func_02049d6c(var2);
                func_02049ae4((unsigned char*)var2);
            }
        }
    }
    for (int var3 = 0xc0; var3 < 0xc8; var3++) {
        GameObject* var4 = var0->GetCombatantByIndex(var3);
        if (var4) {
            func_02049d6c(var4);
            func_02049ae4((unsigned char*)var4);
        }
    }
    unsigned char var5 = *(unsigned char*)(arg0 + 0x5000 + Enum_ov000_02167e6c_2385);
    var5 = (var5 & ~3) | 1;
    *(unsigned char*)(arg0 + 0x5000 + Enum_ov000_02167e6c_2385) = var5;
}

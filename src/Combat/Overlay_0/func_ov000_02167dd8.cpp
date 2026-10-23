#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov000_02167dd8_672 = 0x21c, Enum_ov000_02167dd8_2385 = 0xb41 };
#else
enum { Enum_ov000_02167dd8_672 = 0x2a0, Enum_ov000_02167dd8_2385 = 0x951 };
#endif
#include "GameState/GameState.h"

extern "C" int func_020a35e0(unsigned char* arg0, unsigned char arg1);
extern "C" void func_02049e00(void);

// USA: func_ov000_02167dd8
extern "C" ARM void func_ov000_02167dd8(unsigned char* arg0) {
    GameState* var0 = GameState::GetInstance();
    for (int var1 = 0; var1 < 4; var1++) {
        if (func_020a35e0(*(unsigned char**)(arg0 + Enum_ov000_02167dd8_672), var1)) {
            if (var0->GetCombatantByIndex(var1)) func_02049e00();
        }
    }
    for (int var2 = 0xc0; var2 < 0xc8; var2++) {
        if (var0->GetCombatantByIndex(var2)) func_02049e00();
    }
    unsigned char var3 = *(unsigned char*)(arg0 + 0x5000 + Enum_ov000_02167dd8_2385);
    var3 = (var3 & ~3) | 2;
    *(unsigned char*)(arg0 + 0x5000 + Enum_ov000_02167dd8_2385) = var3;
}

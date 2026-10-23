#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov000_02167f10_672 = 0x21c, Enum_ov000_02167f10_22865 = 0x5b41 };
#else
enum { Enum_ov000_02167f10_672 = 0x2a0, Enum_ov000_02167f10_22865 = 0x5951 };
#endif
#include "GameState/GameState.h"

struct Struct_02049e88;
extern "C" void func_02049e88(struct Struct_02049e88* arg0);
extern "C" void func_02049ae4(unsigned char* arg0);
extern "C" int func_020a35e0(unsigned char* arg0, unsigned char arg1);

// USA: func_ov000_02167f10
extern "C" ARM void func_ov000_02167f10(unsigned char* arg0) {
    GameState* var0 = GameState::GetInstance();
    GameObject* var1;
    int var2;
    for (var2 = 0; var2 < 4; var2++) {
        if (func_020a35e0(*(unsigned char**)(arg0 + Enum_ov000_02167f10_672), var2 & 0xff)) {
            var1 = var0->GetCombatantByIndex(var2);
            if (var1) {
                func_02049e88((struct Struct_02049e88*)var1);
                func_02049ae4((unsigned char*)var1);
            }
        }
    }
    for (var2 = 0xc0; var2 < 0xc8; var2++) {
        var1 = var0->GetCombatantByIndex(var2);
        if (var1) {
            func_02049e88((struct Struct_02049e88*)var1);
            func_02049ae4((unsigned char*)var1);
        }
    }
    arg0[Enum_ov000_02167f10_22865] &= ~0x3;
}

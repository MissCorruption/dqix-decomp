#include <globaldefs.h>
#include "GameState/GameState.h"
#include "std_library_functions.h"

extern "C" void* func_ov017_021b8478(void* arg0);
extern "C" void* func_ov017_021b8468(void* arg0);
extern "C" void* func_ov017_021b8470(void* arg0);
extern "C" int func_020100a8(GameState* arg0);

// USA: func_ov017_021c70e0
extern "C" ARM void func_ov017_021c70e0(int arg0, unsigned char* arg1, GameState* arg2, unsigned char* arg3) {
#if defined(jpn)
 enum {Enum_ov017_021c70e0_1816=0x508};
#else
 enum {Enum_ov017_021c70e0_1816=0x718};
#endif
    unsigned char* var0 = *(unsigned char**)(arg3 + 0x3000 + Enum_ov017_021c70e0_1816);
    unsigned char* var1 = (unsigned char*)func_ov017_021b8478(var0);
    if (!var1) return;
    if (!func_ov017_021b8468(var0)) return;
    if (!func_ov017_021b8470(var0)) return;

    int var2 = func_020100a8(arg2);
    if (*(signed char*)(var1 + 0x2a) == var2) return;

    if (*(unsigned short*)(var1 + 0x8) != *(unsigned short*)(arg1 + 0x4)) return;

    GameObject* var3 = arg2->GetCombatantByIndex(*(unsigned short*)(arg1 + 0x6));
    if (!var3) return;

    memcpy((char*)*(int*)((char*)var3 + 0x138) + 0x58, arg1 + 0x8, 4);
    *(short*)((char*)*(int*)((char*)var3 + 0x138) + 0x28) = *(short*)(arg1 + 0xc);
    *(short*)((char*)*(int*)((char*)var3 + 0x138) + 0x2a) = *(short*)(arg1 + 0xe);
    *(short*)((char*)*(int*)((char*)var3 + 0x138) + 0x2c) = *(short*)(arg1 + 0x10);
    *(short*)((char*)*(int*)((char*)var3 + 0x138) + 0x2e) = *(short*)(arg1 + 0x12);
}

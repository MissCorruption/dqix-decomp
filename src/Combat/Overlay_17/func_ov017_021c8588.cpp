#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_ov017_021b8468(void* arg0);
extern "C" void* func_ov017_021b8470(void* arg0);
extern "C" void func_ov000_02160fa8(void* arg0, int arg1);
extern "C" GameObject* func_0200ff1c(GameState* arg0, int arg1);
extern "C" int func_02053c6c(unsigned char* arg0);

struct Struct_ov017_021c8588 {
    unsigned int unknown_0_0_ : 30;
    unsigned int unknown_3_6_ : 1;
    unsigned int unknown_3_7_ : 1;
};

// USA: func_ov017_021c8588
extern "C" ARM void func_ov017_021c8588(int arg0, signed char* arg1, GameState* arg2, char* arg3) {
#if defined(jpn)
 enum {Enum_ov017_021c8588_14104=0x3508, Enum_ov017_021c8588_2380=0x8b4};
#else
 enum {Enum_ov017_021c8588_14104=0x3718, Enum_ov017_021c8588_2380=0x94c};
#endif
    void* var0;
    signed char* var1;
    int var2;
    void* var3 = *(void**)(arg3 + Enum_ov017_021c8588_14104);
    var0 = func_ov017_021b8468(var3);
    if (var0 == 0) return;
    if (func_ov017_021b8470(var3) == 0) return;

    var1 = arg1 + 4;
    for (var2 = 0; var2 < 4; var2++) {
        GameObject* var4 = func_0200ff1c(arg2, var2);
        if (var4 == 0) continue;
        int var5 = func_02053c6c((unsigned char*)var4);
        if (var5 == 0) continue;
        signed char var6 = var1[var2];
        signed char var7 = *(var1 + var2 + 4);
        if (var6 >= 0) *(int*)((char*)var5 + Enum_ov017_021c8588_2380) = var6;
        if (var7 < 0) continue;
        ((Struct_ov017_021c8588*)((char*)var5 + 0x78))->unknown_3_6_ = (unsigned short)var7;
    }

    if (*((unsigned char*)var3 + 3) != 0 && var0 != 0) {
        func_ov000_02160fa8(var0, 0x4000000 << arg0);
    }
}

#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_ov011_021849c8(void*);
extern "C" void* func_ov023_021f6880(void*, int);
extern "C" int func_ov024_021f6f10(void* arg0);
struct Struct_02000c9c_8;
extern "C" unsigned char func_0200fb08(struct Struct_02000c9c_8* arg0);
struct Struct_ov004_0215de9c;
extern "C" void func_ov023_021fb25c(Struct_ov004_0215de9c* arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3, int arg4);

// USA: func_ov004_0216a810
extern "C" ARM int func_ov004_0216a810(void* arg0) {
    GameState* var0 = GameState::GetInstance();
    void* var1 = func_ov011_021849c8(arg0);
    struct Struct_ov004_0215de9c* var2 = (struct Struct_ov004_0215de9c*)func_ov023_021f6880(var1, 0x1e);
    if (!var2) return 0;
    if (func_ov024_021f6f10(var2) != 1) return 0;
    switch (func_0200fb08((struct Struct_02000c9c_8*)var0)) {
        case 1: func_ov023_021fb25c(var2, 0, 0, 0x58, 0x10); break;
        case 2: func_ov023_021fb25c(var2, 0, 0, 0x50, 0x10); break;
        case 3: func_ov023_021fb25c(var2, 0, 0, 0x50, 0x10); break;
        case 4: func_ov023_021fb25c(var2, 0, 0, 0x60, 0x10); break;
        case 5: func_ov023_021fb25c(var2, 0, 0, 0x60, 0x10); break;
    }
    struct Struct_ov004_0215de9c* var3 = (struct Struct_ov004_0215de9c*)func_ov023_021f6880(var1, 0x1f);
    if (!var3) return 0;
    if (func_ov024_021f6f10(var3) != 1) return 0;
    switch (func_0200fb08((struct Struct_02000c9c_8*)var0)) {
        case 1: func_ov023_021fb25c(var3, 8, 0, 0x58, 0x10); break;
        case 2: func_ov023_021fb25c(var3, 0x10, 0, 0x50, 0x10); break;
        case 3: func_ov023_021fb25c(var3, 0x10, 0, 0x50, 0x10); break;
        case 4: func_ov023_021fb25c(var3, 0, 0, 0x60, 0x10); break;
        case 5: func_ov023_021fb25c(var3, 0, 0, 0x60, 0x10); break;
    }
    return 0;
}

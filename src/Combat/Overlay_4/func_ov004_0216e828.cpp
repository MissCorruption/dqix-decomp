#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_020421a0(void);
extern "C" void* func_ov011_021849c8(void*);
extern "C" void* func_ov023_021f6880(void*, int);
extern "C" unsigned short func_ov023_021f6f10(void*);
extern "C" void* func_ov023_021fad18(void* arg0);
extern "C" void func_02012028(void* arg0, unsigned char arg1);

// USA: func_ov004_0216e828
extern "C" ARM int func_ov004_0216e828(void* arg0) {
#if defined(jpn)
    enum { Enum_ov004_0216e828_728 = 0x228, Enum_ov004_0216e828_736 = 0x230 };
#else
    enum { Enum_ov004_0216e828_728 = 0x2d8, Enum_ov004_0216e828_736 = 0x2e0 };
#endif
    void* var0 = func_ov011_021849c8(arg0);
    int var1 = func_020421a0();
    void* var2 = func_ov023_021f6880(var0, 0xa);
    if (!var2) return 0;
    if (func_ov023_021f6f10(var2) != 0xa) return 0;
    void* var3 = func_ov023_021fad18(var2);
    if (var3) {
        *(void**)((char*)var1 + Enum_ov004_0216e828_728) = var3;
        int var4 = *(int*)((char*)var3 + 0x3c);
        if (var4) {
            *(int*)((char*)var1 + Enum_ov004_0216e828_736) = var4;
        }
    }
    func_02012028(GameState::GetInstance(), 0);
    return 0;
}

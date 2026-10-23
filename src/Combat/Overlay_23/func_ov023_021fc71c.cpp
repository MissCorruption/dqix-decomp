#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" GameObject* func_0200ff1c(GameState* arg0, int arg1);
extern "C" int func_02053c6c(unsigned char* arg0);
extern "C" void func_ov023_021e60e0(void* arg0, unsigned int arg1);
extern "C" void func_ov023_021e616c(char* arg0);
extern "C" int func_ov023_021e5974(int arg0, int arg1, int arg2, int arg3, int arg4);

struct Struct_ov023_021fc71c {
    unsigned char unknown_0_0_ : 1;
    unsigned char unknown_0_1_ : 7;
};

// USA: func_ov023_021fc71c
extern "C" ARM void func_ov023_021fc71c(void* arg0, int arg1, int arg2) {
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = func_0200ff1c(var0, arg1);
    unsigned char var2 = ((struct Struct_ov023_021fc71c*)((char*)arg0 + 0x1864))->unknown_0_0_;
    int var3 = (var2 + 1) % 2;
    int var4 = var3 * 0xc20;
    char* var5 = (char*)arg0 + 0x20;
    if (arg2 != 0) {
        func_ov023_021e60e0(var5 + var4, 0x1eb);
    }
    func_ov023_021e616c(var5 + var4);
    int var6 = func_02053c6c((unsigned char*)var1);
    func_ov023_021e5974((int)(var5 + var4), var6, arg1, 1, 0);
    *(unsigned char*)((int)arg0 + 0x1864) |= 8;
}

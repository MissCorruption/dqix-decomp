#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov003_02177300_4124 = 0xf98 };
enum { Enum_ov003_02177300_4144 = 0xfac };
enum { Enum_ov003_02177300_2204 = 0x818 };
#else
enum { Enum_ov003_02177300_4124 = 0x101c };
enum { Enum_ov003_02177300_4144 = 0x1030 };
enum { Enum_ov003_02177300_2204 = 0x89c };
#endif

#include "GameState/GameState.h"

struct Struct_0207fdcc_2;
extern "C" void func_02080c20(struct Struct_0207fdcc_2* arg0, int arg1);
extern "C" void func_02080c68(void* arg0, int arg1, int arg2);
struct Struct_02080f8c;
extern "C" void func_02080f8c(struct Struct_02080f8c* arg0, int arg1, int arg2);
struct Struct_02080cc0;
extern "C" void func_02080cc0(struct Struct_02080cc0* arg0, int arg1, int arg2);
extern "C" int func_020dcc98(int arg0);
extern "C" void func_020813ec(void* arg0, int arg1);

// USA: func_ov003_02177300
#pragma opt_common_subs off
extern "C" ARM void func_ov003_02177300(char* arg0) {
    GameState* var0 = GameState::GetInstance();
    int var1 = *(int*)(arg0 + Enum_ov003_02177300_4144);
    struct Struct_0207fdcc_2* var2 = *(struct Struct_0207fdcc_2**)(arg0 + Enum_ov003_02177300_2204);
    int var3 = -1, var4 = -1;

    switch (var1) {
    case 2:
        var3 = 0xb;
        var4 = 0x5d;
        break;
    case 3:
        var3 = 0xc;
        var4 = 0x60;
        break;
    case 4:
        var3 = 0xd;
        var4 = 0x64;
        break;
    }
    if (var3 < 0) {
        return;
    }

    func_02080c20(var2, var3);
    func_02080c68(var2, var3, 0);

    int var5;
    unsigned char var6;
    for (var6 = 0; var6 < *(int*)(arg0 + Enum_ov003_02177300_4144); var6++) {
        var5 = 0;
        GameObject* var7 = func_0200ff1c(var0, *(int*)(arg0 + Enum_ov003_02177300_4124 + var6 * 4));
        if (var7 != 0) {
            var5 = *(int*)((char*)var7 + 0x134);
        }
        func_02080f8c((struct Struct_02080f8c*)var2, var4, var5);

        int var8 = func_020dcc98((signed char)*(int*)(arg0 + Enum_ov003_02177300_4124 + var6 * 4));
        func_02080cc0((struct Struct_02080cc0*)var2, var4, var8);

        var4 = (short)(var4 + 1);
    }

    func_020813ec(var2, var3);
}

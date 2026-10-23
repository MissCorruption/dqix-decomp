#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
#define RG(u, j) (j)
extern "C" void func_02042638(char *arg0, int arg1, int arg2);
#define func_02041fac func_02042638
#else
#define RG(u, j) (u)
#endif

struct Struct_0201099c_3;

struct GameState;
extern "C" unsigned char func_02011804(GameState* arg0);
extern "C" void func_02041c08(char *arg0, int arg1, int arg2, int arg3, int arg4, int arg5);
extern "C" void func_02041ea4(char *arg0, int arg1);
extern "C" const char *func_020e0434(Struct_0201099c_3 *arg0, int arg1);
extern "C" void func_02041fac(char *arg0, int arg1, int arg2);
extern "C" void func_02041b70(char *arg0, int arg1, const char *arg2);
extern "C" void func_02042058(char *arg0, const char *arg1);

// USA: func_ov002_0215c52c
extern "C" ARM void func_ov002_0215c52c(unsigned char *arg0, char *arg1, int arg2) {
    if (arg1 == 0) return;
    short var0 = 0x3ea;
    int var1     = 3;
    short var2   = *(short *) (arg0 + RG(0x1be4, 0x1aac));
    if (func_02011804(GameState::GetInstance()) == 0) var1 = 2;
    if (arg2) func_02041c08(arg1, var2, 8, 5, 5, 5);
    func_02041ea4(arg1, var2);
    func_02041fac(
        arg1, (int) func_020e0434((Struct_0201099c_3 *) (arg0 + RG(0x20, 0x8)), 1000), 0x18);
    for (int var3 = 0; var3 < var1; var3++) {
        func_02041b70(arg1, var3, func_020e0434((Struct_0201099c_3 *) (arg0 + RG(0x20, 0x8)), var0++));
        if (var3 != var1 - 1) func_02042058(arg1, *(const char **) (arg0 + RG(0x1bdc, 0x1aa4)));
    }
}

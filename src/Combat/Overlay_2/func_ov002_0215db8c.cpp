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

extern "C" void func_ov002_02157424(void *arg0, int *arg1);
extern "C" int func_ov002_02159774(void *arg0, int arg1, int arg2, int arg3, int arg4);
extern "C" void func_02041c08(char *arg0, int arg1, int arg2, int arg3, int arg4, int arg5);
extern "C" void func_02041ea4(char *arg0, int arg1);
extern "C" const char *func_020e0434(Struct_0201099c_3 *arg0, int arg1);
extern "C" void func_02041fac(char *arg0, int arg1, int arg2);
extern "C" void func_02041e70(char *arg0, int arg1);
extern "C" void func_02041b70(char *arg0, int arg1, const char *arg2);
extern "C" void func_02042058(char *arg0, const char *arg1);

// USA: func_ov002_0215db8c
extern "C" ARM void func_ov002_0215db8c(char *arg0, char *arg1, int arg2) {
    int var0[7];
    if (arg1 == 0) return;
    void *var1  = GameState::GetInstance();
    short var2   = *(short *) (arg0 + RG(0x1bf0, 0x1ab8));
    short var3 = 0x76d;
    func_ov002_02157424(arg0, var0);
    if (arg2) func_02041c08(arg1, var2, 8, 5, 5, 5);
    func_02041ea4(arg1, var2);
    func_02041fac(
        arg1, (int) func_020e0434((Struct_0201099c_3 *) (arg0 + RG(0x20, 0x8)), 0x76c), 0x10);
    int var4;
    int var5 = *(int *) (arg0 + RG(0x1c38, 0x1afc)) + 1;
    int var6;
    for (var6 = 0; var6 < var5; var6++) {
        var4   = var0[var6];
        int var7 = (var4 >= 0 && var4 <= 3);
        if (var7) {
            unsigned char *var8 = (unsigned char *)((GameState*)var1)->GetPartyMemberByIndex(var4);
            if (var8 != 0) {
                func_02041e70(arg1, func_ov002_02159774(arg0, var4, 0, 1, 1));
                func_02041b70(arg1, var6, *(const char **) (var8 + 0x134));
                func_02041e70(arg1, 0xf);
            }
        } else {
            func_02041b70(arg1, var6, func_020e0434((Struct_0201099c_3 *) (arg0 + RG(0x20, 0x8)), var3++));
        }
        if (var6 != var5 - 1) func_02042058(arg1, *(const char **) (arg0 + RG(0x1bdc, 0x1aa4)));
    }
}

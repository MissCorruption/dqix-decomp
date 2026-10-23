#include "GameState/GameState.h"
#include <globaldefs.h>

#if defined(jpn)
#define RG(u, j) (j)
extern "C" int func_02042638(char *arg0, int arg1, int arg2);
#define func_02041fac func_02042638
#else
#define RG(u, j) (u)
#endif

struct Struct_0201099c_3;
extern "C" int func_020e0434(struct Struct_0201099c_3 *arg0, int arg1);
extern "C" int func_02041c08(char *arg0, int arg1, int arg2, int arg3, int arg4, int arg5);
extern "C" int func_02041ea4(char *arg0, int arg1);
extern "C" int func_02041fac(char *arg0, int arg1, int arg2);
extern "C" int func_02041e70(char *arg0, int arg1);
extern "C" int func_02041b70(char *arg0, int arg1, const char *arg2);
extern "C" int func_02042058(char *arg0, const char *arg1);
extern "C" int func_ov002_02159774(void *arg0, int arg1, int arg2, int arg3, int arg4);

// USA: func_ov002_0215d0e8
extern "C" ARM void func_ov002_0215d0e8(unsigned char *arg0, char *arg1, int arg2) {
    if (arg1 == NULL) return;

    int var0 = *(short *) (arg0 + RG(0x1bec, 0x1ab4));
    GameState::GetInstance();

    if (arg2) {
        func_02041c08(arg1, var0, 8, 5, 5, 5);
    }
    func_02041ea4(arg1, var0);

    int var1 = func_020e0434((struct Struct_0201099c_3 *) (arg0 + RG(0x20, 0x8)), 0x514);
    func_02041fac(arg1, var1, 0x10);

    int var2          = *(arg0 + RG(0x1c6d, 0x1b31));
    unsigned char *var3 = arg0 + RG(0x1c68, 0x1b2c);
    if (*(arg0 + RG(0x1c84, 0x1b48)) == 7) {
        var2 = *(arg0 + RG(0x1c73, 0x1b37));
        var3   = arg0 + RG(0x1c6e, 0x1b32);
    }

    for (int var4 = 0; var4 < var2; var4++) {
        unsigned char var5 = var3[var4];
        int var6          = func_ov002_02159774(arg0, var5, 1, 1, 1);
        func_02041e70(arg1, var6);
        func_02041b70(arg1, var4, (const char *) (arg0 + RG(0x1ab0, 0x1a08) + var5 * RG(0x3c, 0x18)));
        func_02041e70(arg1, 0xf);
        if (var4 != var2 - 1) {
            func_02042058(arg1, *(const char **) (arg0 + RG(0x1000 + 0xbdc, 0x1000 + 0xaa4)));
        }
    }
}

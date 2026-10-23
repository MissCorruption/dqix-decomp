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

// USA: func_ov002_0215e9c4
extern "C" ARM void func_ov002_0215e9c4(unsigned char *arg0, char *arg1, int arg2) {
    if (arg1 == NULL) return;

    GameState *var0 = GameState::GetInstance();
    int var1    = *(short *) (arg0 + RG(0x1bf8, 0x1ac0));

    if (arg2) {
        func_02041c08(arg1, var1, 8, 5, 5, 5);
    }
    func_02041ea4(arg1, var1);

    int var2 = func_020e0434((struct Struct_0201099c_3 *) (arg0 + RG(0x20, 0x8)), 3);
    func_02041fac(arg1, var2, 0x16);

    for (int var3 = 0; var3 < *(signed char *) (arg0 + RG(0x1c73, 0x1b37)); var3++) {
        GameObject *var4 = var0->GetPartyMemberByIndex(((signed char *) (arg0 + RG(0x1c6e, 0x1b32)))[var3]);
        if (var4 != NULL) {
            int var5 = func_ov002_02159774(arg0, ((signed char *) (arg0 + RG(0x1c6e, 0x1b32)))[var3], 0, 1, 1);
            func_02041e70(arg1, var5);
            func_02041b70(arg1, var3, *(const char **) ((char *) var4 + 0x134));
            func_02041e70(arg1, 0xf);
            if (var3 != *(signed char *) (arg0 + RG(0x1c73, 0x1b37)) - 1) {
                func_02042058(arg1, *(const char **) (arg0 + RG(0x1000 + 0xbdc, 0x1000 + 0xaa4)));
            }
        }
    }
}

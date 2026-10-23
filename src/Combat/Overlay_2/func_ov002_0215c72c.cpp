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

extern "C" void *func_0202ae18(void);
extern "C" int func_ov002_02159774(void *arg0, int arg1, int arg2, int arg3, int arg4);
extern "C" void func_02041c08(char *arg0, int arg1, int arg2, int arg3, int arg4, int arg5);
extern "C" void func_02041ea4(char *arg0, int arg1);
extern "C" const char *func_020e0434(Struct_0201099c_3 *arg0, int arg1);
extern "C" void func_02041fac(char *arg0, int arg1, int arg2);
extern "C" void func_02041e70(char *arg0, int arg1);
extern "C" void func_02041b70(char *arg0, int arg1, const char *arg2);
extern "C" void func_02042058(char *arg0, const char *arg1);

// USA: func_ov002_0215c72c
extern "C" ARM void func_ov002_0215c72c(char *arg0, char *arg1, int arg2) {
    if (arg1 == 0) return;
    func_0202ae18();
    void *var0 = GameState::GetInstance();
    short var1  = *(short *) (arg0 + RG(0x1be6, 0x1aae));
    int var2    = 0;
    if (arg2) func_02041c08(arg1, var1, 8, 5, 5, 5);
    func_02041ea4(arg1, var1);
    func_02041fac(
        arg1, (int) func_020e0434((Struct_0201099c_3 *) (arg0 + RG(0x20, 0x8)), 0x44c), 0x18);
    for (int var3 = 0; var3 < *(signed char *) (arg0 + RG(0x1c73, 0x1b37)); var3++) {
        unsigned char *var4 = (unsigned char *)((GameState*)var0)->GetPartyMemberByIndex(((signed char *) (arg0 + RG(0x1c6e, 0x1b32)))[var3]);
        if (var4 != 0) {
            func_02041e70(arg1, func_ov002_02159774(arg0, ((signed char *) (arg0 + RG(0x1c6e, 0x1b32)))[var3], 0, 1, 1));
            func_02041b70(arg1, var2, *(const char **) (var4 + 0x134));
            func_02041e70(arg1, 0xf);
            func_02042058(arg1, *(const char **) (arg0 + RG(0x1bdc, 0x1aa4)));
            var2++;
        }
    }
    func_02041b70(arg1, var2, func_020e0434((Struct_0201099c_3 *) (arg0 + RG(0x20, 0x8)), 0x44d));
    if (*(unsigned char *) (arg0 + RG(0x2485, 0x22b5)) == 0) {
        func_02042058(arg1, *(const char **) (arg0 + RG(0x1bdc, 0x1aa4)));
        func_02041b70(arg1, var2 + 1, func_020e0434((Struct_0201099c_3 *) (arg0 + RG(0x20, 0x8)), 0x44e));
    }
}

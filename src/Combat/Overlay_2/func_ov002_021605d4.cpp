#include <globaldefs.h>
#include "GameState/GameState.h"

class GameState;
struct Struct_0201099c_3;
struct Struct_ov002_0215b8c8 {
    char *unknown_0_;
};
struct Struct_020465c0;

extern "C" void func_ov002_02157480(void *arg0, int *arg1);
extern "C" unsigned char *func_02053c6c(unsigned char *arg0);
extern "C" const char *func_020e0434(Struct_0201099c_3 *arg0, int arg1);
extern "C" void __clear(void *arg0, unsigned long arg1);
extern "C" void func_ov002_0215b8c8(Struct_ov002_0215b8c8 *arg0, const char *arg1, int arg2);
extern "C" void func_02041fac(char *arg0, int arg1, int arg2);
extern "C" void *func_020421a0();
extern "C" void func_02046380(void *arg0);
extern "C" void func_020465c0(Struct_020465c0 *arg0, int arg1, int arg2);
extern "C" void func_020465f0(unsigned char *arg0, int arg1, unsigned char arg2);
extern "C" void func_020465d8(unsigned char *arg0, int arg1, unsigned char arg2);
extern "C" void func_02041b00(char *arg0, int arg1);
extern "C" void func_02046608(void *arg0, int arg1, const char *arg2, char *arg3, int arg4, int arg5, int arg6);
extern "C" void func_02042058(char *arg0, const char *arg1);

#if defined(jpn)
#define func_02041fac func_02042638
extern "C" int func_02042638(char *arg0, int arg1, int arg2);
extern "C" void func_020474a8(void *arg0, int arg1, const char *arg2, char *arg3);
extern char data_ov002_0216da30[];
extern char data_ov002_0216da4a[];
#endif

// USA: func_ov002_021605d4
extern "C" ARM void func_ov002_021605d4(char *arg0, char *arg1) {
#if defined(jpn)
    int var0[4];
    char var1[0x40];
    if (arg1 == 0) return;
    GameState *var2 = GameState::GetInstance();
    short var3     = *(short *) (arg0 + 0x1ad0);
    func_ov002_02157480(arg0, var0);
    int var4 = var0[var3];
    int var5   = (var4 >= 0 && var4 <= 3);
    if (!var5) return;
    unsigned char *var6 = (unsigned char *) func_0200ff1c(var2, var4);
    if (var6 == 0) return;
    unsigned char *var7 = func_02053c6c(var6);
    if (var7 == 0) return;
    func_02041fac(arg1, (int) data_ov002_0216da30, 0x10);
    void *var8 = func_020421a0();
    func_02046380(var8);
    func_020465c0((Struct_020465c0 *) var8, 0, *(unsigned short *) (var7 + 0x564));
    func_020465f0((unsigned char *) var8, 0, 4);
    func_020465d8((unsigned char *) var8, 0, 1);
    __clear(var1, sizeof(var1));
    func_020474a8(var8, 8, data_ov002_0216da4a, var1);
    func_02042058(arg1, var1);
#else
    char var9[0x80];
    int var10[4];
    char var11[0x40];
    Struct_ov002_0215b8c8 var12;
    if (arg1 == 0) return;
    GameState *var13 = GameState::GetInstance();
    short var14     = *(short *) (arg0 + 0x1c08);
    func_ov002_02157480(arg0, var10);
    int var15 = var10[var14];
    int var16   = (var15 >= 0 && var15 <= 3);
    if (!var16) return;
    unsigned char *var17 = (unsigned char *) func_0200ff1c(var13, var15);
    if (var17 == 0) return;
    unsigned char *var18 = func_02053c6c(var17);
    if (var18 == 0) return;
    const char *var19 = func_020e0434((Struct_0201099c_3 *) (arg0 + 0x20), 0x1005);
    __clear(var9, sizeof(var9));
    var12.unknown_0_ = var9;
    func_ov002_0215b8c8(&var12, var19, 0);
    func_02041fac(arg1, (int) var9, 0x10);
    void *var20 = func_020421a0();
    func_02046380(var20);
    func_020465c0((Struct_020465c0 *) var20, 0, *(unsigned short *) (var18 + 0x564));
    func_020465f0((unsigned char *) var20, 0, 4);
    func_020465d8((unsigned char *) var20, 0, 1);
    __clear(var11, sizeof(var11));
    func_02041b00(arg1, -1);
    func_02046608(var20, 8, func_020e0434((Struct_0201099c_3 *) (arg0 + 0x20), 0x1006), var11,
                  0x100, 0, 0);
    func_02042058(arg1, var11);
#endif
}

#include "GameState/GameState.h"
#include <globaldefs.h>

struct Struct_0201099c_3;
struct Struct_02000c9c_8;
extern "C" int func_020e0434(struct Struct_0201099c_3 *arg0, int arg1);
extern "C" int func_02041c08(char *arg0, int arg1, int arg2, int arg3, int arg4, int arg5);
extern "C" int func_02041ea4(char *arg0, int arg1);
extern "C" int func_02041fac(char *arg0, int arg1, int arg2);
extern "C" int func_02041a28(char *arg0, int arg1);
extern "C" int func_02041a90(char *arg0, int arg1, int arg2);
extern "C" int func_02041acc(char *arg0, int arg1);
extern "C" int func_02041cc0(char *arg0, int arg1);
extern "C" int func_02041e70(char *arg0, int arg1);
extern "C" int func_02041b70(char *arg0, int arg1, const char *arg2);
extern "C" int func_02042058(char *arg0, const char *arg1);
extern "C" int func_0200fb08(struct Struct_02000c9c_8 *arg0);
extern "C" int func_020100a8(GameState *arg0);
extern "C" unsigned char *func_02053c6c(unsigned char *arg0);
extern "C" int func_020420e8(int arg0, int arg1);
extern "C" void *__clear(void *arg0, int arg1);
extern "C" int func_ov002_02159774(void *arg0, int arg1, int arg2, int arg3, int arg4);
struct Struct_ov002_0216ca70 {
    short unknown_0_;
    short unknown_2_;
};
extern "C" struct Struct_ov002_0216ca70 data_ov002_0216ca70[];
extern "C" signed char data_ov002_0216ca10[];
extern "C" int data_ov002_0216ca44[];
extern "C" int data_ov002_0216ca1c[];

struct Struct_02000c9c_64 {
    char unknown_0_[0x134];
    const char *unknown_134_;
};
// USA: func_ov002_0215f8b8
extern "C" ARM void func_ov002_0215f8b8(unsigned char *arg0, char *arg1, int arg2) {
    char var0[8];
    char var1[8];
    if (arg1 == NULL) return;

    int var2 = *(short *) (arg0 + 0x1c00 + 2);
    if (arg2) {
        func_02041c08(arg1, var2, 8, 5, 5, 5);
    }
    func_02041ea4(arg1, var2);
    int var3 = func_020e0434((struct Struct_0201099c_3 *) (arg0 + 0x20), 0xfa2);
    func_02041a28(arg1, (0xf0 - func_020420e8(var3, 0)) >> 1);
    func_02041fac(arg1, var3, 0xf);

    int var4                    = 0;
    GameState *var5            = GameState::GetInstance();
    unsigned char var6      = *(arg0 + 0x1000 + 0xc73);
    signed char *var7         = (signed char *) (arg0 + 0x1c00 + 0x6e);
    int var8                 = func_0200fb08((struct Struct_02000c9c_8 *) var5);
    struct Struct_ov002_0216ca70 *var9 = &data_ov002_0216ca70[var8];
    signed char *var10          = &data_ov002_0216ca10[var8 * 2];
    __clear(var0, 8);
    __clear(var1, 8);
    func_02041acc(var0, var10[0]);
    func_02041acc(var1, var10[1]);
    int var11 = func_020100a8(var5);
    int var12 = var6 + 1;
    int var13 = var12 + var6 + 1;
    for (unsigned char var14 = 0; var14 < var6; var14++) {
        int var15        = var7[var14];
        GameObject *var16 = var5->GetPartyMemberByIndex(var15);
        if (var16 == NULL) continue;
        func_02041e70(arg1, func_ov002_02159774(arg0, var15, 0, 1, 1));
        var3 = (int) var16->baseStats_;
        func_02042058(arg1, (const char *) var3);
        func_02041a28(arg1, 0x4a);
        func_02041e70(arg1, 0xf);
        short var17 = (signed char) *(int *) (func_02053c6c((unsigned char *) var16) + 0x94c) + 0x109c;
        if (var15 == var11) var17 = 0x109b;
        func_02041b70(
            arg1, var4,
            (const char *) func_020e0434((struct Struct_0201099c_3 *) (arg0 + 0x20), var17));
        func_02041a28(arg1, var9->unknown_0_);
        func_02041b70(arg1, var12, var0);
        func_02041a28(arg1, var9->unknown_2_);
        func_02041b70(arg1, var13, var1);
        func_02042058(arg1, *(const char **) (arg0 + 0x1000 + 0xbdc));
        var4++;
        var12++;
        var13++;
    }
    func_02041a90(arg1, 0x4a, data_ov002_0216ca44[var6]);
    func_02041b70(
        arg1, var4,
        (const char *) func_020e0434((struct Struct_0201099c_3 *) (arg0 + 0x20), 0x11fa));
    func_02041cc0(arg1, data_ov002_0216ca1c[var6]);
}

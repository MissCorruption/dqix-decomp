#include "GameState/GameState.h"
#include <globaldefs.h>

struct Struct_020465c0;
struct Struct_0201099c_3;
struct Struct_ov002_0215fcc0 {
    int unknown_0_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
};
struct Struct_ov002_0216ca30 {
    int unknown_0_[5];
};
extern "C" int func_020e0434(struct Struct_0201099c_3 *arg0, int arg1);
extern "C" int func_02041a5c(char *arg0, int arg1);
extern "C" int func_02041a28(char *arg0, int arg1);
extern "C" int func_02041acc(char *arg0, int arg1);
extern "C" int func_02042058(char *arg0, const char *arg1);
extern "C" int func_02041fac(char *arg0, int arg1, int arg2);
extern "C" const char *func_020e51cc(int arg0);
extern "C" char *func_020421a0();
extern "C" void func_020465c0(struct Struct_020465c0 *arg0, int arg1, int arg2);
extern "C" void func_020465f0(unsigned char *arg0, int arg1, unsigned char arg2);
extern "C" void func_020465d8(unsigned char *arg0, int arg1, unsigned char arg2);
extern "C" void func_02046380(void *arg0);
extern "C" int func_020420e8(const char *arg0, int arg1);
extern "C" int sprintf(char *arg0, const char *arg1, ...);
extern "C" void *__clear(void *arg0, int arg1);
extern "C" char data_ov002_0216d285[];
extern "C" char data_ov002_0216d2ae[];
extern "C" char data_ov002_0216d2b3[];
extern "C" struct Struct_ov002_0216ca30 data_ov002_0216ca30;

// USA: func_ov002_0215fcc0
extern "C" ARM void func_ov002_0215fcc0(char *arg0, char *arg1) {
    char var0[0x200];
    char var1[0x100];
    char var2[0x10];
    char var3[0x10];
    GameObject *var4;
    if (arg1 == NULL) return;
    GameState *var5 = GameState::GetInstance();
    short var6      = 0x10fe;
    short var7      = 0x1112;
    var4             = var5->GetPartyMemberByIndex(*(signed char *) (arg0 + 0x1c00 + 0x20));
    if (var4 == NULL) return;
    const char *var8 = *(const char **) ((char *) var4 + 0x134);
    int var9            = func_020420e8(var8, 0);
    __clear(var0, 0x200);
    char *var10 = *(char **) ((char *) var4 + 0x150);
    int var11;
    int var12 = *(unsigned char *) (var10 + *(int *) (var10 + 0x950) + 0x186);
    var11    = *(unsigned short *) (var10 + *(int *) (var10 + 0x950) * 2 + 0x16c);
    if (var12 != 0) {
        const char *var13 =
            (const char *) func_020e0434((struct Struct_0201099c_3 *) (arg0 + 0x20), (short) (var12 + 0x8fc));
        func_02041a5c(var0, 4);
        func_02042058(var0, var8);
        func_02041acc(var0, 0x10);
        func_02042058(var0, var13);
        func_02041acc(var0, 4);
        func_02042058(var0, func_020e51cc(0x3f3));
        __clear(var2, 0x10);
        sprintf(var2, data_ov002_0216d285, var11);
        func_02042058(var0, var2);
    } else {
        func_02041a5c(var0, 4);
        func_02042058(var0, var8);
        func_02041acc(var0, 0x12);
        func_02042058(var0, func_020e51cc(0x3f3));
        __clear(var3, 0x10);
        sprintf(var3, data_ov002_0216d285, var11);
        func_02042058(var0, var3);
    }
    __clear(var1, 0x100);
    sprintf(var1, data_ov002_0216d2ae, func_020e51cc(0x3f3), var11);
    int var14 = var9 + 0x12 + func_020420e8(var1, 0);
    if (var12 != 0) var14 += 9;
    int var15                             = (0x80 - var14) >> 1;
    *(short *) (arg0 + 0x2400 + 0x5c) = var9 + var15 + 1;
    func_02041a28(arg1, var15);
    func_02042058(arg1, var0);
    func_02041fac(arg1, (int) data_ov002_0216d2b3, 0x10);
    unsigned char *var16 = (unsigned char *) func_020421a0();
    func_02046380(var16);
    struct Struct_ov002_0216ca30 var17 = data_ov002_0216ca30;
    int var18[7]         = {
        (*(struct Struct_ov002_0215fcc0 **) ((char *) var4 + 0x130))->unknown_4_,
        var4->baseStats_->primaryStats.maxHP,
        (*(struct Struct_ov002_0215fcc0 **) ((char *) var4 + 0x130))->unknown_6_,
        var4->baseStats_->primaryStats.maxMP,
        var4->baseStats_->primaryStats.attack,
        var4->baseStats_->primaryStats.defense,
        var4->baseStats_->primaryStats.agility,
    };
    for (int var19 = 0; var19 < 7; var19++) {
        func_020465d8(var16, var19, 1);
        func_020465f0(var16, var19, 3);
        func_020465c0((struct Struct_020465c0 *) var16, var19, var18[var19]);
    }
    for (int var20 = 0; var20 < 5; var20++) {
        func_02042058(arg1, (const char *) func_020e0434((struct Struct_0201099c_3 *) (arg0 + 0x20), var6++));
        func_02041a28(arg1, var17.unknown_0_[var20]);
        func_02042058(arg1, (const char *) func_020e0434((struct Struct_0201099c_3 *) (arg0 + 0x20), var7++));
        if (var20 != 4) {
            func_02042058(arg1, *(const char **) (arg0 + 0x1000 + 0xbdc));
        }
    }
}

#include "GameState/GameState.h"
#include <globaldefs.h>

struct Struct_0201099c_10;
struct Struct_0201099c_3;
struct Struct_020465c0;
struct Struct_02000c9c_8;

struct Struct_ov002_0215d214 {
    int unknown_0_;
    unsigned int unknown_4_0_ : 12;
    unsigned int unknown_5_4_ : 20;
};

struct Struct_ov002_0215d214_2 {
    unsigned int unknown_0_0_ : 10;
    unsigned int unknown_1_2_ : 10;
    unsigned int unknown_2_4_ : 10;
    unsigned int unknown_3_6_ : 2;
    unsigned int unknown_4_0_ : 10;
    unsigned int unknown_5_2_ : 10;
    unsigned int unknown_6_4_ : 10;
    unsigned int unknown_7_6_ : 2;
    unsigned int unknown_8_0_ : 10;
    unsigned int unknown_9_2_ : 22;
};

struct Struct_ov002_0215d214_3 {
    int unknown_0_;
    int unknown_4_;
    unsigned int unknown_8_0_ : 24;
    unsigned int unknown_b_0_ : 2;
    unsigned int unknown_b_2_ : 6;
};

extern "C" void *func_02053c6c(unsigned char *arg0);
extern "C" char *func_020dedd0(struct Struct_0201099c_10 *arg0, int arg1);
extern "C" char *func_020421a0();
extern "C" void func_02046380(void *arg0);
extern "C" void func_020e4bf4(void *arg0, int arg1);
extern "C" int func_ov002_02159774(void *arg0, int arg1, int arg2, int arg3, int arg4);
extern "C" int func_0200fb08(Struct_02000c9c_8 *arg0);
extern "C" char *func_020e0434(struct Struct_0201099c_3 *arg0, int arg1);
extern "C" int sprintf(char *arg0, const char *arg1, ...);
extern "C" char *strstr(const char *arg0, const char *arg1);
extern "C" void *memcpy(void *arg0, const void *arg1, unsigned int arg2);
extern "C" void func_020465c0(Struct_020465c0 *arg0, int arg1, int arg2);
extern "C" void func_02046608(void *arg0, int arg1, const char *arg2, char *arg3, int arg4, int arg5, int arg6);

extern "C" unsigned char data_ov002_0216cac4[];
extern "C" unsigned char data_ov002_0216cac5[];
extern "C" char data_ov002_0216d280[];
extern "C" char data_ov002_0216d285[];

// USA: func_ov002_0215d214
extern "C" ARM void func_ov002_0215d214(char *arg0, char *arg1, int arg2) {
    char var0[4];
    Struct_ov002_0215d214_3 var1;
    char var2[0x200];
    if (arg1 == NULL) return;
    GameState *var3              = GameState::GetInstance();
    *(short *) (arg0 + 0x1c26) = -1;
    unsigned char *var4         = (unsigned char *) (arg0 + 0x68 + 0x1c00);
    short var5                    = *(short *) (arg0 + 0x1bfa);
    if (var5 >= 0 && var5 < 0x20) {
        *(short *) (arg0 + 0x1c26) = (*(Struct_ov002_0215d214 **) (arg0 + var5 * 4 + 0x24a0))->unknown_4_0_;
    }
    if (*(short *) (arg0 + 0x1c26) < 0) {
        if (*(unsigned char *) (arg0 + 0x1c84) == 7) {
            var4 = (unsigned char *) (arg0 + 0x6e + 0x1c00);
        }
    }
    int var6 = var4[*(short *) (arg0 + 0x1bec)];
    char *var7 = (char *) func_0200ff1c(var3, var6);
    if (var7 == 0) return;
    Struct_ov002_0215d214_2 *var8 = (Struct_ov002_0215d214_2 *) func_02053c6c((unsigned char *) var7);
    if (var8 == 0) return;
    char *var9 = 0;
    if (*(short *) (arg0 + 0x1c26) < 0) {
        var9 = func_020dedd0((struct Struct_0201099c_10 *) (arg0 + 0x3ec + 0x400),
                                                              *(short *) (arg0 + 0x1c22));
        if (var9 == 0) return;
    }
    char *var10 = func_020421a0();
    func_02046380(var10);
    func_020e4bf4(&var1, var6);
    *(void **) var10 = &var1;
    int var11;
    char *var12 = *(char **) (var7 + 0x130);
    char *var13 = *(char **) (var7 + 0x134);
    int var14    = *(unsigned short *) (var12 + 4);
    int var15    = *(unsigned short *) (var13 + 0x30);
    var11        = 0x4ba;
    int var16   = 1;
    if (var9 != 0) {
        switch (*(short *) (var9 + 0x18)) {
            case 0x55ff:
            case 0x5600:
            case 0x5601: var16 = 0;
            case 0x561e:
                var15 = *(unsigned short *) (var13 + 0x32);
                var14 = *(unsigned short *) (var12 + 6);
                var11 = 0x4bb;
                break;
            case 0x561f:
                var14 = var8->unknown_0_0_;
                var11 = 0x1103;
                break;
            case 0x5622:
                var14 = var8->unknown_2_4_;
                var11 = 0x1104;
                break;
            case 0x5621:
                var14 = var8->unknown_1_2_;
                var11 = 0x1105;
                break;
            case 0x5619:
                var14 = var8->unknown_5_2_;
                var11 = 0x1106;
                break;
            case 0x5620:
                var14 = var8->unknown_4_0_;
                var11 = 0x1107;
                break;
            case 0x5623:
                var14 = var8->unknown_8_0_;
                var11 = 0x1108;
                break;
            case 0x5624:
                var14 = var8->unknown_6_4_;
                var11 = 0x1109;
                break;
            case 0x5625:
                var14 = *(unsigned short *) ((char *) var8 + 0x564);
                var11 = 0x110a;
                break;
            case 0x561d: break;
            default: var16 = 0; break;
        }
    } else if (*(short *) (arg0 + 0x1c26) >= 0) {
        var16 = 0;
    }
    int var17    = func_ov002_02159774(arg0, var6, 1, 1, 1);
    int var18  = 0xf;
    int var19 = 0;
    if (!var16) {
        int var20 = -1;
        int var21    = **(int **) (var7 + 0x130);
        if (var21 & 1) {
            var20 = 2;
            var11   = 0x110d;
            var18   = 9;
        } else if (var21 & 2) {
            var20 = 0;
            var11   = 0x110b;
            var18   = 0xc;
        } else if (var21 & 4) {
            var11   = 0x110c;
            var18   = var17;
            var20 = 1;
        }
        if (var20 >= 0) {
            int var22 = func_0200fb08((Struct_02000c9c_8 *) GameState::GetInstance());
            for (int var23 = 0; var23 < 5; var23++) {
                if (var22 == data_ov002_0216cac4[var23 * 7]) {
                    var19 = (data_ov002_0216cac5 + var23 * 7 + var1.unknown_b_0_)[var20 * 2];
                    break;
                }
            }
        }
    }
    if (var17 == 3) {
        var18 = 3;
    }
    sprintf(var2, func_020e0434((struct Struct_0201099c_3 *) (arg0 + 0x20), var11), var18, var17);
    if (var19 != 0) {
        char *var24 = strstr(var2, data_ov002_0216d280);
        if (var24 != 0) {
            sprintf(var0, data_ov002_0216d285, var19);
            memcpy(var24 + 4, var0, 2);
        }
    }
    func_020465c0((Struct_020465c0 *) var10, 0, var14);
    func_020465c0((Struct_020465c0 *) var10, 1, var15);
    func_02046608(var10, 10, var2, arg1, 0x100, 0, 0);
}

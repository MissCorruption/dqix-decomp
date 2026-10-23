#include "GameState/GameState.h"
#include <globaldefs.h>

struct Struct_02048150;
struct Struct_0201099c_10;
struct Struct_0207cf30_3;
struct Struct_020a0b8c;
struct Struct_020465c0;
extern "C" int func_02041c08(char *arg0, int arg1, int arg2, int arg3, int arg4, int arg5);
extern "C" int func_02041ea4(char *arg0, int arg1);
extern "C" char *func_020421a0();
extern "C" unsigned char *func_02053c6c(unsigned char *arg0);
extern "C" int func_02086ef0(Struct_02048150 *arg0, int arg1);
extern "C" int func_ov002_02157108(void *arg0, int arg1);
extern "C" void func_020465c0(struct Struct_020465c0 *arg0, int arg1, int arg2);
extern "C" char *func_020dedd0(struct Struct_0201099c_10 *arg0, int arg1);
extern "C" void func_0206819c(const char *arg0, char *arg1, int arg2);
extern "C" int func_02041b70(char *arg0, int arg1, const char *arg2);
extern "C" int func_02042058(char *arg0, const char *arg1);
extern "C" int func_020a0b8c(struct Struct_020a0b8c *arg0);
extern "C" int func_020a0b3c(Struct_0207cf30_3 *arg0, int arg1);
extern "C" void func_ov002_0215b918(unsigned char *arg0, int arg1, int arg2, int arg3);
extern "C" void func_02046380(void *arg0);
extern "C" int sprintf(char *arg0, const char *arg1, ...);
extern "C" void *__clear(void *arg0, int arg1);
extern "C" char data_ov002_0216d288[];
extern "C" char data_ov002_0216d270[];

struct Struct_ov002_0215de9c {
    char unknown_0_[0x58];
    int unknown_58_;
    char unknown_5c_[0xc];
    int unknown_68_;
};

// USA: func_ov002_0215de9c
extern "C" ARM void func_ov002_0215de9c(char *arg0, char *arg1, int arg2) {
    char var0[0x100];
    char var1[0x100];
    char var2[0x40];
    if (arg1 == NULL) return;
    int var3 = *(short *) (arg0 + 0x1b00 + 0xf4) & 7;
    if (*(int *) (arg0 + 0x1000 + 0xbb8) == 0xd) {
        if (arg2) {
            func_02041c08(arg1, var3, 8, 5, 5, 5);
        }
        func_02041ea4(arg1, var3);
    }
    GameState *var4 = GameState::GetInstance();
    char *var5       = func_020421a0();
    char *var6   = (char *) func_02010828(var4);
    int var7     = *(signed char *) (arg0 + 0x1c00 + 0x21);
    int var8        = 0;
    unsigned char *var9;
    struct Struct_ov002_0215de9c *var10 = (struct Struct_ov002_0215de9c *) (arg0 + 0x2c8 + 0xc00) + 1;
    var10--;
    int var11  = var10->unknown_68_;
    int var12 = var10->unknown_58_;
    if (var7 >= 0 && var7 <= 3) {
        var8 = 1;
    }
    if (var8) {
        GameObject *var13 = func_0200ff1c(var4, var7);
        if (var13 == NULL) return;
        var9 = func_02053c6c((unsigned char *) var13);
        if (!func_02086ef0((Struct_02048150 *) var6, *(signed char *) (arg0 + 0x1c00 + 0x21))) return;
        int var14     = func_ov002_02157108(arg0, *(signed char *) (arg0 + 0x1c00 + 0x21));
        int var15 = 0;
        if (var14 < 8) var15 = 1;
        for (int var16 = 0; var16 < var14 + var15; var16++) {
            func_02046380(var5);
            func_020465c0((struct Struct_020465c0 *) var5, 0, var16);
            char *var17 = func_020dedd0((struct Struct_0201099c_10 *) (arg0 + 0x3ec + 0x400),
                                                                        *(short *) (var9 + var16 * 2 + 0x454));
            if (var17 != NULL) {
                __clear(var0, 0x100);
                func_0206819c(*(const char **) (var17 + 4), var0, 0);
                func_02041b70(arg1, var16, var0);
                if (var16 != var14 - 1) {
                    func_02042058(arg1, *(const char **) (arg0 + 0x1000 + 0xbdc));
                } else if (var15 == 1) {
                    func_02042058(arg1, *(const char **) (arg0 + 0x1000 + 0xbdc));
                }
            } else if (var16 == var14) {
                func_02041b70(arg1, var16, data_ov002_0216d288);
            }
        }
    } else {
        int var18;
        int var19 = var11 * 8;
        var18   = var19 + 8;
        int var20 = func_ov002_02157108(arg0, var7);
        if (var18 > var20) var18 = var20;
        var12 = (func_020a0b8c((struct Struct_020a0b8c *) var6) + 7) / 8;
        for (; var19 < var18; var19++) {
            func_02046380(var5);
            func_020465c0((struct Struct_020465c0 *) var5, 0, var19);
            char *var21 = func_020dedd0((struct Struct_0201099c_10 *) (arg0 + 0x3ec + 0x400),
                                                                        *(short *) (var6 + var19 * 2 + 0xc));
            if (var21 == NULL) continue;
            __clear(var1, 0x100);
            func_0206819c(*(const char **) (var21 + 4), var1, 0);
            func_02041b70(arg1, var19, var1);
            __clear(var2, 0x40);
            sprintf(var2, data_ov002_0216d270,
                    func_020a0b3c((Struct_0207cf30_3 *) var6, *(short *) (var21 + 0x18)));
            func_02042058(arg1, var2);
            if (var19 != var18 - 1) {
                func_02042058(arg1, *(const char **) (arg0 + 0x1000 + 0xbdc));
            }
        }
    }
    if (var12 > 1) {
        func_ov002_0215b918((unsigned char *) arg0, 0xd, var11, var12);
    } else {
        func_ov002_0215b918((unsigned char *) arg0, 0xd, 0, 0);
    }
}

#include "GameState/GameState.h"
#include <globaldefs.h>
#include "Input/Input.h"

struct Struct_0205de24_2;
struct Struct_0205c570;
struct Struct_0205da38;
struct Struct_02108760;
struct Struct_0205d81c;
struct Struct_0205dee8;
struct Struct_0201099c_10;
extern "C" void func_0205de24(struct Struct_0205de24_2 *arg0, unsigned char arg1,
                                                                        unsigned char arg2);
extern "C" int func_0205d794(struct Struct_0205c570 *arg0);
extern "C" int func_0205da38(struct Struct_0205da38* arg0, int arg1);
extern "C" void func_0205eaa0(struct Struct_02108760 *arg0, int arg1, int arg2);
extern "C" int func_ov002_02161b48(char *arg0, int arg1);
extern "C" void func_0205deb4(struct Struct_0205d81c *arg0, int arg1, int arg2);
extern "C" void func_0205dee8(struct Struct_0205dee8 *arg0, int arg1);
extern "C" unsigned char *func_02053c6c(unsigned char *arg0);
extern "C" int func_ov002_02154f4c(unsigned char *arg0);
extern "C" int func_020dcc20(int arg0, int arg1);
extern "C" int func_020dcbbc(unsigned char *arg0, int arg1, int arg2, int arg3, int arg4);
extern "C" char *func_020dedd0(struct Struct_0201099c_10 *arg0, int arg1);
extern "C" void func_ov002_02156ff0(unsigned char *arg0, int arg1);
extern "C" int func_ov002_0215b7d0(char* arg0);
extern "C" int func_020dc920(int arg0, int arg1, int arg2, int arg3);
extern "C" void func_ov002_0215b814(char *arg0);
extern "C" void func_ov002_02161cf0(char *arg0);
extern "C" void func_ov002_0215ce94(char *arg0);
extern "C" void func_ov002_02156e90(char *arg0);
extern "C" void func_ov002_0215b9a4(char *arg0, unsigned char arg1, int arg2);
extern "C" int func_ov002_0215b720(char *arg0, int arg1);
extern "C" void func_ov002_02157d40(char *arg0);
extern "C" void func_ov002_02157634(char *arg0);
extern "C" char data_02108760[];

// USA: func_ov002_02163664
#if defined(jpn)
extern "C" ARM void func_ov002_02163664(char *arg0) {
    int var0 = *(int *) (arg0 + 0x1a88);
    if (var0 == 0) {
        *(short *) (arg0 + 0x1ab4) = func_ov002_02154f4c((unsigned char *) arg0);
        GameObject *var1 = GameState::GetInstance()->GetProtagonist();
        if (var1 != NULL) {
            short var2 = *(short *) (func_02053c6c((unsigned char *) var1) + 0x800 + 0xc6);
            for (int var3 = 0; var3 < *(unsigned char *) (arg0 + 0x1000 + 0xb31); var3++) {
                if (var2 == *(unsigned char *) (arg0 + var3 + 0x1000 + 0xb2c)) {
                    *(short *) (arg0 + 0x1ab4) = var3;
                    break;
                }
            }
        }
        if (*(short *) (arg0 + 0x1aee) != -1) *(short *) (arg0 + 0x1ab4) = 0;
        func_ov002_0215b814(arg0);
        func_0205de24((struct Struct_0205de24_2 *) (arg0 + 0xe20), 0, 3);
        func_ov002_02161cf0(arg0);
        func_ov002_0215ce94(arg0);
        *(int *) (arg0 + 0x1a88) += 1;
    } else if (var0 == 1) {
        *(unsigned int *) (arg0 + 0x22ac) |= 4;
        short var4 = *(short *) (arg0 + 0x1ab4);
        *(short *) (arg0 + 0x1ab4) =
            func_0205d794((struct Struct_0205c570 *) (arg0 + 0xe20));
        if (var4 != *(short *) (arg0 + 0x1ab4)) *(int *) (arg0 + 0x1a94) = 1;
        int var5              = *(unsigned char *) (arg0 + 0x1b31);
        unsigned char *var6 = (unsigned char *) (arg0 + 0x32c + 0x1800);
        unsigned char var7 = *(unsigned char *) (arg0 + 0x1b48);
        if (var7 == 7) {
            var5   = *(unsigned char *) (arg0 + 0x1b37);
            var6 = (unsigned char *) (arg0 + 0x32 + 0x1b00);
        }
        if (var7 != 7 && !func_020dcc20(var5, 0)) {
            *(short *) (arg0 + 0x1ab4) = -1;
            func_ov002_02156e90(arg0);
            return;
        }
        int var8 = 0;
        if (*(short *) (arg0 + 0x1aee) == 0xd1) var8 = 1;
        if (*(unsigned char *) (arg0 + 0x1b88) != 0 || func_020dcbbc(var6, var5, 1, 1, var8)) {
            *(int *) (arg0 + 0x1a94) = 1;
            func_ov002_0215b9a4(arg0, *(int *) (arg0 + 0x1a80) & 0xff, 0);
        }
        if (var4 != *(short *) (arg0 + 0x1ab4)) return;
        int var9 = g_keyManager.TestKeysPressed(0x601);
        int var10 = func_0205da38((struct Struct_0205da38*)(arg0 + 0xe20), 0x14);
        if ((var9 | var10) ? 1 : 0) {
            if (!func_020dc920(var6[*(short *) (arg0 + 0x1ab4)], 1, 1, var8)) return;
            func_ov002_0215b814(arg0);
            *(unsigned char *) (arg0 + 0xed8)          = *(int *) (arg0 + 0x1a80);
            *(unsigned char *) (arg0 + 0x1ae9) = var6[*(short *) (arg0 + 0x1ab4)];
            func_0205eaa0((struct Struct_02108760 *) data_02108760, 1, 0);
            *(unsigned int *) (arg0 + 0x22ac) &= ~4;
            func_ov002_0215b9a4(arg0, 0x11, 1);
            func_0205deb4((struct Struct_0205d81c *) (arg0 + 0xe20), 0x11, 1);
            func_0205deb4((struct Struct_0205d81c *) (arg0 + 0xe20), 0x14, 1);
            func_0205deb4((struct Struct_0205d81c *) (arg0 + 0xe20), 8, 1);
            func_0205deb4((struct Struct_0205d81c *) (arg0 + 0xe20), 9, 1);
            if (*(short *) (arg0 + 0x1aee) != -1) {
                if (func_ov002_0215b720(arg0, *(short *) (arg0 + 0x1aee))) {
                    *(int *) (arg0 + 0x1a88) = 2;
                    return;
                }
                func_ov002_02157d40(arg0);
                return;
            }
            char *var11 = func_020dedd0((struct Struct_0201099c_10 *) (arg0 + 0x750),
                                                                        *(short *) (arg0 + 0x1aea));
            if (var11 != NULL && func_ov002_0215b720(arg0, *(short *) (var11 + 0x14))) {
                *(int *) (arg0 + 0x1a88) = 2;
                return;
            }
            GameObject *var12 = GameState::GetInstance()->GetProtagonist();
            if (var12 != NULL) {
                short var13                                                        = *(signed char *) (arg0 + 0x1ae9);
                *(short *) (func_02053c6c((unsigned char *) var12) + 0x800 + 0xc6) = var13;
            }
            func_ov002_02157634(arg0);
        } else if (func_ov002_02161b48(arg0, 1)) {
            if (*(short *) (arg0 + 0x1aee) != -1) {
                *(int *) (arg0 + 0x1a80) = 0x12;
                func_ov002_02156ff0((unsigned char *) arg0, 0x14);
                func_0205dee8((struct Struct_0205dee8 *) (arg0 + 0xe20), 0x12);
                func_0205deb4((struct Struct_0205d81c *) (arg0 + 0xe20), 0x12, 0);
                *(int *) (arg0 + 0x1a88) = 1;
                *(int *) (arg0 + 0x1a80) = 0x12;
                func_ov002_02161cf0(arg0);
            } else {
                func_ov002_02156e90(arg0);
            }
            *(short *) (arg0 + 0x1ab4) = -1;
        }
    } else if (var0 == 2) {
        int var14 = func_ov002_0215b7d0(arg0);
        if (var14 > 0) {
            *(unsigned char *) (arg0 + 0xed8) = *(int *) (arg0 + 0x1a80);
            if (*(short *) (arg0 + 0x1aee) != -1) {
                func_ov002_02157d40(arg0);
                return;
            }
            GameObject *var15 = GameState::GetInstance()->GetProtagonist();
            if (var15 != NULL) {
                short var16                                                        = *(signed char *) (arg0 + 0x1ae9);
                *(short *) (func_02053c6c((unsigned char *) var15) + 0x800 + 0xc6) = var16;
            }
            func_ov002_02157634(arg0);
        } else if (var14 < 0) {
            if (*(short *) (arg0 + 0x1aee) != -1) {
                *(short *) (arg0 + 0x1af0) = 0x232d;
                *(short *) (arg0 + 0x22b8) = 0x232b;
                *(int *) (arg0 + 0x1a84)  = 0x12;
            } else {
                *(short *) (arg0 + 0x1af0) = 0x7918;
                *(short *) (arg0 + 0x22b8) = 0x7919;
                *(int *) (arg0 + 0x1a84)  = 5;
            }
            *(short *) (arg0 + 0x1af2)          = -1;
            *(unsigned char *) (arg0 + 0x22ba) = 1;
            *(int *) (arg0 + 0x1a80)           = 0x29;
            *(int *) (arg0 + 0x1a88)           = 0;
        }
    }
}
#else
extern "C" ARM void func_ov002_02163664(char *arg0) {
    int var17 = *(int *) (arg0 + 0x1000 + 0xbc0);
    if (var17 == 0) {
        *(short *) (arg0 + 0x1b00 + 0xec) = func_ov002_02154f4c((unsigned char *) arg0);
        int var18                             = *(unsigned char *) (arg0 + 0x1000 + 0xc6d);
        unsigned char *var19                = (unsigned char *) (arg0 + 0x68 + 0x1c00);
        if (*(short *) (arg0 + 0x1c00 + 0x26) < 0 && *(unsigned char *) (arg0 + 0x1000 + 0xc84) == 7) {
            var18   = *(unsigned char *) (arg0 + 0x1000 + 0xc73);
            var19 = (unsigned char *) (arg0 + 0x6e + 0x1c00);
        }
        GameObject *var20 = GameState::GetInstance()->GetProtagonist();
        if (var20 != NULL) {
            int var21 = 0;
            short var22   = *(short *) (func_02053c6c((unsigned char *) var20) + 0x900 + 0x5e);
            for (int var23 = 0; var23 < var18; var23++) {
                if (var22 == var19[var23]) {
                    *(short *) (arg0 + 0x1b00 + 0xec) = var23;
                    var21                             = 1;
                    break;
                }
            }
            if (!var21) *(short *) (arg0 + 0x1b00 + 0xec) = 0;
        }
        if (*(short *) (arg0 + 0x1c00 + 0x26) != -1) *(short *) (arg0 + 0x1b00 + 0xec) = 0;
        func_ov002_0215b814(arg0);
        func_0205de24((struct Struct_0205de24_2 *) (arg0 + 0x2c8 + 0xc00), 0, 3);
        func_ov002_02161cf0(arg0);
        func_ov002_0215ce94(arg0);
        *(int *) (arg0 + 0x1000 + 0xbc0) += 1;
    } else if (var17 == 1) {
        *(unsigned int *) (arg0 + 0x2000 + 0x47c) |= 4;
        short var24 = *(short *) (arg0 + 0x1b00 + 0xec);
        *(short *) (arg0 + 0x1b00 + 0xec) =
            func_0205d794((struct Struct_0205c570 *) (arg0 + 0x2c8 + 0xc00));
        if (var24 != *(short *) (arg0 + 0x1b00 + 0xec)) *(int *) (arg0 + 0x1000 + 0xbcc) = 1;
        int var25              = *(unsigned char *) (arg0 + 0x1000 + 0xc6d);
        unsigned char *var26 = (unsigned char *) (arg0 + 0x68 + 0x1c00);
        unsigned char var27 = *(unsigned char *) (arg0 + 0x1000 + 0xc84);
        if (var27 == 7) {
            var25   = *(unsigned char *) (arg0 + 0x1000 + 0xc73);
            var26 = (unsigned char *) (arg0 + 0x6e + 0x1c00);
        }
        if (var27 != 7 && !func_020dcc20(var25, 0)) {
            *(short *) (arg0 + 0x1b00 + 0xec) = -1;
            func_ov002_02156e90(arg0);
            return;
        }
        int var28 = 0;
        if (*(short *) (arg0 + 0x1c00 + 0x26) == 0xd1) var28 = 1;
        if (*(unsigned char *) (arg0 + 0x1000 + 0xcc4) != 0 || func_020dcbbc(var26, var25, 1, 1, var28)) {
            *(int *) (arg0 + 0x1000 + 0xbcc) = 1;
            func_ov002_0215b9a4(arg0, *(int *) (arg0 + 0x1000 + 0xbb8) & 0xff, 0);
        }
        if (var24 != *(short *) (arg0 + 0x1b00 + 0xec)) return;
        int var29 = g_keyManager.TestKeysPressed(0x601);
        int var30 = func_0205da38((struct Struct_0205da38*)(arg0 + 0x2c8 + 0xc00), 0x14);
        if ((var29 | var30) ? 1 : 0) {
            if (!func_020dc920(var26[*(short *) (arg0 + 0x1b00 + 0xec)], 1, 1, var28)) return;
            func_ov002_0215b814(arg0);
            *(unsigned char *) (arg0 + 0xf80)          = *(int *) (arg0 + 0x1000 + 0xbb8);
            *(unsigned char *) (arg0 + 0x1000 + 0xc21) = var26[*(short *) (arg0 + 0x1b00 + 0xec)];
            func_0205eaa0((struct Struct_02108760 *) data_02108760, 1, 0);
            *(unsigned int *) (arg0 + 0x2000 + 0x47c) &= ~4;
            func_ov002_0215b9a4(arg0, 0x10, 1);
            func_0205deb4((struct Struct_0205d81c *) (arg0 + 0x2c8 + 0xc00), 0x10, 1);
            func_0205deb4((struct Struct_0205d81c *) (arg0 + 0x2c8 + 0xc00), 0x13, 1);
            func_0205deb4((struct Struct_0205d81c *) (arg0 + 0x2c8 + 0xc00), 7, 1);
            func_0205deb4((struct Struct_0205d81c *) (arg0 + 0x2c8 + 0xc00), 8, 1);
            if (*(short *) (arg0 + 0x1c00 + 0x26) != -1) {
                if (func_ov002_0215b720(arg0, *(short *) (arg0 + 0x1c00 + 0x26))) {
                    *(int *) (arg0 + 0x1000 + 0xbc0) = 2;
                    return;
                }
                func_ov002_02157d40(arg0);
                return;
            }
            char *var31 = func_020dedd0((struct Struct_0201099c_10 *) (arg0 + 0x3ec + 0x400),
                                                                        *(short *) (arg0 + 0x1c00 + 0x22));
            if (var31 != NULL && func_ov002_0215b720(arg0, *(short *) (var31 + 0x14))) {
                *(int *) (arg0 + 0x1000 + 0xbc0) = 2;
                return;
            }
            GameObject *var32 = GameState::GetInstance()->GetProtagonist();
            if (var32 != NULL) {
                short var33                                                        = *(signed char *) (arg0 + 0x1c00 + 0x21);
                *(short *) (func_02053c6c((unsigned char *) var32) + 0x900 + 0x5e) = var33;
            }
            func_ov002_02157634(arg0);
        } else if (func_ov002_02161b48(arg0, 1)) {
            if (*(short *) (arg0 + 0x1c00 + 0x26) != -1) {
                *(int *) (arg0 + 0x1000 + 0xbb8) = 0x11;
                func_ov002_02156ff0((unsigned char *) arg0, 0x13);
                func_0205dee8((struct Struct_0205dee8 *) (arg0 + 0x2c8 + 0xc00), 0x11);
                func_0205deb4((struct Struct_0205d81c *) (arg0 + 0x2c8 + 0xc00), 0x11, 0);
                *(int *) (arg0 + 0x1000 + 0xbc0) = 1;
                *(int *) (arg0 + 0x1000 + 0xbb8) = 0x11;
                func_ov002_02161cf0(arg0);
            } else {
                func_ov002_02156e90(arg0);
            }
            *(short *) (arg0 + 0x1b00 + 0xec) = -1;
        }
    } else if (var17 == 2) {
        int var34 = func_ov002_0215b7d0(arg0);
        if (var34 > 0) {
            *(unsigned char *) (arg0 + 0xf80) = *(int *) (arg0 + 0x1000 + 0xbb8);
            if (*(short *) (arg0 + 0x1c00 + 0x26) != -1) {
                func_ov002_02157d40(arg0);
                return;
            }
            GameObject *var35 = GameState::GetInstance()->GetProtagonist();
            if (var35 != NULL) {
                short var36                                                        = *(signed char *) (arg0 + 0x1c00 + 0x21);
                *(short *) (func_02053c6c((unsigned char *) var35) + 0x900 + 0x5e) = var36;
            }
            func_ov002_02157634(arg0);
        } else if (var34 < 0) {
            if (*(short *) (arg0 + 0x1c00 + 0x26) != -1) {
                *(short *) (arg0 + 0x1c00 + 0x28) = 0x232d;
                *(short *) (arg0 + 0x2400 + 0x88) = 0x232b;
                *(int *) (arg0 + 0x1000 + 0xbbc)  = 0x11;
            } else {
                *(short *) (arg0 + 0x1c00 + 0x28) = 0x7918;
                *(short *) (arg0 + 0x2400 + 0x88) = 0x7919;
                *(int *) (arg0 + 0x1000 + 0xbbc)  = 5;
            }
            *(short *) (arg0 + 0x1c00 + 0x2a)          = -1;
            *(unsigned char *) (arg0 + 0x2000 + 0x48a) = 1;
            *(int *) (arg0 + 0x1000 + 0xbb8)           = 0x26;
            *(int *) (arg0 + 0x1000 + 0xbc0)           = 0;
        }
    }
}
#endif

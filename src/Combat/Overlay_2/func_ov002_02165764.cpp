#include "GameState/GameState.h"
#include <globaldefs.h>
#include "Input/Input.h"

struct Struct_0205de24_2;
struct Struct_0205c570;
struct Struct_0205d81c;
struct Struct_0205def8;
struct Struct_02108760;
struct Struct_0205dee8;
struct Struct_ov002_02165764 {
    int unknown_0_;
    unsigned int unknown_4_0_ : 12;
    unsigned int unknown_5_4_ : 20;
};

extern "C" void func_0205def8(struct Struct_0205def8 *arg0, int arg1, int arg2);
extern "C" void func_0205de24(struct Struct_0205de24_2 *arg0, unsigned char arg1,
                                                                        unsigned char arg2);
extern "C" void func_ov002_02161cf0(char *arg0);
extern "C" void func_ov002_0215eadc(void *arg0, int arg1);
extern "C" void func_0205dee8(struct Struct_0205dee8 *arg0, int arg1);
extern "C" void func_0205deb4(struct Struct_0205d81c *arg0, int arg1, int arg2);
extern "C" void func_ov002_0215b9a4(void *arg0, int arg1, int arg2);
extern "C" void func_ov002_02161b98(char *arg0);
extern "C" int func_0205d794(struct Struct_0205c570 *arg0);
extern "C" int func_ov002_0216197c(int arg0, struct Struct_0205d81c *arg1);
struct Struct_0205da38;
extern "C" int func_0205da38(struct Struct_0205da38* arg0, int arg1);
extern "C" char *func_0200ff94(GameState *arg0, int arg1);
extern "C" void func_0205eaa0(struct Struct_02108760 *arg0, int arg1, int arg2);
extern "C" int func_ov002_0215b720(char *arg0, int arg1);
extern "C" void func_ov002_02157d40(char *arg0);
extern "C" int func_ov002_02161b48(char *arg0, int arg1);
extern "C" void func_ov002_02156ff0(unsigned char *arg0, int arg1);
extern "C" int func_ov002_0215b7d0(char* arg0);

extern "C" char data_02108760;

#define OBJ (arg0 + 0x2c8 + 0xc00)

// USA: func_ov002_02165764
#if defined(jpn)
#undef OBJ
#define OBJ (arg0 + 0xe20)

extern "C" ARM void func_ov002_02165764(char *arg0) {
    int var0 = *(int *) (arg0 + 0x1a88);
    if (var0 == 0) {
        *(short *) (arg0 + 0x1ac2) = 0;
        func_0205de24((struct Struct_0205de24_2 *) OBJ, 0, 2);
        func_ov002_02161cf0(arg0);
        func_ov002_0215eadc(arg0, 0);
        func_0205dee8((struct Struct_0205dee8 *) OBJ, 0x12);
        func_0205deb4((struct Struct_0205d81c *) OBJ, 0x12, 0);
        *(int *) (arg0 + 0x1a88) += 1;
        return;
    }
    if (var0 == 1) {
        *(unsigned int *) (arg0 + 0x22ac) |= 4;
        short var1 = *(short *) (arg0 + 0x1ac2);
        func_ov002_02161b98(arg0);
        *(short *) (arg0 + 0x1ac2) = func_0205d794((struct Struct_0205c570 *) OBJ);
        if (var1 != *(short *) (arg0 + 0x1ac2)) {
            *(int *) (arg0 + 0x1a94) = 1;
        }
        func_0205deb4((struct Struct_0205d81c *) OBJ, 0x13, 0);
        func_0205deb4((struct Struct_0205d81c *) OBJ, 0x14, 0);
        func_ov002_0215b9a4(arg0, *(int *) (arg0 + 0x1a80) & 0xff, 0);
        int var2  = g_keyManager.TestKeysPressed(0x601);
        int var3  = func_0205da38((struct Struct_0205da38*)OBJ, 0x14);
        int var4 = (var2 | var3) ? 1 : 0;
        if (var4) {
            *(unsigned char *) (arg0 + 0x1b48) = 3;
            char *var5 = func_0200ff94(GameState::GetInstance(), *(signed char *) (arg0 + 0x1ae8));
            if (var5 == 0) {
                return;
            }
            if (**(int **) (var5 + 0x130) & 1) {
                *(short *) (arg0 + 0x1af0) = -1;
                *(short *) (arg0 + 0x1af2) = -1;
                *(int *) (arg0 + 0x1a80)   = 0x12;
                return;
            }
            func_0205eaa0((struct Struct_02108760 *) &data_02108760, 1, 0);
            *(short *) (arg0 + 0x1aee) = -1;
            short var6                    = *(short *) (arg0 + 0x1ac2);
            if (var6 >= 0 && var6 < 0x20) {
                *(short *) (arg0 + 0x1aee) = (*(Struct_ov002_02165764 **) (arg0 + var6 * 4 + 0x22d0))->unknown_4_0_;
            }
            if (func_ov002_0215b720(arg0, *(short *) (arg0 + 0x1aee))) {
                *(int *) (arg0 + 0x1a88) = 2;
                return;
            }
            *(unsigned char *) (arg0 + 0xed8) = *(int *) (arg0 + 0x1a80);
            *(unsigned int *) (arg0 + 0x22ac) &= ~4;
            *(int *) (arg0 + 0x1a88) = 0;
            func_ov002_02157d40(arg0);
            return;
        }
        if (func_ov002_02161b48(arg0, 1)) {
            *(short *) (arg0 + 0x1ac2) = -1;
            *(short *) (arg0 + 0x1aee) = -1;
            *(int *) (arg0 + 0x1a80)   = 0x11;
            func_ov002_02156ff0((unsigned char *) arg0, 0x12);
            func_0205deb4((struct Struct_0205d81c *) OBJ, 0x12, 1);
            func_0205dee8((struct Struct_0205dee8 *) OBJ, 0x11);
            func_0205deb4((struct Struct_0205d81c *) OBJ, 0x11, 0);
            *(int *) (arg0 + 0x1a88) = 1;
            *(int *) (arg0 + 0x1a80) = 0x11;
            func_ov002_0215b9a4(arg0, *(int *) (arg0 + 0x1a80) & 0xff, 0);
            func_ov002_02161cf0(arg0);
        }
        return;
    }
    if (var0 != 2) {
        return;
    }
    int var7 = func_ov002_0215b7d0(arg0);
    if (var7 > 0) {
        *(unsigned char *) (arg0 + 0xed8) = *(int *) (arg0 + 0x1a80);
        *(unsigned int *) (arg0 + 0x22ac) &= ~4;
        *(int *) (arg0 + 0x1a88) = 0;
        func_ov002_02157d40(arg0);
        return;
    }
    if (var7 < 0) {
        *(short *) (arg0 + 0x1af0)         = 0x232d;
        *(short *) (arg0 + 0x1af2)         = -1;
        *(short *) (arg0 + 0x22b8)         = 0x232b;
        *(unsigned char *) (arg0 + 0x22ba) = 1;
        *(int *) (arg0 + 0x1a80)           = 0x29;
        *(int *) (arg0 + 0x1a84)           = 0x12;
        *(int *) (arg0 + 0x1a88)           = 0;
    }
}
#else
extern "C" ARM void func_ov002_02165764(char *arg0) {
    int var8 = *(int *) (arg0 + 0x1bc0);
    if (var8 == 0) {
        func_0205def8((struct Struct_0205def8 *) OBJ, 0, 0x29);
        *(short *) (arg0 + 0x1bfa) = 0;
        func_0205de24((struct Struct_0205de24_2 *) OBJ, 0, 2);
        func_ov002_02161cf0(arg0);
        func_ov002_0215eadc(arg0, 0);
        func_0205dee8((struct Struct_0205dee8 *) OBJ, 0x11);
        func_0205deb4((struct Struct_0205d81c *) OBJ, 0x11, 0);
        func_ov002_0215b9a4(arg0, *(int *) (arg0 + 0x1bb8) & 0xff, 0);
        *(int *) (arg0 + 0x1bc0) += 1;
        return;
    }
    if (var8 == 1) {
        *(unsigned int *) (arg0 + 0x247c) |= 4;
        short var9 = *(short *) (arg0 + 0x1bfa);
        func_ov002_02161b98(arg0);
        *(short *) (arg0 + 0x1bfa) = func_0205d794((struct Struct_0205c570 *) OBJ);
        if (var9 != *(short *) (arg0 + 0x1bfa)) {
            *(int *) (arg0 + 0x1bcc) = 1;
        }
        func_0205deb4((struct Struct_0205d81c *) OBJ, 0x12, 0);
        func_0205deb4((struct Struct_0205d81c *) OBJ, 0x13, 0);
        if (func_ov002_0216197c(*(int *) (arg0 + 0x1bb8) & 0xff,
                                                                  (struct Struct_0205d81c *) OBJ))
        {
            func_ov002_0215b9a4(arg0, *(int *) (arg0 + 0x1bb8) & 0xff, 0);
        }
        int var10  = g_keyManager.TestKeysPressed(0x601);
        int var11  = func_0205da38((struct Struct_0205da38*)OBJ, 0x14);
        int var12 = (var10 | var11) ? 1 : 0;
        if (var12) {
            *(unsigned char *) (arg0 + 0x1c84) = 3;
            char *var13 = func_0200ff94(GameState::GetInstance(), *(signed char *) (arg0 + 0x1c20));
            if (var13 == 0) {
                return;
            }
            if (**(int **) (var13 + 0x130) & 1) {
                *(short *) (arg0 + 0x1c28) = -1;
                *(short *) (arg0 + 0x1c2a) = -1;
                *(int *) (arg0 + 0x1bb8)   = 0x11;
                return;
            }
            func_0205eaa0((struct Struct_02108760 *) &data_02108760, 1, 0);
            *(short *) (arg0 + 0x1c26) = -1;
            short var14                    = *(short *) (arg0 + 0x1bfa);
            if (var14 >= 0 && var14 < 0x20) {
                *(short *) (arg0 + 0x1c26) = (*(Struct_ov002_02165764 **) (arg0 + var14 * 4 + 0x24a0))->unknown_4_0_;
            }
            if (func_ov002_0215b720(arg0, *(short *) (arg0 + 0x1c26))) {
                *(int *) (arg0 + 0x1bc0) = 2;
                return;
            }
            *(unsigned char *) (arg0 + 0xf80) = *(int *) (arg0 + 0x1bb8);
            *(unsigned int *) (arg0 + 0x247c) &= ~4;
            *(int *) (arg0 + 0x1bc0) = 0;
            func_ov002_02157d40(arg0);
            return;
        }
        if (func_ov002_02161b48(arg0, 1)) {
            *(short *) (arg0 + 0x1bfa) = -1;
            *(short *) (arg0 + 0x1c26) = -1;
            *(int *) (arg0 + 0x1bb8)   = 0x10;
            func_ov002_02156ff0((unsigned char *) arg0, 0x11);
            func_0205deb4((struct Struct_0205d81c *) OBJ, 0x11, 1);
            func_0205dee8((struct Struct_0205dee8 *) OBJ, 0x10);
            func_0205deb4((struct Struct_0205d81c *) OBJ, 0x10, 0);
            *(int *) (arg0 + 0x1bc0) = 1;
            *(int *) (arg0 + 0x1bb8) = 0x10;
            func_ov002_0215b9a4(arg0, *(int *) (arg0 + 0x1bb8) & 0xff, 0);
            func_ov002_02161cf0(arg0);
            func_0205def8((struct Struct_0205def8 *) OBJ, 1, 0x29);
        }
        return;
    }
    if (var8 != 2) {
        return;
    }
    int var15 = func_ov002_0215b7d0(arg0);
    if (var15 > 0) {
        *(unsigned char *) (arg0 + 0xf80) = *(int *) (arg0 + 0x1bb8);
        *(unsigned int *) (arg0 + 0x247c) &= ~4;
        *(int *) (arg0 + 0x1bc0) = 0;
        func_ov002_02157d40(arg0);
        return;
    }
    if (var15 < 0) {
        *(short *) (arg0 + 0x1c28)         = 0x232d;
        *(short *) (arg0 + 0x1c2a)         = -1;
        *(short *) (arg0 + 0x2488)         = 0x232b;
        *(unsigned char *) (arg0 + 0x248a) = 1;
        *(int *) (arg0 + 0x1bb8)           = 0x26;
        *(int *) (arg0 + 0x1bbc)           = 0x11;
        *(int *) (arg0 + 0x1bc0)           = 0;
    }
}
#endif

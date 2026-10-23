#include "GameState/GameState.h"
#include <globaldefs.h>
#include "Input/Input.h"

struct Struct_ov002_0215624c_11;
struct Struct_ov002_0215624c_15;
struct Struct_ov002_02164748;
struct Struct_ov002_02157d40_7;
struct Struct_ov002_02155960_2;
struct Struct_ov002_02164748_2;
struct Struct_ov002_02164748_3;
struct Struct_ov002_02164748_4;
struct Struct_ov002_02164748_5;
extern "C" void func_0205de24(struct Struct_ov002_0215624c_11 *arg0, unsigned char arg1,
                                                                        unsigned char arg2);
extern "C" int func_0205d794(struct Struct_ov002_0215624c_15 *arg0);
extern "C" int func_0205da38(struct Struct_ov002_02164748* arg0, int arg1);
extern "C" void func_0205eaa0(struct Struct_ov002_02157d40_7 *arg0, int arg1, int arg2);
extern "C" int func_ov002_02161b48(char *arg0, int arg1);
extern "C" void func_0205deb4(struct Struct_ov002_02155960_2 *arg0, int arg1, int arg2);
extern "C" void func_0205dee8(struct Struct_ov002_02164748_2 *arg0, int arg1);
extern "C" unsigned char *func_02053c6c(unsigned char *arg0);
extern "C" int func_ov002_02157108(void *arg0, int arg1);
extern "C" GameObject *func_0200ff1c(GameState *arg0, int arg1);
extern "C" void *func_02010828(GameState *arg0);
extern "C" void func_02083834(struct Struct_ov002_02164748_3 *arg0, int arg1);
extern "C" int func_02083994(struct Struct_ov002_02164748_4 *arg0, int arg1);
extern "C" void func_020a095c(struct Struct_ov002_02164748_5 *arg0, int arg1, int arg2);
extern "C" void func_ov002_02161cf0(char *arg0);
extern "C" void func_ov002_0215bba8(char *arg0);
extern "C" void func_ov002_0215a7b4(char *arg0, int arg1, short arg2, int arg3, int arg4);
extern "C" void func_ov002_0215b9a4(char *arg0, unsigned char arg1, int arg2);
extern "C" void func_ov017_021c9e00(int arg0, int arg1, int arg2, int arg3);
extern "C" char data_02108760[];

#if defined(jpn)
#define RG(u, j) (j)
#else
#define RG(u, j) (u)
#endif

#define FLAG(m) (**(int **) ((char *) (m) + 0x130) & 1)
#define SLOT(f, i) (*(short *) ((f) + (i) * 2 + 0x400 + 0x54))

// USA: func_ov002_02164748
extern "C" ARM void func_ov002_02164748(char *arg0) {
    int var0 = *(int *) (arg0 + RG(0x1000 + 0xbc0, 0x1a88));
    if (var0 == 0) {
        *(short *) (arg0 + RG(0x1b00 + 0xf4, 0x1abc)) = func_ov002_02157108(arg0, *(signed char *) (arg0 + RG(0x1c00 + 0x21, 0x1ae9))) & 7;
        func_0205de24((struct Struct_ov002_0215624c_11 *) (arg0 + RG(0x2c8 + 0xc00, 0xe20)), 0, 3);
        func_0205deb4((struct Struct_ov002_02155960_2 *) (arg0 + RG(0x2c8 + 0xc00, 0xe20)), RG(9, 0xa), 1);
        func_0205deb4((struct Struct_ov002_02155960_2 *) (arg0 + RG(0x2c8 + 0xc00, 0xe20)), RG(0xd, 0xe), 0);
        func_ov002_02161cf0(arg0);
        *(int *) (arg0 + RG(0x1000 + 0xbc8, 0x1a90)) = 1;
        func_ov002_0215bba8(arg0);
        *(int *) (arg0 + RG(0x1000 + 0xbc0, 0x1a88)) += 1;
    } else if (var0 == 1) {
        *(unsigned int *) (arg0 + RG(0x2000 + 0x47c, 0x22ac)) |= 4;
        short var1 = *(short *) (arg0 + RG(0x1b00 + 0xf4, 0x1abc));
        *(short *) (arg0 + RG(0x1b00 + 0xf4, 0x1abc)) =
            func_0205d794((struct Struct_ov002_0215624c_15 *) (arg0 + RG(0x2c8 + 0xc00, 0xe20)));
        if (var1 != *(short *) (arg0 + RG(0x1b00 + 0xf4, 0x1abc))) return;
        int var2 = g_keyManager.TestKeysPressed(0x601);
        int var3 = func_0205da38((struct Struct_ov002_02164748*)(arg0 + RG(0x2c8 + 0xc00, 0xe20)), 0x14);
        if ((var2 | var3) ? 1 : 0) {
            func_0205eaa0((struct Struct_ov002_02157d40_7 *) data_02108760, 1, 0);
            GameState *var4 = GameState::GetInstance();
            GameObject *var5 = func_0200ff1c(var4, *(signed char *) (arg0 + RG(0x1c00 + 0x21, 0x1ae9)));
            if (var5 == NULL) return;
            unsigned char *var6 = func_02053c6c((unsigned char *) var5);
            GameObject *var7     = func_0200ff1c(var4, *(signed char *) (arg0 + RG(0x1c00 + 0x20, 0x1ae8)));
            if (var7 == NULL && *(signed char *) (arg0 + RG(0x1c00 + 0x20, 0x1ae8)) != 4) return;
            int var8                          = 0;
            short var9                           = SLOT(var6, *(short *) (arg0 + RG(0x1b00 + 0xf4, 0x1abc)));
            *(short *) (arg0 + RG(0x1c00 + 0x24, 0x1aec)) = var9;
            if (var9 <= 0) {
                func_ov002_0215a7b4(arg0, *(signed char *) (arg0 + RG(0x1c00 + 0x20, 0x1ae8)), *(short *) (arg0 + RG(0x1c00 + 0x22, 0x1aea)),
                                    *(short *) (arg0 + RG(0x1b00 + 0xe8, 0x1ab0)), 0);
                func_02083834((struct Struct_ov002_02164748_3 *) var6,
                                                                 *(short *) (arg0 + RG(0x1c00 + 0x22, 0x1aea)));
                int var10 = *(signed char *) (arg0 + RG(0x1c00 + 0x20, 0x1ae8));
                if (var10 == 4) {
                    if (FLAG(var5))
                        *(short *) (arg0 + RG(0x1c00 + 0x28, 0x1af0)) = 0x236b;
                    else
                        *(short *) (arg0 + RG(0x1c00 + 0x28, 0x1af0)) = 0x236a;
                } else if (var10 == *(signed char *) (arg0 + RG(0x1c00 + 0x21, 0x1ae9))) {
                    if (FLAG(var7))
                        *(short *) (arg0 + RG(0x1c00 + 0x28, 0x1af0)) = 0x2364;
                    else
                        *(short *) (arg0 + RG(0x1c00 + 0x28, 0x1af0)) = 0x2363;
                } else {
                    if ((**(int **) ((char *) var7 + 0x130) & 1) && FLAG(var5))
                        *(short *) (arg0 + RG(0x1c00 + 0x28, 0x1af0)) = 0x2360;
                    else if (!(**(int **) ((char *) var7 + 0x130) & 1U) && FLAG(var5))
                        *(short *) (arg0 + RG(0x1c00 + 0x28, 0x1af0)) = 0x235f;
                    else if ((**(int **) ((char *) var7 + 0x130) & 1L) && !FLAG(var5))
                        *(short *) (arg0 + RG(0x1c00 + 0x28, 0x1af0)) = 0x235e;
                    else
                        *(short *) (arg0 + RG(0x1c00 + 0x28, 0x1af0)) = 0x235b;
                    var8 = 1;
                }
            } else if (var9 > 0) {
                var8 = 1;
                if (*(signed char *) (arg0 + RG(0x1c00 + 0x20, 0x1ae8)) == 4) {
                    void *var11 = func_02010828(var4);
                    func_ov002_0215a7b4(arg0, *(signed char *) (arg0 + RG(0x1c00 + 0x20, 0x1ae8)), *(short *) (arg0 + RG(0x1c00 + 0x22, 0x1aea)),
                                        *(short *) (arg0 + RG(0x1b00 + 0xe8, 0x1ab0)), 0);
                    func_020a095c((struct Struct_ov002_02164748_5 *) var11,
                                                                      *(short *) (arg0 + RG(0x1c00 + 0x24, 0x1aec)), var8);
                    SLOT(var6, *(short *) (arg0 + RG(0x1b00 + 0xf4, 0x1abc))) = *(short *) (arg0 + RG(0x1c00 + 0x22, 0x1aea));
                    if (FLAG(var5))
                        *(short *) (arg0 + RG(0x1c00 + 0x28, 0x1af0)) = 0x236d;
                    else
                        *(short *) (arg0 + RG(0x1c00 + 0x28, 0x1af0)) = 0x236c;
                } else {
                    GameObject *var12 = func_0200ff1c(var4, *(signed char *) (arg0 + RG(0x1c00 + 0x20, 0x1ae8)));
                    if (var12 == NULL) return;
                    unsigned char *var13                           = func_02053c6c((unsigned char *) var12);
                    SLOT(var13, *(short *) (arg0 + RG(0x1b00 + 0xe8, 0x1ab0))) = *(short *) (arg0 + RG(0x1c00 + 0x24, 0x1aec));
                    SLOT(var6, *(short *) (arg0 + RG(0x1b00 + 0xf4, 0x1abc))) = *(short *) (arg0 + RG(0x1c00 + 0x22, 0x1aea));
                    if (*(signed char *) (arg0 + RG(0x1c00 + 0x20, 0x1ae8)) == *(signed char *) (arg0 + RG(0x1c00 + 0x21, 0x1ae9))) {
                        if (FLAG(var12))
                            *(short *) (arg0 + RG(0x1c00 + 0x28, 0x1af0)) = 0x2364;
                        else
                            *(short *) (arg0 + RG(0x1c00 + 0x28, 0x1af0)) = 0x2363;
                    } else if (FLAG(var12) && FLAG(var5)) {
                        *(short *) (arg0 + RG(0x1c00 + 0x28, 0x1af0)) = 0x235d;
                    } else {
                        *(short *) (arg0 + RG(0x1c00 + 0x28, 0x1af0)) = 0x235c;
                    }
                }
            }
            if (var8) {
                int var14 = 0;
                int var15  = *(signed char *) (arg0 + RG(0x1c00 + 0x20, 0x1ae8));
                if (var15 != *(signed char *) (arg0 + RG(0x1c00 + 0x21, 0x1ae9)) &&
                    *(short *) (arg0 + RG(0x1c00 + 0x22, 0x1aea)) == *(short *) (arg0 + RG(0x1c00 + 0x24, 0x1aec)))
                    var14 = 1;
                if (*(short *) (arg0 + RG(0x1c00 + 0x22, 0x1aea)) == 0x570a && var15 != 4) {
                    short var16 = func_02083994(
                        (struct Struct_ov002_02164748_4 *) func_02053c6c((unsigned char *) var7), 0x570a);
                    if (var16 == 0 || (var16 == 1 && var14)) {
                        *(unsigned char *) (*(char **) ((char *) var7 + 0x130) + 8) = 0;
                        func_ov017_021c9e00(var7->obj3D_.unknown_4_, 0, 0, 1);
                    }
                }
                if (*(short *) (arg0 + RG(0x1c00 + 0x24, 0x1aec)) == 0x570a) {
                    short var17 = func_02083994((struct Struct_ov002_02164748_4 *) var6, 0x570a);
                    if (var17 == 0 || (var17 == 1 && var14)) {
                        *(unsigned char *) (*(char **) ((char *) var5 + 0x130) + 8) = 0;
                        func_ov017_021c9e00(var5->obj3D_.unknown_4_, 0, 0, 1);
                    }
                }
            }
            *(unsigned int *) (arg0 + RG(0x2000 + 0x47c, 0x22ac)) &= ~4;
            func_ov002_0215b9a4(arg0, *(int *) (arg0 + RG(0x1000 + 0xbb8, 0x1a80)) & 0xff, 1);
            *(short *) (arg0 + RG(0x1c00 + 0x2a, 0x1af2))          = -1;
            *(int *) (arg0 + RG(0x1000 + 0xbb8, 0x1a80))           = RG(0x26, 0x29);
            *(int *) (arg0 + RG(0x1000 + 0xbbc, 0x1a84))           = 5;
            *(int *) (arg0 + RG(0x1000 + 0xbc0, 0x1a88))           = 0;
            *(unsigned char *) (arg0 + RG(0x2000 + 0x478, 0x22a8)) = 1;
        } else if (func_ov002_02161b48(arg0, 1)) {
            *(short *) (arg0 + RG(0x1b00 + 0xf4, 0x1abc)) = -1;
            *(int *) (arg0 + RG(0x1000 + 0xbb8, 0x1a80))  = RG(9, 0xa);
            func_ov002_02161cf0(arg0);
            func_0205deb4((struct Struct_ov002_02155960_2 *) (arg0 + RG(0x2c8 + 0xc00, 0xe20)), RG(9, 0xa), 0);
            func_0205dee8((struct Struct_ov002_02164748_2 *) (arg0 + RG(0x2c8 + 0xc00, 0xe20)), RG(9, 0xa));
            *(int *) (arg0 + RG(0x1000 + 0xbc8, 0x1a90)) = 1;
            *(int *) (arg0 + RG(0x1000 + 0xbcc, 0x1a94)) = 1;
            func_ov002_0215b9a4(arg0, *(int *) (arg0 + RG(0x1000 + 0xbb8, 0x1a80)) & 0xff, 0);
        }
    }
}

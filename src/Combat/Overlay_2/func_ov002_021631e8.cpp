#include "GameState/GameState.h"
#include <globaldefs.h>
#include "Input/Input.h"

struct Struct_0205de24_2;
struct Struct_0205c570;
struct Struct_0205da38;
struct Struct_02108760;
struct Struct_0205d81c;
struct Struct_0201099c_10;
extern "C" void func_0205de24(struct Struct_0205de24_2 *arg0, unsigned char arg1,
                                                                        unsigned char arg2);
extern "C" int func_0205d794(struct Struct_0205c570 *arg0);
extern "C" int func_0205da38(struct Struct_0205da38* arg0, int arg1);
extern "C" void func_0205eaa0(struct Struct_02108760 *arg0, int arg1, int arg2);
extern "C" int func_ov002_02161b48(char *arg0, int arg1);
extern "C" void func_0205deb4(struct Struct_0205d81c *arg0, int arg1, int arg2);
extern "C" unsigned char *func_02053c6c(unsigned char *arg0);
extern "C" void func_ov002_0215ccc4(char *arg0);
extern "C" int func_ov002_0216364c(void *arg0);
extern "C" char *func_020dedd0(struct Struct_0201099c_10 *arg0, int arg1);
extern "C" void func_ov002_021575d4(char *arg0);
extern "C" int func_ov002_02157500(char *arg0, int, int);
extern "C" int func_ov002_0215b7d0(char* arg0);
extern "C" void func_ov002_02161cf0(char *arg0);
extern "C" void func_ov002_0215b814(char *arg0);
extern "C" int func_ov002_0215b720(char *arg0, int arg1);
extern "C" void func_ov002_02157634(char *arg0);
extern "C" void func_ov002_02156e90(char *arg0);
extern "C" char data_02108760[];

#if defined(jpn)
#define RG(u, j) (j)
#else
#define RG(u, j) (u)
#endif

static inline int inline_02000c9c_7(int arg0) {
    return (arg0 >= 0 && arg0 <= 3) ? 1 : 0;
}

// USA: func_ov002_021631e8
extern "C" ARM void func_ov002_021631e8(char *arg0) {
    int var0 = *(int *) (arg0 + RG(0x1000 + 0xbc0, 0x1a88));
    if (var0 == 0) {
        *(short *) (arg0 + RG(0x1b00 + 0xea, 0x1ab2)) = 0;
        GameObject *var1                     = GameState::GetInstance()->GetProtagonist();
        if (var1 == NULL) {
            *(short *) (arg0 + RG(0x1b00 + 0xea, 0x1ab2)) = 0;
        } else {
            *(short *) (arg0 + RG(0x1b00 + 0xea, 0x1ab2)) = *(short *) (func_02053c6c((unsigned char *) var1) + RG(0x900 + 0x5c, 0x8c4));
        }
        func_0205de24((struct Struct_0205de24_2 *) (arg0 + RG(0x2c8 + 0xc00, 0xe20)), 0, 2);
        func_ov002_02161cf0(arg0);
        func_ov002_0215ccc4(arg0);
        *(int *) (arg0 + RG(0x1000 + 0xbc0, 0x1a88)) += 1;
    } else if (var0 == 1) {
        *(unsigned int *) (arg0 + RG(0x2000 + 0x47c, 0x22ac)) |= 4;
        short var2 = *(short *) (arg0 + RG(0x1b00 + 0xea, 0x1ab2));
        *(short *) (arg0 + RG(0x1b00 + 0xea, 0x1ab2)) =
            func_0205d794((struct Struct_0205c570 *) (arg0 + RG(0x2c8 + 0xc00, 0xe20)));
        if (var2 != *(short *) (arg0 + RG(0x1b00 + 0xea, 0x1ab2))) return;
        int var3 = g_keyManager.TestKeysPressed(0x601);
        int var4 = func_0205da38((struct Struct_0205da38*)(arg0 + RG(0x2c8 + 0xc00, 0xe20)), 0x14);
        if ((var3 | var4) ? 1 : 0) {
            func_ov002_0215b814(arg0);
            *(unsigned char *) (arg0 + RG(0xf80, 0xed8)) = *(int *) (arg0 + RG(0x1000 + 0xbb8, 0x1a80));
            *(unsigned int *) (arg0 + RG(0x2000 + 0x47c, 0x22ac)) &= ~4;
            GameObject *var5 = GameState::GetInstance()->GetProtagonist();
            if (var5 != NULL) {
                short var6                                                        = *(short *) (arg0 + RG(0x1b00 + 0xea, 0x1ab2));
                *(short *) (func_02053c6c((unsigned char *) var5) + RG(0x900 + 0x5c, 0x8c4)) = var6;
            }
            switch (*(short *) (arg0 + RG(0x1b00 + 0xea, 0x1ab2))) {
                case 0:
                    func_0205eaa0((struct Struct_02108760 *) data_02108760, 1, 0);
                    int var7 = 0;
                    int var8 = *(signed char *) (arg0 + RG(0x1c00 + 0x20, 0x1ae8));
                    if (var8 >= 0 && var8 <= 3) var7 = 1;
                    if (var7 && func_ov002_0216364c(
                                  GameState::GetInstance()->GetPartyMemberByIndex(*(char *) (arg0 + RG(0x1c00 + 0x20, 0x1ae8)))))
                    {
                        *(short *) (arg0 + RG(0x1c00 + 0x28, 0x1af0)) = 0x7aa8;
                        *(short *) (arg0 + RG(0x1c00 + 0x2a, 0x1af2)) = -1;
                        *(int *) (arg0 + RG(0x1000 + 0xbb8, 0x1a80))  = RG(0x26, 0x29);
                        *(int *) (arg0 + RG(0x1000 + 0xbbc, 0x1a84))  = 5;
                        *(int *) (arg0 + RG(0x1000 + 0xbc0, 0x1a88))  = 0;
                        *(short *) (arg0 + RG(0x1b00 + 0xea, 0x1ab2)) = -1;
                        return;
                    }
                    {
                        char *var9 = func_020dedd0(
                            (struct Struct_0201099c_10 *) (arg0 + RG(0x3ec + 0x400, 0x750)), *(short *) (arg0 + RG(0x1c00 + 0x22, 0x1aea)));
                        if (var9 != NULL && func_ov002_0215b720(arg0, *(short *) (var9 + 0x14))) {
                            *(int *) (arg0 + RG(0x1000 + 0xbc0, 0x1a88)) = 2;
                            return;
                        }
                    }
                    *(short *) (arg0 + RG(0x1c00 + 0x28, 0x1af0))          = 0x232a;
                    *(short *) (arg0 + RG(0x1c00 + 0x2a, 0x1af2))          = 0x232b;
                    *(unsigned char *) (arg0 + RG(0x1000 + 0xc83, 0x1b47)) = 0;
                    *(unsigned char *) (arg0 + RG(0x1000 + 0xc85, 0x1b49)) &= ~1;
                    *(unsigned char *) (arg0 + RG(0x1000 + 0xc84, 0x1b48)) = 0;
                    func_ov002_021575d4(arg0);
                    func_ov002_02157634(arg0);
                    return;
                case 1:
                    func_0205eaa0((struct Struct_02108760 *) data_02108760, 1, 0);
                    *(int *) (arg0 + RG(0x1000 + 0xbb8, 0x1a80)) = RG(9, 0xa);
                    *(int *) (arg0 + RG(0x1000 + 0xbc0, 0x1a88)) = 0;
                    return;
                case 2: {
                    func_0205eaa0((struct Struct_02108760 *) data_02108760, 1, 0);
                    int var10 = func_ov002_02157500(
                        arg0, *(short *) (arg0 + RG(0x1b00 + 0xe8, 0x1ab0)), *(signed char *) (arg0 + RG(0x1c00 + 0x20, 0x1ae8)));
                    if (var10 != 0) {
                        *(unsigned char *) (arg0 + RG(0x1000 + 0xc32, 0x1afa)) = 0;
                        if (var10 == 2) *(unsigned char *) (arg0 + RG(0x1000 + 0xc32, 0x1afa)) = 1;
                        *(int *) (arg0 + RG(0x1000 + 0xbb8, 0x1a80))           = RG(0x26, 0x29);
                        *(int *) (arg0 + RG(0x1000 + 0xbbc, 0x1a84))           = 5;
                        *(short *) (arg0 + RG(0x1c00 + 0x28, 0x1af0))          = 0x2365;
                        *(short *) (arg0 + RG(0x1c00 + 0x2a, 0x1af2))          = -1;
                        *(int *) (arg0 + RG(0x1000 + 0xbc0, 0x1a88))           = 0;
                        *(unsigned char *) (arg0 + RG(0x1000 + 0xc2e, 0x1af6)) = 1;
                    } else {
                        *(int *) (arg0 + RG(0x1000 + 0xbb8, 0x1a80))  = RG(0x26, 0x29);
                        *(int *) (arg0 + RG(0x1000 + 0xbbc, 0x1a84))  = 5;
                        *(short *) (arg0 + RG(0x1c00 + 0x28, 0x1af0)) = 0x2368;
                        *(short *) (arg0 + RG(0x1c00 + 0x2a, 0x1af2)) = -1;
                        *(int *) (arg0 + RG(0x1000 + 0xbc0, 0x1a88))  = 0;
                    }
                    return;
                }
                case 3:
                    *(short *) (arg0 + RG(0x1b00 + 0xea, 0x1ab2)) = -1;
                    func_ov002_02156e90(arg0);
                    return;
            }
        } else if (func_ov002_02161b48(arg0, 1)) {
            *(short *) (arg0 + RG(0x1b00 + 0xea, 0x1ab2)) = -1;
            func_ov002_02156e90(arg0);
            func_0205deb4((struct Struct_0205d81c *) (arg0 + RG(0x2c8 + 0xc00, 0xe20)), 4, 1);
        }
    } else if (var0 == 2) {
        int var11 = func_ov002_0215b7d0(arg0);
        if (var11 > 0) {
            *(short *) (arg0 + RG(0x1c00 + 0x28, 0x1af0))          = 0x232a;
            *(short *) (arg0 + RG(0x1c00 + 0x2a, 0x1af2))          = 0x232b;
            *(unsigned char *) (arg0 + RG(0x1000 + 0xc83, 0x1b47)) = 0;
            *(unsigned char *) (arg0 + RG(0x1000 + 0xc85, 0x1b49)) &= ~1;
            *(unsigned char *) (arg0 + RG(0x1000 + 0xc84, 0x1b48)) = 0;
            func_ov002_021575d4(arg0);
            func_ov002_02157634(arg0);
        } else if (var11 < 0) {
            *(short *) (arg0 + RG(0x1c00 + 0x28, 0x1af0))          = 0x7918;
            *(short *) (arg0 + RG(0x1c00 + 0x2a, 0x1af2))          = -1;
            *(short *) (arg0 + RG(0x2400 + 0x88, 0x22b8))          = 0x7919;
            *(unsigned char *) (arg0 + RG(0x2000 + 0x48a, 0x22ba)) = 1;
            *(int *) (arg0 + RG(0x1000 + 0xbb8, 0x1a80))           = RG(0x26, 0x29);
            *(int *) (arg0 + RG(0x1000 + 0xbbc, 0x1a84))           = 5;
            *(int *) (arg0 + RG(0x1000 + 0xbc0, 0x1a88))           = 0;
        }
    }
}

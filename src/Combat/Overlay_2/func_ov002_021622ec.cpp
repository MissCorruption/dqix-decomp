#include "GameState/GameState.h"
#include <globaldefs.h>
#include <Resource/ResourceNodeInsertion.h>
#include "Input/Input.h"

#if defined(jpn)
#define RG(u, j) (j)
#define func_0205ec34 func_0205ff20
#else
#define RG(u, j) (u)
#endif

struct Struct_0205de24_2;
struct Struct_0205c570;
struct Struct_0205da38;
struct Struct_02108760;
extern "C" void func_0205de24(struct Struct_0205de24_2 *arg0, unsigned char arg1,
                                                                        unsigned char arg2);
extern "C" int func_0205d794(struct Struct_0205c570 *arg0);
extern "C" int func_0205da38(struct Struct_0205da38* arg0, int arg1);
extern "C" void func_0205eaa0(struct Struct_02108760 *arg0, int arg1, int arg2);
extern "C" int func_ov002_02161b48(char *arg0, int arg1);
extern "C" void func_ov002_0215bf34(char *arg0);
extern "C" int func_0200fb8c(int *arg0);
extern "C" int func_020100a8(GameState *arg0);
extern "C" int func_0206dfb0(int arg0, unsigned char *arg1, int arg2);
extern "C" char *func_0205ec34(void);
extern "C" void func_ov002_02161cf0(void *arg0);
extern "C" void func_ov002_0215c0f8(void *arg0);
extern "C" void func_ov002_02161a8c(int arg0);
extern "C" void func_ov017_021c05f4(int arg0, int arg1, int arg2, int arg3);
extern "C" void func_ov023_021dca88(void *arg0);
extern "C" void func_02012fe4(void);
extern "C" void func_02017c58(void);
extern "C" char data_02108760[];

static inline int inline_ov002_021622ec(char *arg0) {
    return (g_keyManager.TestKeysPressed(0x601) |
            func_0205da38((struct Struct_0205da38*)(arg0 + RG(0x2c8, 0) + RG(0xc00, 0xe20)), 0x14)) ? 1 : 0;
}

// USA: func_ov002_021622ec
extern "C" ARM void func_ov002_021622ec(char *arg0) {
    int var0 = *(int *) (arg0 + 0x1000 + RG(0xbc0, 0xa88));
    if (var0 == 0) {
        *(unsigned char *) (arg0 + 0x1000 + RG(0xc2f, 0xaf7)) = 0;
        *(short *) (arg0 + RG(0x1b00, 0x1a00) + RG(0xe0, 0xa8))          = 0;
        func_0205de24((struct Struct_0205de24_2 *) (arg0 + RG(0x2c8, 0) + RG(0xc00, 0xe20)), 0, 2);
        func_ov002_0215bf34(arg0);
        func_ov002_02161cf0(arg0);
        func_ov002_0215c0f8(arg0);
        *(int *) (arg0 + 0x1000 + RG(0xbc0, 0xa88)) += 1;
    } else if (var0 == 1) {
        *(unsigned int *) (arg0 + 0x2000 + RG(0x47c, 0x2ac)) |= 4;
        short var1 = *(short *) (arg0 + RG(0x1b00, 0x1a00) + RG(0xe0, 0xa8));
        *(short *) (arg0 + RG(0x1b00, 0x1a00) + RG(0xe0, 0xa8)) =
            func_0205d794((struct Struct_0205c570 *) (arg0 + RG(0x2c8, 0) + RG(0xc00, 0xe20)));
        if (var1 != *(short *) (arg0 + RG(0x1b00, 0x1a00) + RG(0xe0, 0xa8))) return;
        if (inline_ov002_021622ec(arg0) || *(unsigned char *) (arg0 + 0x1000 + RG(0xc2f, 0xaf7)) == 1) {
            GameState *var2                              = GameState::GetInstance();
            int var3                                      = func_0200fb8c((int *) var2);
            *(unsigned char *) (arg0 + 0x1000 + RG(0xc2f, 0xaf7)) = 0;
            switch (*(short *) (arg0 + RG(0x1b00, 0x1a00) + RG(0xe0, 0xa8))) {
                case 0:
                    *(int *) (arg0 + 0x1000 + RG(0xbb8, 0xa80)) = 3;
                    *(int *) (arg0 + 0x1000 + RG(0xbc0, 0xa88)) = 0;
                    break;
                case 1:
                    if (*(signed char *) (arg0 + RG(0x1c00, 0x1b00) + RG(0x73, 0x37)) != 1) {
                        *(int *) (arg0 + 0x1000 + RG(0xbb8, 0xa80)) = 2;
                        *(int *) (arg0 + 0x1000 + RG(0xbc0, 0xa88)) = 0;
                    } else {
                        func_ov017_021a120c((GameResources*)var3, 3, func_020100a8(var2));
                        *(int *) (arg0 + 0x1000 + RG(0xbb8, 0xa80)) = RG(0x2b, 0x2e);
                        *(int *) (arg0 + 0x1000 + RG(0xbc0, 0xa88)) = 0;
                        func_02012fe4();
                        func_02017c58();
                    }
                    break;
                case 2:
                    *(int *) (arg0 + 0x1000 + RG(0xbb8, 0xa80))  = RG(0xe, 0xf);
                    *(short *) (arg0 + RG(0x1b00, 0x1a00) + RG(0xf6, 0xbe)) = 0;
                    *(int *) (arg0 + 0x1000 + RG(0xbc0, 0xa88))  = 0;
                    break;
                case 3:
                    if (!(*(unsigned int *) (arg0 + 0x2000 + RG(0x47c, 0x2ac)) & 0x20)) return;
                    *(int *) (arg0 + 0x1000 + RG(0xbb8, 0xa80)) = RG(0x10, 0x11);
                    *(int *) (arg0 + 0x1000 + RG(0xbc0, 0xa88)) = 0;
                    break;
                case 4: {
                    char *var4 = func_0205ec34();
                    if (!func_0206dfb0((int) var4, (unsigned char *) var4 + 0x8c, 0x119a)) return;
                    func_ov017_021c05f4(var3, 1, 0, 0);
                    *(int *) (arg0 + 0x1000 + RG(0xbb8, 0xa80)) = RG(0x2b, 0x2e);
                    *(int *) (arg0 + 0x1000 + RG(0xbc0, 0xa88)) = 0;
                    break;
                }
                case 5:
                    func_ov002_02161a8c(var3);
                    *(int *) (arg0 + 0x1000 + RG(0xbb8, 0xa80)) = RG(0x15, 0x16);
                    *(int *) (arg0 + 0x1000 + RG(0xbc0, 0xa88)) = 0;
                    break;
            }
            func_0205eaa0((struct Struct_02108760 *) data_02108760, 1, 0);
        } else if (func_ov002_02161b48(arg0, 1)) {
            *(unsigned char *) (arg0 + 0x1000 + RG(0xc2f, 0xaf7)) = 0;
            if (*(unsigned int *) (arg0 + 0x2000 + RG(0x47c, 0x2ac)) & 1) {
                func_ov023_021dca88(arg0 + RG(0x50, 0x38));
            }
            *(int *) (arg0 + 0x1000 + RG(0xbb8, 0xa80)) = RG(0x2b, 0x2e);
        }
    }
}

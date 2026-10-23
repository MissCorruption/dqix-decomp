#include "GameState/GameState.h"
#include <globaldefs.h>
#include "Input/Input.h"

#if defined(jpn)
#define RG(u, j) (j)
#else
#define RG(u, j) (u)
#endif

struct Struct_0205de24_2;
struct Struct_0205c570;
struct Struct_0205da38;
struct Struct_02108760;
struct Struct_0201099c_10;
extern "C" void func_0205de24(struct Struct_0205de24_2 *arg0, unsigned char arg1,
                                                                        unsigned char arg2);
extern "C" int func_0205d794(struct Struct_0205c570 *arg0);
extern "C" int func_0205da38(struct Struct_0205da38* arg0, int arg1);
extern "C" void func_0205eaa0(struct Struct_02108760 *arg0, int arg1, int arg2);
extern "C" char *func_020dedd0(struct Struct_0201099c_10 *arg0, int arg1);
extern "C" int func_ov002_02161b48(char *arg0, int arg1);
extern "C" void func_ov002_02161798(char *arg0);
extern "C" void func_ov002_02161cf0(void *arg0);
extern "C" void func_ov002_02156e90(void *arg0);
extern "C" void func_ov002_0215a7b4(char *arg0, int arg1, short arg2, int arg3, int arg4);
extern "C" char data_02108760[];

// USA: func_ov002_0216bd34
extern "C" ARM void func_ov002_0216bd34(char *arg0) {
    char *var0  = (char *) GameState::GetInstance();
    int var1 = *(int *) (arg0 + 0x1000 + RG(0xbc0, 0xa88));
    if (var1 == 0) {
        *(short *) (arg0 + RG(0x1c00 + 0x14, 0x1a00 + 0xdc)) = 0;
        func_0205de24((struct Struct_0205de24_2 *) (arg0 + RG(0x2c8 + 0xc00, 0xe20)), 0, 2);
        func_ov002_02161cf0(arg0);
        func_ov002_02161798(arg0);
        *(signed char *) (arg0 + 0x1000 + RG(0xc20, 0xae8)) = *(int *) (arg0 + *(short *) (arg0 + RG(0x1b00 + 0xe6, 0x1a00 + 0xae)) * 4 + 0x1000 + RG(0xc3c, 0xb00));
        if (*(signed char *) (arg0 + RG(0x1c00 + 0x20, 0x1a00 + 0xe8)) < 0) {
            *(signed char *) (arg0 + 0x1000 + RG(0xc20, 0xae8)) = 4;
        }
        *(int *) (arg0 + 0x1000 + RG(0xbc0, 0xa88)) += 1;
    } else if (var1 == 1) {
        *(unsigned int *) (arg0 + 0x2000 + RG(0x47c, 0x2ac)) |= 4;
        *(short *) (arg0 + RG(0x1c00 + 0x14, 0x1a00 + 0xdc)) =
            func_0205d794((struct Struct_0205c570 *) (arg0 + RG(0x2c8 + 0xc00, 0xe20)));
        int var2 = *(signed char *) (arg0 + RG(0x1c00 + 0x20, 0x1a00 + 0xe8));
        int var3   = *(short *) (arg0 + RG(0x1c00 + 0x22, 0x1a00 + 0xea));
        int var4  = 0;
        int var5     = g_keyManager.TestKeysPressed(0x601);
        int var6     = func_0205da38((struct Struct_0205da38*)(arg0 + RG(0x2c8 + 0xc00, 0xe20)), 0x14);
        if ((var5 | var6) ? 1 : 0) {
            *(unsigned char *) (arg0 + RG(0xf80, 0xed8)) = *(int *) (arg0 + 0x1000 + RG(0xbb8, 0xa80));
            *(unsigned int *) (arg0 + 0x2000 + RG(0x47c, 0x2ac)) &= ~4;
            switch (*(short *) (arg0 + RG(0x1c00 + 0x14, 0x1a00 + 0xdc))) {
                case 0:
                    func_0205eaa0((struct Struct_02108760 *) data_02108760, 1, 0);
                    *(unsigned char *) (arg0 + 0x2000 + RG(0x487, 0x2b7)) = 1;
                    if (func_020dedd0((struct Struct_0201099c_10 *) (arg0 + RG(0x3ec + 0x400, 0x750)),
                                                                          (short) var3) == NULL)
                        break;
#if defined(jpn)
                    *(unsigned short *) (var0 + 0x6f00 + 0x9c) = var3;
#else
                    *(unsigned short *) (var0 + 0x7100 + 0xdc) = var3;
                    *(unsigned short *) (var0 + 0x7f00 + 0x58) = var3;
#endif
                    if (var3 <= 0) break;
                    *(short *) (var0 + RG(0x7100 + 0xde, 0x6f00 + 0x9e)) = var2;
                    if (var2 < 0) break;
                    *(short *) (var0 + RG(0x7100 + 0xe0, 0x6f00 + 0xa0)) = *(short *) (arg0 + RG(0x1b00 + 0xe8, 0x1a00 + 0xb0));
                    if (*(short *) (arg0 + RG(0x1b00 + 0xe8, 0x1a00 + 0xb0)) < 0) break;
                    if (*(unsigned char *) (arg0 + 0x2000 + RG(0x486, 0x2b6)) != 0) {
                        if (var2 >= 0 && var2 <= 3) {
                            func_ov002_0215a7b4(arg0, var2, var3, *(short *) (arg0 + RG(0x1b00 + 0xe8, 0x1a00 + 0xb0)), 0);
                        } else {
                            func_ov002_0215a7b4(arg0, 4, var3, *(short *) (arg0 + RG(0x1b00 + 0xe8, 0x1a00 + 0xb0)), 0);
                        }
                    }
                    var4 = 1;
                    break;
                case 1:
                    func_0205eaa0((struct Struct_02108760 *) data_02108760, 1, 0);
                    *(short *) (arg0 + RG(0x1c00 + 0x14, 0x1a00 + 0xdc)) = -1;
                    func_ov002_02156e90(arg0);
                    var4 = 1;
                    break;
            }
        } else if (func_ov002_02161b48(arg0, 1)) {
            *(short *) (arg0 + RG(0x1c00 + 0x14, 0x1a00 + 0xdc)) = 0;
            var4                              = 1;
            func_ov002_02156e90(arg0);
        }
        if (!var4) {
            char *var7                                 = (char *) GameState::GetInstance();
#if defined(jpn)
            *(unsigned short *) (var7 + 0x6f00 + 0x9c) = 0;
#else
            *(unsigned short *) (var7 + 0x7100 + 0xdc) = 0;
            *(unsigned short *) (var7 + 0x7f00 + 0x58) = 0;
#endif
            *(short *) (var7 + RG(0x7100 + 0xde, 0x6f00 + 0x9e))          = -1;
            *(short *) (var7 + RG(0x7100 + 0xe0, 0x6f00 + 0xa0))          = -1;
        }
    }
}

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
struct Struct_0205d81c;
struct Struct_0205bcdc;
struct Struct_0204c610;
extern "C" void func_0205de24(struct Struct_0205de24_2 *arg0, unsigned char arg1,
                                                                        unsigned char arg2);
extern "C" int func_0205d794(struct Struct_0205c570 *arg0);
extern "C" int func_0205da38(struct Struct_0205da38* arg0, int arg1);
extern "C" void func_0205eaa0(struct Struct_02108760 *arg0, int arg1, int arg2);
extern "C" int func_ov002_02161b48(char *arg0, int arg1);
extern "C" char *func_0205d81c(struct Struct_0205d81c *arg0, int arg1);
extern "C" void func_0204c610(struct Struct_0204c610 *arg0, int arg1, short *arg2, short *arg3, short *arg4, short *arg5);
extern "C" void func_0205bcdc(struct Struct_0205bcdc *arg0, int arg1);
extern "C" void func_ov002_0215b268(char *arg0);
extern "C" void func_0205bb04(void *arg0, int arg1);
extern "C" void func_ov002_02161cf0(void *arg0);
extern "C" void func_ov002_02160c68(void *arg0);
extern "C" void func_ov002_02156e90(void *arg0);
extern "C" void func_ov002_0215b9a4(char *arg0, unsigned char arg1, int arg2);
extern "C" char data_02108760[];

// USA: func_ov002_02169bb0
extern "C" ARM void func_ov002_02169bb0(char *arg0) {
    int var0 = *(int *) (arg0 + 0x1000 + RG(0xbc0, 0xa88));
    if (var0 == 0) {
        *(short *) (arg0 + RG(0x1c00 + 0xe, 0x1a00 + 0xd6)) = 0;
        *(unsigned int *) (arg0 + 0x2000 + RG(0x47c, 0x2ac)) &= ~4;
        func_0205de24((struct Struct_0205de24_2 *) (arg0 + RG(0x2c8 + 0xc00, 0xe20)), 0, 2);
        func_ov002_02161cf0(arg0);
        func_ov002_02160c68(arg0);
        *(int *) (arg0 + 0x1000 + RG(0xbc0, 0xa88)) += 1;
    } else if (var0 == 1) {
        *(unsigned int *) (arg0 + 0x2000 + RG(0x47c, 0x2ac)) |= 4;
        *(short *) (arg0 + RG(0x1c00 + 0xe, 0x1a00 + 0xd6)) =
            func_0205d794((struct Struct_0205c570 *) (arg0 + RG(0x2c8 + 0xc00, 0xe20)));
        unsigned char *var1[2];
        var1[0] = (unsigned char *) (arg0 + RG(0x2c + 0x1c00, 0x2f4 + 0x1800));
        var1[1] = (unsigned char *) (arg0 + RG(0x2d + 0x1c00, 0xf5 + 0x1a00));
        if (g_touchInput.pressed_ != 0) {
            int var2, var3;
            short var4, var5, var6, var7;
            g_touchInput.GetTouchPoint(&var2, &var3);
            char *var8 = func_0205d81c((struct Struct_0205d81c *) (arg0 + RG(0x2c8 + 0xc00, 0xe20)), RG(0x23, 0x26));
            if (var8 != NULL) {
                short var9 = 3;
                for (unsigned char var10 = 0; var10 < 2; var10++) {
                    for (unsigned char var11 = 1; var11 <= 5; var11++) {
                        short var12 = *(short *) (var8 + 0xac);
                        short var13 = *(short *) (var8 + 0xae);
                        func_0204c610((struct Struct_0204c610 *) var8, var9++, &var4, &var5, &var6, &var7);
                        var4 += (short) (var12 * 8);
                        var5 += (short) (var13 * 8);
                        if (var2 >= var4 && var4 + var6 > var2 && var3 >= var5 && var5 + var7 > var3) {
                            *(short *) (arg0 + RG(0x1c00 + 0xe, 0x1a00 + 0xd6)) = var10;
                            *var1[var10]                         = var11;
                            int var14                          = *(short *) (arg0 + RG(0x1c00 + 0xe, 0x1a00 + 0xd6));
                            char *var15                       = arg0 + RG(0x2c8 + 0xc00, 0xe20);
                            func_0205bcdc((struct Struct_0205bcdc *) (var15 + 4), var14);
                            func_0205bb04(var15 + 0x54, var14);
                            func_ov002_0215b9a4(arg0, RG(0x23, 0x26), 0);
                            func_ov002_0215b268(arg0);
                            return;
                        }
                    }
                }
            }
        } else {
            short var16 = *(short *) (arg0 + RG(0x1c00 + 0xe, 0x1a00 + 0xd6));
            if (var16 != 2) {
                unsigned char *var17 = var1[var16];
                int var18            = 0;
                if (g_keyManager.TestKeysPressed(0x20)) {
                    var18 = -1;
                } else if (g_keyManager.TestKeysPressed(0x10)) {
                    var18 = 1;
                }
                if (var18 != 0) {
                    *var17 += var18;
                    if (*var17 == 0) *var17 = 1;
                    if (*var17 > 5) *var17 = 5;
                    func_ov002_0215b9a4(arg0, RG(0x23, 0x26), 0);
                    func_ov002_0215b268(arg0);
                    return;
                }
            }
        }
        int var19 = g_keyManager.TestKeysPressed(0x601);
        int var20 = func_0205da38((struct Struct_0205da38*)(arg0 + RG(0x2c8 + 0xc00, 0xe20)), 0x14);
        if (((var19 | var20) ? 1 : 0) && *(short *) (arg0 + RG(0x1c00 + 0xe, 0x1a00 + 0xd6)) == 2) {
            func_0205eaa0((struct Struct_02108760 *) data_02108760, 1, 0);
            *(unsigned int *) (arg0 + 0x2000 + RG(0x47c, 0x2ac)) &= ~4;
            func_ov002_02156e90(arg0);
        } else if (func_ov002_02161b48(arg0, 1)) {
            *(unsigned int *) (arg0 + 0x2000 + RG(0x47c, 0x2ac)) &= ~4;
            func_ov002_02156e90(arg0);
        }
    }
}

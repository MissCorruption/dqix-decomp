#include "GameState/GameState.h"
#include <globaldefs.h>
#include <Resource/ResourceNodeInsertion.h>
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
extern "C" void func_0205de24(struct Struct_0205de24_2 *arg0, unsigned char arg1,
                                                                        unsigned char arg2);
extern "C" int func_0205d794(struct Struct_0205c570 *arg0);
extern "C" int func_0205da38(struct Struct_0205da38* arg0, int arg1);
extern "C" void func_0205eaa0(struct Struct_02108760 *arg0, int arg1, int arg2);
extern "C" int func_0200fb8c(int *arg0);
extern "C" int func_ov002_02161b48(char *arg0, int arg1);
extern "C" void func_ov002_02161cf0(void *arg0);
extern "C" void func_ov002_0215c2c8(void *arg0);
extern "C" void func_ov002_02156e90(void *arg0);
extern "C" void func_02012fe4(void);
extern "C" void func_02017c58(void);
extern "C" char data_02108760[];

static inline int inline_ov002_0216257c(char *arg0, int arg1) {
    return *(int *) (arg0 + arg1 * 4 + 0x1000 + RG(0xc54, 0xb18));
}
static inline int inline_ov002_0216257c_2(int arg0) {
    return (arg0 >= 0 && arg0 <= 3) ? 1 : 0;
}

// USA: func_ov002_0216257c
extern "C" ARM void func_ov002_0216257c(char *arg0) {
    int var0 = *(int *) (arg0 + 0x1000 + RG(0xbc0, 0xa88));
    if (var0 == 0) {
        *(short *) (arg0 + RG(0x1b00, 0x1a00) + RG(0xe2, 0xaa))        = 0;
        *(signed char *) (arg0 + 0x1000 + RG(0xc20, 0xae8)) = inline_ov002_0216257c(arg0, *(short *) (arg0 + RG(0x1b00, 0x1a00) + RG(0xe2, 0xaa)));
        func_0205de24((struct Struct_0205de24_2 *) (arg0 + RG(0x2c8, 0) + RG(0xc00, 0xe20)), 0, 2);
        func_ov002_02161cf0(arg0);
        func_ov002_0215c2c8(arg0);
        *(int *) (arg0 + 0x1000 + RG(0xbc0, 0xa88)) += 1;
    } else if (var0 == 1) {
        *(unsigned int *) (arg0 + 0x2000 + RG(0x47c, 0x2ac)) |= 4;
        *(short *) (arg0 + RG(0x1b00, 0x1a00) + RG(0xe2, 0xaa)) =
            func_0205d794((struct Struct_0205c570 *) (arg0 + RG(0x2c8, 0) + RG(0xc00, 0xe20)));
        int var1 = g_keyManager.TestKeysPressed(0x601);
        int var2 = func_0205da38((struct Struct_0205da38*)(arg0 + RG(0x2c8, 0) + RG(0xc00, 0xe20)), 0x14);
        if ((var1 | var2) ? 1 : 0) {
            *(signed char *) (arg0 + 0x1000 + RG(0xc20, 0xae8)) =
                *(signed char *) (arg0 + *(short *) (arg0 + RG(0x1b00, 0x1a00) + RG(0xe2, 0xaa)) + RG(0x1c00, 0x1b00) + RG(0x6e, 0x32));
            int var3 = *(signed char *) (arg0 + RG(0x1c00, 0x1a00) + RG(0x20, 0xe8));
            if (!inline_ov002_0216257c_2(var3)) return;
            *(unsigned int *) (arg0 + 0x2000 + RG(0x47c, 0x2ac)) &= ~4;
            func_0205eaa0((struct Struct_02108760 *) data_02108760, 1, 0);
            func_ov017_021a120c((GameResources*)func_0200fb8c((int*)GameState::GetInstance()), 3, var3);
            *(int *) (arg0 + 0x1000 + RG(0xbb8, 0xa80)) = RG(0x2b, 0x2e);
            *(int *) (arg0 + 0x1000 + RG(0xbc0, 0xa88)) = 0;
            func_02012fe4();
            func_02017c58();
        } else if (func_ov002_02161b48(arg0, 1)) {
            *(short *) (arg0 + RG(0x1b00, 0x1a00) + RG(0xe2, 0xaa)) = -1;
            func_ov002_02156e90(arg0);
        }
    }
}

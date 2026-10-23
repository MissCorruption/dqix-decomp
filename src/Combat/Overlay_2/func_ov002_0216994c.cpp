#include <globaldefs.h>
#include "Input/Input.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#define RG(u, j) (j)
#define OBJ (arg0 + 0xe20)
#define APPLY(s, k, t) func_0205d5d0(s, k, t, 1)
#else
#define RG(u, j) (u)
#define OBJ (arg0 + 0x2c8 + 0xc00)
#define APPLY(s, k, t) func_0205d5d0(s, k, t, 1, 0)
#endif

struct Struct_ov002_0215624c_11;
struct Struct_ov002_0215624c_15;
struct Struct_ov002_02155960_2;
struct Struct_ov002_02157d40_7;
struct Struct_ov002_0215bba8_3;

extern "C" int func_ov002_0215a9f0(void *arg0);
extern "C" char *func_0205ec34();
extern "C" short func_0206e3e8(int arg0, int arg1);
extern "C" void func_0205de24(struct Struct_ov002_0215624c_11 *arg0, unsigned char arg1,
                                                                        unsigned char arg2);
extern "C" void func_ov002_02161cf0(char *arg0);
extern "C" void func_ov002_021609d4(char *arg0);
extern "C" void func_ov002_02161b98(char *arg0);
extern "C" int func_0205d794(struct Struct_ov002_0215624c_15 *arg0);
extern "C" void func_ov002_0215bba8(char *arg0);
struct Struct_ov002_02164748;
extern "C" int func_0205da38(struct Struct_ov002_02164748* arg0, int arg1);
extern "C" int func_ov002_0215a9b4(void *arg0, short arg1);
extern "C" int func_0206e3d4(int arg0, int arg1);
extern "C" char *func_0205d81c(struct Struct_ov002_02155960_2 *arg0, int arg1);
extern "C" void func_0205eaa0(struct Struct_ov002_02157d40_7 *arg0, int arg1, int arg2);
extern "C" void func_ov002_0215a9cc(void *arg0, int arg1);
extern "C" char *func_020421a0();
extern "C" void *memset(void *arg0, int arg1, unsigned int arg2);
extern "C" void func_ov002_021607cc(void *arg0, void *arg1, int arg2);
#if defined(jpn)
struct Struct_ov002_02155960_3;
extern "C" void func_0205def8(struct Struct_ov002_02155960_3 *arg0, int arg1, int arg2);
extern "C" int func_0205d5d0(struct Struct_ov002_0215bba8_3 *, int, int, int);
#else
extern "C" int func_0205d5d0(struct Struct_ov002_0215bba8_3 *, int, int, int, unsigned char);
#endif
extern "C" void func_ov002_02156e90(void *arg0);
extern "C" int func_ov002_02161b48(char *arg0, int arg1);

extern "C" char data_02108760;

struct Struct_ov002_0216994c {
    char unknown_0_[0x68];
    int unknown_68_;
};

// USA: func_ov002_0216994c
extern "C" ARM void func_ov002_0216994c(char *arg0) {
    int var0 = *(int *) (arg0 + RG(0x1bc0, 0x1a88));
    if (var0 == 0) {
        *(unsigned int *) (arg0 + RG(0x247c, 0x22ac)) &= ~4;
        int var1                    = func_ov002_0215a9f0(arg0);
        *(short *) (arg0 + RG(0x1c0c, 0x1ad4)) = func_0206e3e8((int) func_0205ec34(), var1) - 1;
        if (*(short *) (arg0 + RG(0x1c0c, 0x1ad4)) < 0) {
            *(short *) (arg0 + RG(0x1c0c, 0x1ad4)) = 0;
        }
        func_0205de24((struct Struct_ov002_0215624c_11 *) OBJ, 0, 3);
        func_ov002_02161cf0(arg0);
        func_ov002_021609d4(arg0);
        *(int *) (arg0 + RG(0x1bc0, 0x1a88)) += 1;
        return;
    }
    if (var0 != 1) {
        return;
    }
#if defined(jpn)
    func_0205def8((struct Struct_ov002_02155960_3 *) OBJ, 0, 0x22);
    func_0205def8((struct Struct_ov002_02155960_3 *) OBJ, 0, 0x23);
#endif
    *(unsigned int *) (arg0 + RG(0x247c, 0x22ac)) |= 4;
    func_ov002_02161b98(arg0);
    *(short *) (arg0 + RG(0x1c0c, 0x1ad4)) =
        func_0205d794((struct Struct_ov002_0215624c_15 *) OBJ);
    struct Struct_ov002_0216994c *var2 = (struct Struct_ov002_0216994c *) OBJ + 1;
    var2--;
    int var3 = var2->unknown_68_;
    if (*(unsigned char *) (arg0 + RG(0x2484, 0x22b4)) != var3) {
        func_ov002_0215bba8(arg0);
    }
    int var4  = g_keyManager.TestKeysPressed(0x601);
    int var5  = func_0205da38((struct Struct_ov002_02164748*)OBJ, 0x14);
    int var6 = (var4 | var5) ? 1 : 0;
    if (var6) {
        int var7 = func_ov002_0215a9b4(arg0, *(short *) (arg0 + RG(0x1c0c, 0x1ad4)));
        int var8  = func_0206e3d4((int) func_0205ec34(), var7);
        int var9  = 1;
        int var10   = var9;
        if (var8 >= 0 && *(short *) (arg0 + RG(0x1c0c, 0x1ad4)) != 0x1f) {
            var10 = 0;
            if (*(unsigned int *) (arg0 + RG(0x2480, 0x22b0)) & (var9 << (var8 - 1))) {
                var10 = var9;
            }
        }
        if (!var10) {
            return;
        }
        *(unsigned int *) (arg0 + RG(0x247c, 0x22ac)) &= ~4;
        unsigned char *var11 = (unsigned char *) func_0205d81c(
            (struct Struct_ov002_02155960_2 *) OBJ, RG(0x21, 0x24));
        if (var11 == 0) {
            return;
        }
        func_0205eaa0((struct Struct_ov002_02157d40_7 *) &data_02108760, 1, 0);
        func_ov002_0215a9cc(arg0, var8);
        void *var12 = *(void **) (func_020421a0() + RG(0x5c, 0x28));
        memset(var12, 0, RG(0x960, 0x800));
        func_ov002_021607cc(arg0, var12, (var11[0xc5] & 2) ? 1 : 0);
        APPLY((struct Struct_ov002_0215bba8_3 *) OBJ, RG(0x21, 0x24), (int) var12);
        func_ov002_02156e90(arg0);
        return;
    }
    if (func_ov002_02161b48(arg0, 1)) {
        *(unsigned int *) (arg0 + RG(0x247c, 0x22ac)) &= ~4;
        *(short *) (arg0 + RG(0x1c0c, 0x1ad4)) = 0;
        func_ov002_02156e90(arg0);
    }
}

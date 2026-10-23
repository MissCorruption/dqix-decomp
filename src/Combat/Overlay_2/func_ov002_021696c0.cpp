#include <globaldefs.h>
#include "Input/Input.h"

struct Struct_ov002_0215624c_11;
struct Struct_ov002_0215624c_15;
struct Struct_ov002_02164748;
struct Struct_ov002_02157d40_7;
struct Struct_ov002_02155960_3;
extern "C" void func_0205de24(struct Struct_ov002_0215624c_11 *arg0, unsigned char arg1,
                                                                        unsigned char arg2);
extern "C" void func_0205def8(struct Struct_ov002_02155960_3 *arg0, int arg1, int arg2);
extern "C" int func_0205d794(struct Struct_ov002_0215624c_15 *arg0);
extern "C" int func_0205da38(struct Struct_ov002_02164748* arg0, int arg1);
extern "C" void func_0205eaa0(struct Struct_ov002_02157d40_7 *arg0, int arg1, int arg2);
extern "C" int func_ov002_02161b48(char *arg0, int arg1);
extern "C" void func_ov002_0215aa5c(char *arg0);
extern "C" void func_ov002_0215aa14(char *arg0);
extern "C" void func_ov002_02160734(unsigned char *arg0);
extern "C" void func_ov002_02161cf0(void *arg0);
extern "C" void func_ov002_02156e90(void *arg0);
extern "C" void func_ov002_0215f3a0(void *arg0);
extern "C" char data_02108760[];

#if defined(jpn)
#define OBJ (arg0 + 0xe20)
#else
#define OBJ (arg0 + 0x2c8 + 0xc00)
#endif

static inline int inline_ov002_021696c0(char *arg0) {
    return (g_keyManager.TestKeysPressed(0x601) |
            func_0205da38((struct Struct_ov002_02164748*)OBJ, 0x14)) ? 1 : 0;
}

#if defined(jpn)
struct Struct_ov002_02155960_2;
extern "C" void func_0205deb4(struct Struct_ov002_02155960_2 *arg0, int arg1, int arg2);

// USA: func_ov002_021696c0
extern "C" ARM void func_ov002_021696c0(char *arg0) {
    int var0 = *(int *) (arg0 + 0x1000 + 0xa88);
    if (var0 == 0) {
        func_ov002_0215aa5c(arg0);
        *(unsigned int *) (arg0 + 0x2000 + 0x2ac) &= ~4;
        func_0205def8((struct Struct_ov002_02155960_3 *) OBJ, 0, 0x2c);
        *(short *) (arg0 + 0x1a00 + 0xd2) = 0;
        func_0205de24((struct Struct_ov002_0215624c_11 *) OBJ, 0, 2);
        func_ov002_02161cf0(arg0);
        func_ov002_02160734((unsigned char *) arg0);
        (*(int *) (arg0 + 0x1000 + 0xa88))++;
    } else if (var0 == 1) {
        func_0205def8((struct Struct_ov002_02155960_3 *) OBJ, 1, 0x22);
        func_0205def8((struct Struct_ov002_02155960_3 *) OBJ, 1, 0x23);
        func_0205deb4((struct Struct_ov002_02155960_2 *) OBJ, 0x22, 0);
        func_0205deb4((struct Struct_ov002_02155960_2 *) OBJ, 0x23, 0);
        *(unsigned int *) (arg0 + 0x2000 + 0x2ac) |= 4;
        *(short *) (arg0 + 0x1a00 + 0xd2) =
            func_0205d794((struct Struct_ov002_0215624c_15 *) OBJ);
        if (inline_ov002_021696c0(arg0) && *(short *) (arg0 + 0x1a00 + 0xd2) == 7) {
            func_ov002_0215aa14(arg0);
            func_0205eaa0((struct Struct_ov002_02157d40_7 *) data_02108760, 1, 0);
            *(int *) (arg0 + 0x1000 + 0xa80) = 0x16;
            *(short *) (arg0 + 0x1a00 + 0xd2) = 0;
            *(unsigned int *) (arg0 + 0x2000 + 0x2ac) &= ~4;
            func_ov002_02156e90(arg0);
            func_0205def8((struct Struct_ov002_02155960_3 *) OBJ, 1, 0x2c);
        } else if (inline_ov002_021696c0(arg0)) {
            *(unsigned char *) (arg0 + 0xed8) = *(int *) (arg0 + 0x1000 + 0xa80);
            *(unsigned int *) (arg0 + 0x2000 + 0x2ac) &= ~4;
            func_0205eaa0((struct Struct_ov002_02157d40_7 *) data_02108760, 1, 0);
            *(int *) (arg0 + 0x1000 + 0xa80) = 0x25;
            *(int *) (arg0 + 0x1000 + 0xa88) = 0;
        } else if (func_ov002_02161b48(arg0, 1)) {
            func_ov002_0215aa14(arg0);
            *(int *) (arg0 + 0x1000 + 0xa80) = 0x16;
            *(short *) (arg0 + 0x1a00 + 0xd2) = 0;
            *(unsigned int *) (arg0 + 0x2000 + 0x2ac) &= ~4;
            func_ov002_02156e90(arg0);
            func_0205def8((struct Struct_ov002_02155960_3 *) OBJ, 1, 0x2c);
        }
    }
}
#else
// USA: func_ov002_021696c0
extern "C" ARM void func_ov002_021696c0(char *arg0) {
    int var1 = *(int *) (arg0 + 0x1000 + 0xbc0);
    if (var1 == 0) {
        *(unsigned int *) (arg0 + 0x2000 + 0x47c) &= ~4;
        func_0205def8((struct Struct_ov002_02155960_3 *) (arg0 + 0x2c8 + 0xc00), 0, 1);
        func_0205def8((struct Struct_ov002_02155960_3 *) (arg0 + 0x2c8 + 0xc00), 0, 0x29);
        func_ov002_02156e90(arg0);
        *(int *) (arg0 + 0x1000 + 0xbb8) = 0x21;
        *(int *) (arg0 + 0x1000 + 0xbc0) = 0x32;
    } else if (var1 == 0x32) {
        func_ov002_0215aa5c(arg0);
        *(short *) (arg0 + 0x1c00 + 0xa) = 0;
        func_0205de24((struct Struct_ov002_0215624c_11 *) (arg0 + 0x2c8 + 0xc00), 0, 2);
        func_ov002_02161cf0(arg0);
        func_ov002_02160734((unsigned char *) arg0);
        *(int *) (arg0 + 0x1000 + 0xbc0) = 1;
    } else if (var1 == 1) {
        *(unsigned int *) (arg0 + 0x2000 + 0x47c) |= 4;
        *(short *) (arg0 + 0x1c00 + 0xa) =
            func_0205d794((struct Struct_ov002_0215624c_15 *) (arg0 + 0x2c8 + 0xc00));
        if (inline_ov002_021696c0(arg0) && *(short *) (arg0 + 0x1c00 + 0xa) == 7) {
            func_ov002_0215aa14(arg0);
            func_0205eaa0((struct Struct_ov002_02157d40_7 *) data_02108760, 1, 0);
            *(unsigned int *) (arg0 + 0x2000 + 0x47c) &= ~4;
            func_ov002_02156e90(arg0);
            *(int *) (arg0 + 0x1000 + 0xbb8) = 0x21;
            *(int *) (arg0 + 0x1000 + 0xbc0) = 0x64;
        } else if (inline_ov002_021696c0(arg0)) {
            *(unsigned char *) (arg0 + 0xf80) = *(int *) (arg0 + 0x1000 + 0xbb8);
            *(unsigned int *) (arg0 + 0x2000 + 0x47c) &= ~4;
            func_0205eaa0((struct Struct_ov002_02157d40_7 *) data_02108760, 1, 0);
            *(int *) (arg0 + 0x1000 + 0xbb8) = 0x22;
            *(int *) (arg0 + 0x1000 + 0xbc0) = 0;
        } else if (func_ov002_02161b48(arg0, 1)) {
            func_ov002_0215aa14(arg0);
            *(unsigned int *) (arg0 + 0x2000 + 0x47c) &= ~4;
            func_ov002_02156e90(arg0);
            *(int *) (arg0 + 0x1000 + 0xbb8) = 0x21;
            *(int *) (arg0 + 0x1000 + 0xbc0) = 0x64;
        }
    } else if (var1 == 0x64) {
        *(short *) (arg0 + 0x1c00 + 0xa) = 0;
        *(int *) (arg0 + 0x1000 + 0xbb8) = 0x15;
        func_0205de24((struct Struct_ov002_0215624c_11 *) (arg0 + 0x2c8 + 0xc00), 0, 2);
        func_ov002_02161cf0(arg0);
        func_ov002_0215f3a0(arg0);
        *(int *) (arg0 + 0x1000 + 0xbc0) = 1;
    }
}
#endif

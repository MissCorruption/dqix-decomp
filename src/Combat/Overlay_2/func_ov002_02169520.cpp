#include <globaldefs.h>
#include "Input/Input.h"

struct Struct_ov002_0215624c_11;
struct Struct_ov002_0215624c_15;
struct Struct_ov002_02164748;
struct Struct_ov002_02157d40_7;

extern "C" void func_0205de24(struct Struct_ov002_0215624c_11 *arg0, unsigned char arg1,
                                                                        unsigned char arg2);
extern "C" int func_0205d794(struct Struct_ov002_0215624c_15 *arg0);
extern "C" int func_0205da38(struct Struct_ov002_02164748* arg0, int arg1);
extern "C" void func_0205eaa0(struct Struct_ov002_02157d40_7 *arg0, int arg1, int arg2);
extern "C" int func_ov002_021574d4(void *arg0, int arg1);
extern "C" int func_ov002_02161b48(char *arg0, int arg1);
extern "C" void func_ov002_02161cf0(void *arg0);
extern "C" void func_ov002_02160274(void *arg0);
extern "C" void func_ov002_02156e90(void *arg0);
extern char data_02108760[];
#if defined(jpn)
extern "C" void func_ov002_0215bba8(char *arg0);
#endif

#if defined(jpn)
enum { Enum_ov002_02169520_0 = -0x138, Enum_ov002_02169520_0_2 = -0xa8, Enum_ov002_02169520_0_3 = -0x1d0, Enum_ov002_02169520_30 = 0x1f };
#else
enum { Enum_ov002_02169520_0 = 0, Enum_ov002_02169520_0_2 = 0, Enum_ov002_02169520_0_3 = 0, Enum_ov002_02169520_30 = 0x1e };
#endif

// USA: func_ov002_02169520
extern "C" ARM void func_ov002_02169520(char *arg0) {
    int var0 = *(int *) (arg0 + 0x1bc0 + Enum_ov002_02169520_0);
    if (var0 == 0) {
        *(short *) (arg0 + 0x1c08 + Enum_ov002_02169520_0) = 0;
        func_0205de24((struct Struct_ov002_0215624c_11 *) (arg0 + 0xec8 + Enum_ov002_02169520_0_2), 0, 2);
        func_ov002_02161cf0(arg0);
        func_ov002_02160274(arg0);
        (*(int *) (arg0 + 0x1bc0 + Enum_ov002_02169520_0))++;
        return;
    }
    if (var0 != 1) return;
    *(int *) (arg0 + 0x247c + Enum_ov002_02169520_0_3) |= 4;
    short var1                  = *(short *) (arg0 + 0x1c08 + Enum_ov002_02169520_0);
    *(short *) (arg0 + 0x1c08 + Enum_ov002_02169520_0) = func_0205d794((struct Struct_ov002_0215624c_15 *) (arg0 + 0xec8 + Enum_ov002_02169520_0_2));
    if (var1 != *(short *) (arg0 + 0x1c08 + Enum_ov002_02169520_0)) *(int *) (arg0 + 0x1bcc + Enum_ov002_02169520_0) = 1;
    *(signed char *) (arg0 + 0x1c20 + Enum_ov002_02169520_0) = func_ov002_021574d4(arg0, *(short *) (arg0 + 0x1c08 + Enum_ov002_02169520_0));
#if defined(jpn)
    func_ov002_0215bba8(arg0);
#endif
    int var2                      = g_keyManager.TestKeysPressed(0x601);
    int var3 = (var2 | func_0205da38((struct Struct_ov002_02164748*)(arg0 + 0xec8 + Enum_ov002_02169520_0_2), 0x14)) ? 1 : 0;
    if (var3) {
        *(unsigned char *) (arg0 + 0xf80 + Enum_ov002_02169520_0_2) = *(int *) (arg0 + 0x1bb8 + Enum_ov002_02169520_0);
        *(int *) (arg0 + 0x247c + Enum_ov002_02169520_0_3) &= ~4;
        func_0205eaa0((struct Struct_ov002_02157d40_7 *) data_02108760, 1, 0);
        int var4                     = 0;
        *(short *) (arg0 + 0x1c12 + Enum_ov002_02169520_0) = var4;
        int var5                    = *(signed char *) (arg0 + 0x1c20 + Enum_ov002_02169520_0);
        if (var5 >= 0 && var5 <= 3) var4 = 1;
        if (!var4) return;
        *(short *) (arg0 + 0x1c28 + Enum_ov002_02169520_0) = var5;
        *(int *) (arg0 + 0x1bb8 + Enum_ov002_02169520_0)   = Enum_ov002_02169520_30;
        *(int *) (arg0 + 0x1bc0 + Enum_ov002_02169520_0)   = 0;
        return;
    }
    if (func_ov002_02161b48(arg0, 1)) {
        *(short *) (arg0 + 0x1c08 + Enum_ov002_02169520_0)       = -1;
        *(signed char *) (arg0 + 0x1c20 + Enum_ov002_02169520_0) = -1;
        func_ov002_02156e90(arg0);
    }
}

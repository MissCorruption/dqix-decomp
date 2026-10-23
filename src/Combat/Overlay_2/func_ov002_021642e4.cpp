#include "Memory/SafeAllocator.h"
#include <globaldefs.h>

struct Struct_0205de24_2;
struct Struct_0205c570;

extern "C" void func_0205de24(struct Struct_0205de24_2 *arg0, unsigned char arg1,
                                                                        unsigned char arg2);
extern "C" int func_0205d794(struct Struct_0205c570 *arg0);
extern "C" int func_ov002_02161b48(char *arg0, int arg1);
extern "C" void *func_020d6c00(void);
extern "C" void func_020466e4(unsigned int *arg0, unsigned int arg1);
extern "C" int GetInventoryItemByID(char *arg0, int arg1, int arg2);
extern "C" void func_ov002_02161cf0(char *arg0);
extern "C" void func_ov002_0215d864(char *arg0);
extern "C" void func_ov002_02161b98(char *arg0);
extern "C" void func_ov002_02156e90(char *arg0);
extern "C" void func_ov023_021dc9e8(char *arg0, SafeAllocator *arg1, int arg2, char *arg3, int arg4);
extern "C" void func_ov023_021dc134(char *arg0, int arg1, int arg2);
extern "C" void func_ov023_021dbfd0(char *arg0, SafeAllocator *arg1);
extern "C" void func_ov023_021dcae0(char *arg0, int arg1);
extern "C" void func_ov023_021dca88(char *arg0);

// USA: func_ov002_021642e4
#if defined(jpn)
extern "C" ARM void func_ov002_021642e4(char *arg0) {
    int var0 = *(int *) (arg0 + 0x1a88);
    char *var1 = arg0 + 0x38;
    if (var0 == 0) {
        *(short *) (arg0 + 0x1ab0) = 0;
        func_0205de24((struct Struct_0205de24_2 *) (arg0 + 0xe20), 0, 2);
        func_ov002_02161cf0(arg0);
        func_ov002_0215d864(arg0);
        func_020466e4((unsigned int *) func_020d6c00(), 1);
        if (*(int *) (arg0 + 0x22ac) & 1) {
            ((SafeAllocator *) (arg0 + 0x7c8))->Reset();
            func_ov023_021dc9e8(var1, (SafeAllocator *) (arg0 + 0x7c8),
                                GetInventoryItemByID(arg0, *(short *) (arg0 + 0x1ab0), *(signed char *) (arg0 + 0x1ae8)),
                                arg0 + 0x750, 0x50);
        } else {
            ((SafeAllocator *) (arg0 + 0x7c8))->Reset();
            func_ov023_021dc134(var1,
                                GetInventoryItemByID(arg0, *(short *) (arg0 + 0x1ab0), *(signed char *) (arg0 + 0x1ae8)), 0);
            struct Struct_ov002_02162e50 {
                char unknown_0_[0x6f0];
                unsigned short unknown_6f0_;
            };
            ((Struct_ov002_02162e50 *) (var1))->unknown_6f0_ |= 0x50;
            func_ov023_021dbfd0(var1, (SafeAllocator *) (arg0 + 0x7c8));
            *(char **) (var1 + 0x48) = arg0 + 0x750;
            *(int *) (arg0 + 0x22ac) |= 1;
        }
        (*(int *) (arg0 + 0x1a88))++;
    } else if (var0 == 1) {
        *(int *) (arg0 + 0x22ac) |= 4;
        func_ov002_02161b98(arg0);
        *(short *) (arg0 + 0x1ab0) =
            func_0205d794((struct Struct_0205c570 *) (arg0 + 0xe20));
        *(short *) (arg0 + 0x1aea) = GetInventoryItemByID(arg0, *(short *) (arg0 + 0x1ab0), *(signed char *) (arg0 + 0x1ae8));
        func_ov023_021dcae0(var1, *(short *) (arg0 + 0x1aea));
        if (func_ov002_02161b48(arg0, 1)) {
            *(short *) (arg0 + 0x1aea) = -1;
            *(short *) (arg0 + 0x1ab0) = -1;
            func_ov002_02156e90(arg0);
            func_ov023_021dca88(var1);
        }
    }
}
#else
extern "C" ARM void func_ov002_021642e4(char *arg0) {
    int var2 = *(int *) (arg0 + 0x1bc0);
    if (var2 == 0) {
        *(short *) (arg0 + 0x1be8) = 0;
        func_0205de24((struct Struct_0205de24_2 *) (arg0 + 0xec8), 0, 2);
        func_ov002_02161cf0(arg0);
        func_ov002_0215d864(arg0);
        func_020466e4((unsigned int *) func_020d6c00(), 1);
        if (*(int *) (arg0 + 0x247c) & 1) {
            ((SafeAllocator *) (arg0 + 0x864))->Reset();
            func_ov023_021dc9e8(arg0 + 0x50, (SafeAllocator *) (arg0 + 0x864),
                                GetInventoryItemByID(arg0, *(short *) (arg0 + 0x1be8), *(signed char *) (arg0 + 0x1c20)),
                                arg0 + 0x7ec, 0x50);
        } else {
            ((SafeAllocator *) (arg0 + 0x864))->Reset();
            func_ov023_021dc134(arg0 + 0x50,
                                GetInventoryItemByID(arg0, *(short *) (arg0 + 0x1be8), *(signed char *) (arg0 + 0x1c20)), 0);
            struct Struct_ov002_02162e50 {
                char unknown_0_[0x774];
                unsigned short unknown_774_;
            };
            ((Struct_ov002_02162e50 *) (arg0 + 0x50))->unknown_774_ |= 0x50;
            func_ov023_021dbfd0(arg0 + 0x50, (SafeAllocator *) (arg0 + 0x864));
            *(char **) (arg0 + 0x98) = arg0 + 0x7ec;
            *(int *) (arg0 + 0x247c) |= 1;
        }
        (*(int *) (arg0 + 0x1bc0))++;
    } else if (var2 == 1) {
        *(int *) (arg0 + 0x247c) |= 4;
        func_ov002_02161b98(arg0);
        *(short *) (arg0 + 0x1be8) =
            func_0205d794((struct Struct_0205c570 *) (arg0 + 0xec8));
        *(short *) (arg0 + 0x1c22) = GetInventoryItemByID(arg0, *(short *) (arg0 + 0x1be8), *(signed char *) (arg0 + 0x1c20));
        func_ov023_021dcae0(arg0 + 0x50, *(short *) (arg0 + 0x1c22));
        if (func_ov002_02161b48(arg0, 1)) {
            *(short *) (arg0 + 0x1c22) = -1;
            *(short *) (arg0 + 0x1be8) = -1;
            func_ov002_02156e90(arg0);
            func_ov023_021dca88(arg0 + 0x50);
        }
    }
}
#endif

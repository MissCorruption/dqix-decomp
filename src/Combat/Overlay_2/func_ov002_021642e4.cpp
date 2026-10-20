#include "Memory/SafeAllocator.h"
#include <globaldefs.h>

struct Struct0205de24;
struct Struct_0205c570;

void FindAndLinkMatchingEntry0205de24(struct Struct0205de24 *obj, unsigned char keyLow,
                                                                        unsigned char keyHigh);
int GetActiveScaledSum0205d794(struct Struct_0205c570 *s);
int CheckFlagOrThreshold_02161b48(char *self, int flag);
void *GetDataPtr02114e04_020d6c00(void);
void OrBitsIntoField0_020466e4(unsigned int *p, unsigned int mask);
extern "C" int GetInventoryItemByID(char *self, int idx, int member);
extern "C" void func_ov002_02161cf0(char *self);
extern "C" void func_ov002_0215d864(char *self);
extern "C" void func_ov002_02161b98(char *self);
extern "C" void func_ov002_02156e90(char *self);
extern "C" void func_ov023_021dc9e8(char *obj, SafeAllocator *alloc, int item, char *list, int n);
extern "C" void func_ov023_021dc134(char *obj, int item, int flag);
extern "C" void func_ov023_021dbfd0(char *obj, SafeAllocator *alloc);
extern "C" void func_ov023_021dcae0(char *obj, int item);
extern "C" void func_ov023_021dca88(char *obj);

// USA: func_ov002_021642e4
#if defined(jpn)
extern "C" int func_ov002_02162930(char *self, int flag);
extern "C" void func_ov002_0215852c(char *self);
extern "C" void func_ov002_02162acc(char *self);
extern "C" void func_ov002_0215e858(char *self);
extern "C" void func_ov002_0216297c(char *self);
#define CheckFlagOrThreshold_02161b48 func_ov002_02162930
#define func_ov002_02156e90 func_ov002_0215852c
#define func_ov002_02161cf0 func_ov002_02162acc
#define func_ov002_0215d864 func_ov002_0215e858
#define func_ov002_02161b98 func_ov002_0216297c
extern "C" ARM void func_ov002_021642e4(char *self) {
    int phase = *(int *) (self + 0x1a88);
    char *sub = self + 0x38;
    if (phase == 0) {
        *(short *) (self + 0x1ab0) = 0;
        FindAndLinkMatchingEntry0205de24((struct Struct0205de24 *) (self + 0xe20), 0, 2);
        func_ov002_02161cf0(self);
        func_ov002_0215d864(self);
        OrBitsIntoField0_020466e4((unsigned int *) GetDataPtr02114e04_020d6c00(), 1);
        if (*(int *) (self + 0x22ac) & 1) {
            ((SafeAllocator *) (self + 0x7c8))->Reset();
            func_ov023_021dc9e8(sub, (SafeAllocator *) (self + 0x7c8),
                                GetInventoryItemByID(self, *(short *) (self + 0x1ab0), *(signed char *) (self + 0x1ae8)),
                                self + 0x750, 0x50);
        } else {
            ((SafeAllocator *) (self + 0x7c8))->Reset();
            func_ov023_021dc134(sub,
                                GetInventoryItemByID(self, *(short *) (self + 0x1ab0), *(signed char *) (self + 0x1ae8)), 0);
            struct F {
                char pad[0x6f0];
                unsigned short flags;
            };
            ((F *) (sub))->flags |= 0x50;
            func_ov023_021dbfd0(sub, (SafeAllocator *) (self + 0x7c8));
            *(char **) (sub + 0x48) = self + 0x750;
            *(int *) (self + 0x22ac) |= 1;
        }
        (*(int *) (self + 0x1a88))++;
    } else if (phase == 1) {
        *(int *) (self + 0x22ac) |= 4;
        func_ov002_02161b98(self);
        *(short *) (self + 0x1ab0) =
            GetActiveScaledSum0205d794((struct Struct_0205c570 *) (self + 0xe20));
        *(short *) (self + 0x1aea) = GetInventoryItemByID(self, *(short *) (self + 0x1ab0), *(signed char *) (self + 0x1ae8));
        func_ov023_021dcae0(sub, *(short *) (self + 0x1aea));
        if (CheckFlagOrThreshold_02161b48(self, 1)) {
            *(short *) (self + 0x1aea) = -1;
            *(short *) (self + 0x1ab0) = -1;
            func_ov002_02156e90(self);
            func_ov023_021dca88(sub);
        }
    }
}
#else
extern "C" ARM void func_ov002_021642e4(char *self) {
    int phase = *(int *) (self + 0x1bc0);
    if (phase == 0) {
        *(short *) (self + 0x1be8) = 0;
        FindAndLinkMatchingEntry0205de24((struct Struct0205de24 *) (self + 0xec8), 0, 2);
        func_ov002_02161cf0(self);
        func_ov002_0215d864(self);
        OrBitsIntoField0_020466e4((unsigned int *) GetDataPtr02114e04_020d6c00(), 1);
        if (*(int *) (self + 0x247c) & 1) {
            ((SafeAllocator *) (self + 0x864))->Reset();
            func_ov023_021dc9e8(self + 0x50, (SafeAllocator *) (self + 0x864),
                                GetInventoryItemByID(self, *(short *) (self + 0x1be8), *(signed char *) (self + 0x1c20)),
                                self + 0x7ec, 0x50);
        } else {
            ((SafeAllocator *) (self + 0x864))->Reset();
            func_ov023_021dc134(self + 0x50,
                                GetInventoryItemByID(self, *(short *) (self + 0x1be8), *(signed char *) (self + 0x1c20)), 0);
            struct F {
                char pad[0x774];
                unsigned short flags;
            };
            ((F *) (self + 0x50))->flags |= 0x50;
            func_ov023_021dbfd0(self + 0x50, (SafeAllocator *) (self + 0x864));
            *(char **) (self + 0x98) = self + 0x7ec;
            *(int *) (self + 0x247c) |= 1;
        }
        (*(int *) (self + 0x1bc0))++;
    } else if (phase == 1) {
        *(int *) (self + 0x247c) |= 4;
        func_ov002_02161b98(self);
        *(short *) (self + 0x1be8) =
            GetActiveScaledSum0205d794((struct Struct_0205c570 *) (self + 0xec8));
        *(short *) (self + 0x1c22) = GetInventoryItemByID(self, *(short *) (self + 0x1be8), *(signed char *) (self + 0x1c20));
        func_ov023_021dcae0(self + 0x50, *(short *) (self + 0x1c22));
        if (CheckFlagOrThreshold_02161b48(self, 1)) {
            *(short *) (self + 0x1c22) = -1;
            *(short *) (self + 0x1be8) = -1;
            func_ov002_02156e90(self);
            func_ov023_021dca88(self + 0x50);
        }
    }
}
#endif

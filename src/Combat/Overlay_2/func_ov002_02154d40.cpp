#include "Memory/SafeAllocator.h"
#include <globaldefs.h>

#if defined(jpn)
#define RG(u, j) (j)
#else
#define RG(u, j) (u)
#endif

struct Struct_020e2490;
struct Struct_020e1368;
struct Struct_020e1374;

extern "C" void func_020e2490(Struct_020e2490 *arg0, int arg1,
                                                                                          int arg2, void *arg3, SafeAllocator *arg4,
                                                                                          int arg5, unsigned char arg6);
extern "C" void func_020e1368(Struct_020e1368 *arg0, unsigned int arg1, unsigned int arg2,
                                                                    unsigned char arg3);
extern "C" void func_020e1374(Struct_020e1374 *arg0, unsigned int arg1, unsigned int arg2, int arg3);

// USA: func_ov002_02154d40
extern "C" ARM void func_ov002_02154d40(char *arg0, SafeAllocator *arg1) {
    if (arg1 == NULL) return;
    ((SafeAllocator *) (arg0 + RG(0x810, 0x774)))->CreateTypeA(arg1->Allocate(0x3c00), 0x3c00);
    ((SafeAllocator *) (arg0 + RG(0x83c, 0x7a0)))->CreateTypeA(arg1->Allocate(RG(0x5400, 0x4000)), RG(0x5400, 0x4000));
    ((SafeAllocator *) (arg0 + RG(0x828, 0x78c)))->CreateTypeA(arg1->Allocate(0xd400), 0xd400);
    ((SafeAllocator *) (arg0 + RG(0x850, 0x7b4)))->CreateTypeA(arg1->Allocate(0x4c00), 0x4c00);
    ((SafeAllocator *) (arg0 + RG(0x864, 0x7c8)))->CreateTypeA(arg1->Allocate(0x9400), 0x9400);
    ((SafeAllocator *) (arg0 + RG(0x878, 0x7dc)))->CreateTypeA(arg1->Allocate(0x800), 0x800);
    ((SafeAllocator *) (arg0 + RG(0x88c, 0x7f0)))->CreateTypeA(arg1->Allocate(0x580), 0x580);
    ((SafeAllocator *) (arg0 + RG(0x8a0, 0x804)))->CreateTypeA(arg1->Allocate(0x533), 0x533);
    *(void **) (arg0 + RG(0x1a64, 0x19bc)) = arg1->Allocate(RG(0x6b8, 0x6e0));
    *(void **) (arg0 + RG(0x1a68, 0x19c0)) = arg1->Allocate(0x54);
    *(void **) (arg0 + RG(0x1a6c, 0x19c4)) = arg1->Allocate(8);
    *(void **) (arg0 + RG(0x1bd4, 0x1a9c)) = arg1->Allocate(RG(0x960, 0x800));
    *(void **) (arg0 + 0)      = arg1->Allocate(0x24);
    *(void **) (arg0 + 4)      = arg1->Allocate(0x24);
    func_020e2490(*(Struct_020e2490 **) (arg0 + 0), 0, 0, 0,
                                                                              arg1, 0xc, 0x40);
    func_020e2490(*(Struct_020e2490 **) (arg0 + 4), 0, 1,
                                                                              *(void **) (arg0 + RG(0x1a6c, 0x19c4)), arg1, RG(4, 3), 0x60);
    char *var0 = *(char **) (*(char **) (arg0 + 0) + 0xc);
    func_020e1368((Struct_020e1368 *) (var0 + 0xc), 0, 0x3000, 5);
    func_020e1374((Struct_020e1374 *) (var0 + 0xc), 0x3800, 0x3000, 4);
}

#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"

struct Struct_ov003_0215efb8;
extern "C" ARM void func_ov003_0215efb8(Struct_ov003_0215efb8* arg0);

struct Struct_ov003_0215e6d8;
extern "C" ARM void func_ov003_0215e6d8(Struct_ov003_0215e6d8* arg0);

extern "C" ARM int func_020ac460(void* arg0);

#if defined(jpn)
enum { Enum_ov012_02184884_0 = -8, Enum_ov012_02184884_0_2 = -0x28, Enum_ov012_02184884_0_3 = 0x58, Enum_ov012_02184884_84992 = 0x15000, Enum_ov012_02184884_9216 = 0x1c00, Enum_ov012_02184884_6144 = 0x1400, Enum_ov012_02184884_760 = 0x2a8 };
#else
enum { Enum_ov012_02184884_0 = 0, Enum_ov012_02184884_0_2 = 0, Enum_ov012_02184884_0_3 = 0, Enum_ov012_02184884_84992 = 0x14c00, Enum_ov012_02184884_9216 = 0x2400, Enum_ov012_02184884_6144 = 0x1800, Enum_ov012_02184884_760 = 0x2f8 };
#endif

// USA: func_ov012_02184884
extern "C" ARM void func_ov012_02184884(char* arg0, SafeAllocator* arg1) {
    if (arg1 == 0) return;

#if !defined(jpn)
    void* var0 = arg1->Allocate(0x28);
    *(void**)(arg0 + 0x0) = var0;
    if (var0 != 0) func_ov003_0215efb8((Struct_ov003_0215efb8*)var0);

    void* var1 = arg1->Allocate(0x10);
    *(void**)(arg0 + 0x4) = var1;
    if (var1 != 0) func_ov003_0215e6d8((Struct_ov003_0215e6d8*)var1);

#endif

    ((SafeAllocator*)(arg0 + 0x20 + Enum_ov012_02184884_0))->CreateTypeA(arg1->Allocate(Enum_ov012_02184884_84992), Enum_ov012_02184884_84992);
    ((SafeAllocator*)(arg0 + 0x34 + Enum_ov012_02184884_0))->CreateTypeA(arg1->Allocate(Enum_ov012_02184884_9216), Enum_ov012_02184884_9216);
    ((SafeAllocator*)(arg0 + 0x48 + Enum_ov012_02184884_0))->CreateTypeA(arg1->Allocate(0x9400), 0x9400);
    ((SafeAllocator*)(arg0 + 0x5c + Enum_ov012_02184884_0))->CreateTypeA(arg1->Allocate(0x800), 0x800);
    ((SafeAllocator*)(arg0 + 0x70 + Enum_ov012_02184884_0))->CreateTypeA(arg1->Allocate(Enum_ov012_02184884_6144), Enum_ov012_02184884_6144);
    ((SafeAllocator*)(arg0 + 0x84 + Enum_ov012_02184884_0))->CreateTypeA(arg1->Allocate(0x5400), 0x5400);
#if !defined(jpn)
    ((SafeAllocator*)(arg0 + 0x98 + Enum_ov012_02184884_0))->CreateTypeA(arg1->Allocate(0x400), 0x400);
#endif

    *(void**)(arg0 + 0x1000 + 0x364 + Enum_ov012_02184884_0_2) = arg1->Allocate(Enum_ov012_02184884_760);
    *(void**)(arg0 + 0x1000 + 0x35c + Enum_ov012_02184884_0_2) = arg1->Allocate(0x54);
    *(void**)(arg0 + 0x1000 + 0x360 + Enum_ov012_02184884_0_2) = arg1->Allocate(0x8);
#if !defined(jpn)
    *(void**)(arg0 + 0x1000 + 0x36c) = arg1->Allocate(0x78);
#endif
#if !defined(jpn)
    *(void**)(arg0 + 0x1000 + 0x368) = arg1->Allocate(0x54);
#endif
    *(void**)(arg0 + 0x1000 + 0x3ac + Enum_ov012_02184884_0_3) = arg1->Allocate(0x72);
    *(void**)(arg0 + 0x1000 + 0x3b4 + Enum_ov012_02184884_0_3) = arg1->Allocate(0x3c00);

    *(void**)(arg0 + 0x1000 + 0x3bc + Enum_ov012_02184884_0_3) = arg1->Allocate(0xf2);
    memset(*(void**)(arg0 + 0x1000 + 0x3bc + Enum_ov012_02184884_0_3), 0, 0xf2);

    *(void**)(arg0 + 0x1000 + 0x3c0 + Enum_ov012_02184884_0_3) = arg1->Allocate(0x12);
    memset(*(void**)(arg0 + 0x1000 + 0x3c0 + Enum_ov012_02184884_0_3), 0, 0x12);

    void* var2 = arg1->Allocate(0x38c);
    *(void**)(arg0 + 0x1000 + 0x3c8 + Enum_ov012_02184884_0_3) = var2;
    memset(var2, 0, 0x38c);

    void* var3 = arg1->Allocate(0x3c);
    *(void**)(arg0 + 0x1000 + 0x3cc + Enum_ov012_02184884_0_3) = var3;
    memset(var3, 0, 0x3c);

    func_020ac460(*(void**)(arg0 + 0x1000 + 0x3cc + Enum_ov012_02184884_0_3));

    void* var4 = arg1->Allocate(0x400);
    *(void**)(arg0 + 0x1000 + 0x3d0 + Enum_ov012_02184884_0_3) = var4;
    memset(var4, 0, 0x400);
}

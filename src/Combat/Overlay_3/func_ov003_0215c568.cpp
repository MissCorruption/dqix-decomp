#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

#if defined(jpn)
#define func_020c9be0 func_020cb6ac
#endif

#if defined(jpn)
enum { Enum_ov003_0215c568_16384 = 0x3000 };
enum { Enum_ov003_0215c568_124 = 0x94 };
enum { Enum_ov003_0215c568_92 = 0x28 };
#else
enum { Enum_ov003_0215c568_16384 = 0x4000 };
enum { Enum_ov003_0215c568_124 = 0x7c };
enum { Enum_ov003_0215c568_92 = 0x5c };
#endif


extern "C" void func_020c9be0(void);
extern "C" int func_020421a0(void);

// USA: func_ov003_0215c568
extern "C" ARM void func_ov003_0215c568(void* arg0, SafeAllocator* arg1) {
    if (arg1 == 0) return;

    void* var0 = arg1->Allocate(0x2000);
    if (var0 == 0) func_020c9be0();
    ((SafeAllocator*)arg0)->CreateTypeA(var0, 0x2000);

    var0 = arg1->Allocate(0x800);
    if (var0 == 0) func_020c9be0();
    ((SafeAllocator*)((char*)arg0 + 0x14))->CreateTypeA(var0, 0x800);

    var0 = arg1->Allocate(Enum_ov003_0215c568_16384);
    if (var0 == 0) func_020c9be0();
    ((SafeAllocator*)((char*)arg0 + 0x28))->CreateTypeA(var0, Enum_ov003_0215c568_16384);

    var0 = arg1->Allocate(0x400);
    if (var0 == 0) func_020c9be0();
    ((SafeAllocator*)((char*)arg0 + 0x3c))->CreateTypeA(var0, 0x400);

    var0 = arg1->Allocate(0x2000);
    if (var0 == 0) func_020c9be0();
    ((SafeAllocator*)((char*)arg0 + 0x50))->CreateTypeA(var0, 0x2000);

    int var1 = func_020421a0();
    *(int*)((char*)arg0 + Enum_ov003_0215c568_124) = *(int*)(var1 + Enum_ov003_0215c568_92);
}

#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_ov023_021fd850 { unsigned int unknown_0_[4]; };
extern struct Struct_ov023_021fd850 data_ov023_021fd850;

// USA: func_ov023_021eb080
extern "C" ARM void func_ov023_021eb080(void* arg0, SafeAllocator* arg1) {
    if (arg1 == NULL) return;
    struct Struct_ov023_021fd850 var0 = data_ov023_021fd850;
    *(void**)arg0 = arg1->Allocate(0x50);
    for (int var1 = 0; var1 < 4; var1++) {
        SafeAllocator* var2 = &((SafeAllocator*)(*(void**)arg0))[var1];
        var2->ResetAllocatorPointer();
        unsigned int var3 = var0.unknown_0_[var1];
        void* var4 = arg1->Allocate(var3);
        var2->CreateTypeA(var4, var3);
    }
    *(void**)((char*)arg0 + 0x424) = arg1->Allocate(0x54);
    *(void**)((char*)arg0 + 0x428) = arg1->Allocate(0xa0);
    *(void**)((char*)arg0 + 0x42c) = arg1->Allocate(0x8);
}

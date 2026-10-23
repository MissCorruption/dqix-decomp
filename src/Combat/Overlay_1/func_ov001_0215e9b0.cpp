#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"

extern "C" int func_ov017_021d60f4(void*);
struct Struct_02114e20;
extern "C" unsigned int func_02012dd0(struct Struct_02114e20*);

extern "C" void* func_02012d88(AllocatorUnion* arg0, unsigned int arg1);

extern SafeAllocator* data_ov001_021658b8[8];
extern AllocatorUnion data_02114e20;

// USA: func_ov001_0215e9b0
extern "C" ARM int func_ov001_0215e9b0(void* arg0) {
    int var0 = func_ov017_021d60f4(arg0);
    if (var0 < 0 || var0 >= 8) {
        return 0;
    }
    unsigned int var1 = func_02012dd0((struct Struct_02114e20*)&data_02114e20);
    if (data_ov001_021658b8[0] != NULL) {
        if (data_ov001_021658b8[0]->GetMaxPossibleAllocation() <= 0x14) {
            return 0;
        }
    }
    SafeAllocator* var2 = (SafeAllocator*)data_ov001_021658b8[0]->Allocate(0x14);
    var2->ResetAllocatorPointer();
    void* var3 = func_02012d88(&data_02114e20, var1);
    var2->CreateTypeA(var3, var1);
    return 1;
}

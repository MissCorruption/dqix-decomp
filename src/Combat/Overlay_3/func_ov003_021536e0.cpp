#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_ov003_0217f280 { unsigned int unknown_0_[1]; };
extern Struct_ov003_0217f280 data_ov003_0217f280[];

// USA: func_ov003_021536e0
extern "C" ARM void func_ov003_021536e0(void* arg0, SafeAllocator* arg1) {
    *(void**)arg0 = arg1->Allocate(0x14);
    struct Struct_ov003_0217f280 var0 = data_ov003_0217f280[1];
    for (unsigned char var1 = 0; var1 < 1; var1++) {
        ((SafeAllocator*)((char*)*(void**)arg0 + var1 * 0x14))->ResetAllocatorPointer();
        unsigned int var2 = var0.unknown_0_[var1];
        void* var3 = arg1->Allocate(var2);
        ((SafeAllocator*)((char*)*(void**)arg0 + var1 * 0x14))->CreateTypeA(var3, var2);
    }
}

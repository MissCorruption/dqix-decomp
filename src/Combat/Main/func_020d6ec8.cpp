#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_020d6ec8;
extern "C" void func_020d6f44(Struct_020d6ec8* arg0);

// USA: func_020d6ec8
extern "C" ARM void func_020d6ec8(Struct_020d6ec8* arg0, SafeAllocator* arg1) {
    ((SafeAllocator*)((char*)arg0 + 0xa28))->ResetAllocatorPointer();
    void* var0 = arg1->Allocate(0x6000);
    ((SafeAllocator*)((char*)arg0 + 0xa28))->CreateTypeA(var0, 0x6000);
    func_020d6f44(arg0);
}

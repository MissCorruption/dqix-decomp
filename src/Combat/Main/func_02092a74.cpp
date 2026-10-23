#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

// USA: func_02092a74
extern "C" ARM void func_02092a74(SafeAllocator* arg0, SafeAllocator* arg1) {
    void* var0;
    if (arg1 == NULL) return;
    var0 = arg1->Allocate(0x800);
    arg0->CreateTypeA(var0, 0x800);
}

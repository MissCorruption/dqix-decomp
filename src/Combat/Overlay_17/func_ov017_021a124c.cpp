#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_0204693c;
extern "C" void func_0204693c(struct Struct_0204693c* arg0);

// USA: func_ov017_021a124c
extern "C" ARM void func_ov017_021a124c(unsigned char* arg0) {
    func_0204693c((struct Struct_0204693c*)arg0);
    arg0[0] = 2;
    ((SafeAllocator*)(arg0 + 8))->ResetAllocatorPointer();
    *(int*)(arg0 + 0x1c) = 0;
    arg0[0x20] = 2;
    arg0[0x21] = 0;
    arg0[0x22] = 0;
}

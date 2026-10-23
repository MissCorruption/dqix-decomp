#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_0204693c;
extern "C" void func_0204693c(struct Struct_0204693c* arg0);
extern "C" void func_0205c790(char* arg0);
struct Struct_0201099c_14;
extern "C" void func_020dfc40(struct Struct_0201099c_14* arg0);

// USA: func_ov017_021a7328
extern "C" ARM void func_ov017_021a7328(char* arg0) {
    func_0204693c((struct Struct_0204693c*)arg0);
    arg0[0] = 0x3f;
    *(int*)(arg0 + 0x8) = 0;
    *(int*)(arg0 + 0xc) = 0;
    *(int*)(arg0 + 0x10) = 0;
    *(int*)(arg0 + 0x20) = -1;
    *(int*)(arg0 + 0x14) = 0;
    *(int*)(arg0 + 0x18) = 0;
    func_0205c790(arg0 + 0x24);
#if defined(jpn)
    ((SafeAllocator*)(arg0 + 0x1ec))->ResetAllocatorPointer();
    func_020dfc40((struct Struct_0201099c_14*)(arg0 + 0x200));
#else
    ((SafeAllocator*)(arg0 + 0x25c))->ResetAllocatorPointer();
    func_020dfc40((struct Struct_0201099c_14*)(arg0 + 0x270));
#endif
}

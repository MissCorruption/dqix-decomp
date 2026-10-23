#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

extern "C" void func_ov023_021f6844(void* arg0, unsigned int arg1);

// USA: func_ov011_02184604
extern "C" ARM void func_ov011_02184604(void* arg0, unsigned char* arg1) {
    if (!arg1) return;
    func_ov011_02184604(arg0, *(unsigned char**)(arg1 + 0x18));
    func_ov011_02184604(arg0, *(unsigned char**)(arg1 + 0x1c));
    func_ov023_021f6844((unsigned char*)arg0 + 0x118, *(unsigned int*)(arg1 + 0x0));
    ((SafeAllocator*)(arg1 + 0x4))->Destroy();
}

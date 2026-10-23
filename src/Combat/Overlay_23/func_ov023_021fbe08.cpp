#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

extern "C" void func_ov023_021f6ed8(void*);
extern "C" void func_020de848(void* arg0);

// USA: func_ov023_021fbe08
extern "C" ARM int func_ov023_021fbe08(void* arg0, void* arg1, short arg2, short arg3, void* arg4) {
    func_ov023_021f6ed8(arg0);
    *(unsigned short*)((char*)arg0 + 0x4) = 0x11;
    *(unsigned short*)((char*)arg0 + 0x6) = arg2;
    *(unsigned short*)((char*)arg0 + 0x8) = arg3;
    func_020de848((char*)arg0 + 0x34);
    *(void**)((char*)arg0 + 0x4c) = arg4;
    ((SafeAllocator*)((char*)arg0 + 0x20))->ResetAllocatorPointer();
    return 1;
}

#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

extern "C" void func_ov023_021e1330(void* arg0);

// USA: func_ov002_0215b428
extern "C" ARM void func_ov002_0215b428(unsigned char* arg0) {
    func_ov023_021e1330(arg0 + 0x4 + 0x800);
    ((SafeAllocator*)(arg0 + 0x850))->Reset();
    *(int*)(arg0 + 0x2000 + 0x534) = 0;
    *(int*)(arg0 + 0x2000 + 0x538) = 0;
}

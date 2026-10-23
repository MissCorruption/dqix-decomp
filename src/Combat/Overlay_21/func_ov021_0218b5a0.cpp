#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

extern "C" void _Z25InitializeBrightnessStateP13GameResources();

// USA: func_ov021_0218b5a0
extern "C" ARM void func_ov021_0218b5a0(unsigned char* arg0) {
    _Z25InitializeBrightnessStateP13GameResources();
    ((SafeAllocator*)(arg0 + 0x2c))->ResetAllocatorPointer();
    *(unsigned int*)(arg0 + 0x40) = 0;
    *(unsigned int*)(arg0 + 0xb8) = 0;
}

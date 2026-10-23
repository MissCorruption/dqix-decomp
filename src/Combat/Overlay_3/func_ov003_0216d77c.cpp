#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

#if defined(jpn)
enum { Enum_ov003_0216d77c_4860 = 0x118c };
enum { Enum_ov003_0216d77c_4880 = 0x11a0 };
enum { Enum_ov003_0216d77c_4716 = 0x10fc };
#else
enum { Enum_ov003_0216d77c_4860 = 0x12fc };
enum { Enum_ov003_0216d77c_4880 = 0x1310 };
enum { Enum_ov003_0216d77c_4716 = 0x126c };
#endif


extern "C" void func_0205a494(void* arg0);

// USA: func_ov003_0216d77c
extern "C" ARM void func_ov003_0216d77c(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;

    if (((SafeAllocator*)(var0 + Enum_ov003_0216d77c_4860))->GetSignedAllocator() != NULL) {
        ((SafeAllocator*)(var0 + Enum_ov003_0216d77c_4860))->Destroy();
    }
    if (((SafeAllocator*)(var0 + Enum_ov003_0216d77c_4880))->GetSignedAllocator() != NULL) {
        ((SafeAllocator*)(var0 + Enum_ov003_0216d77c_4880))->Destroy();
    }
    func_0205a494(var0 + Enum_ov003_0216d77c_4716);

    volatile unsigned int* var1 = (volatile unsigned int*)0x4000000;
    *var1 = (*var1 & ~0x1f00) | ((unsigned int)*(int*)var0 << 8);
}

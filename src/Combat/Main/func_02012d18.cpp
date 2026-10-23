#include <globaldefs.h>
#if defined(jpn)
enum { Enum_02012d18_1233140 = 0x129e00 };
#else
enum { Enum_02012d18_1233140 = 0x12d0f4 };
#endif

#include "NitroSDK/Memory/AllocatorUnion.h"
#include "NitroSDK/Memory/HPXEAllocator.h"

#if defined(jpn)
#define func_020c9be0 func_020cb6ac
#endif

extern "C" int func_020c8534(int arg0);
extern "C" int func_020c8520(int arg0);

extern "C" {
    void* func_020c86fc(int, unsigned int, int);
    void func_020c9be0(void);
}

// USA: func_02012d18
extern "C" ARM void func_02012d18(AllocatorUnion* arg0) {
    int var0 = func_020c8534(0);
    int var1 = func_020c8520(0);
    unsigned int var2 = (var0 + 0xf) & ~0xf;
    unsigned int var3 = var1 & ~0xf;
    unsigned int var4 = var3 - var2;

    void* var5 = func_020c86fc(0, var4, 0x10);
    HPXEAllocator* var6 = HPXEAllocator::CreateAtLocation(var5, var4, 0);
    arg0->InitializeTypeB(var6, 4);

    if (var4 < Enum_02012d18_1233140) {
        func_020c9be0();
    }
}

#include <globaldefs.h>
#if defined(jpn)
enum { kMinimumSize = 0x129e00 };
#else
enum { kMinimumSize = 0x12d0f4 };
#endif

#include "NitroSDK/Memory/AllocatorUnion.h"
#include "NitroSDK/Memory/HPXEAllocator.h"

#if defined(jpn)
#define func_020c9be0 func_020cb6ac
#endif

extern "C" int func_020c8534(int index);
extern "C" int func_020c8520(int index);

extern "C" {
    void* func_020c86fc(int, unsigned int, int);
    void func_020c9be0(void);
}

// USA: func_02012d18
extern "C" ARM void func_02012d18(AllocatorUnion* obj) {
    int begin = func_020c8534(0);
    int end = func_020c8520(0);
    unsigned int alignedBegin = (begin + 0xf) & ~0xf;
    unsigned int alignedEnd = end & ~0xf;
    unsigned int size = alignedEnd - alignedBegin;

    void* where = func_020c86fc(0, size, 0x10);
    HPXEAllocator* alloc = HPXEAllocator::CreateAtLocation(where, size, 0);
    obj->InitializeTypeB(alloc, 4);

    if (size < kMinimumSize) {
        func_020c9be0();
    }
}

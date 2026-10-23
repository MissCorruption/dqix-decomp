#include <globaldefs.h>
#include "NitroSDK/Memory.h"
#include "NitroSDK/Memory/HPXEAllocator.h"

#if defined(jpn)
#define func_020c9be0 func_020cb6ac
#endif

extern "C" void func_020c9be0(void);
extern HPXEAllocator* data_ov031_02290d3c;

// USA: func_ov031_0223ce9c
extern "C" ARM void func_ov031_0223ce9c(void* arg0) {
    VectorizedMemset(arg0, 0, 0x40000);
    HPXEAllocator* var0 = HPXEAllocator::CreateAtLocation(arg0, 0x40000, 0);
    data_ov031_02290d3c = var0;
    if (var0 == 0) {
        func_020c9be0();
    }
}

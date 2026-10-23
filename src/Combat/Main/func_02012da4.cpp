#include <globaldefs.h>
#include "NitroSDK/Memory/AllocatorUnion.h"

// USA: func_02012da4
extern "C" ARM void func_02012da4(AllocatorUnion* alloc, void* data) {
    alloc->Free(data);
}

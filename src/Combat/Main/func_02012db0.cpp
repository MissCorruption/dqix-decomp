#include <globaldefs.h>
#include "NitroSDK/Memory/AllocatorUnion.h"

// USA: func_02012db0
extern "C" ARM void* func_02012db0(AllocatorUnion* alloc, unsigned int size) {
    return alloc->Allocate(size);
}

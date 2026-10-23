#include <globaldefs.h>
#include "NitroSDK/Memory/AllocatorUnion.h"

// USA: func_02012d88
extern "C" ARM void* func_02012d88(AllocatorUnion* alloc, unsigned int size) {
    void* p = alloc->Allocate((size + 3) & ~3);
    if (p == NULL)
        return NULL;
    return p;
}

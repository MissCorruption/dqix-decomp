#include <globaldefs.h>
#include "NitroSDK/Memory/AllocatorUnion.h"

// USA: func_02012d88
extern "C" ARM void* func_02012d88(AllocatorUnion* arg0, unsigned int arg1) {
    void* var0 = arg0->Allocate((arg1 + 3) & ~3);
    if (var0 == NULL)
        return NULL;
    return var0;
}

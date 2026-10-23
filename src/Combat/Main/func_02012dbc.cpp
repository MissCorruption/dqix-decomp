#include <globaldefs.h>
#include "NitroSDK/Memory/AllocatorUnion.h"

// USA: func_02012dbc
extern "C" ARM void func_02012dbc(AllocatorUnion* alloc, void* data, int flag) {
    if (flag == 0)
        return;
    alloc->Free(data);
}

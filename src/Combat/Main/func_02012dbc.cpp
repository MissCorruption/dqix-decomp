#include <globaldefs.h>
#include "NitroSDK/Memory/AllocatorUnion.h"

// USA: func_02012dbc
extern "C" ARM void func_02012dbc(AllocatorUnion* arg0, void* arg1, int arg2) {
    if (arg2 == 0)
        return;
    arg0->Free(arg1);
}

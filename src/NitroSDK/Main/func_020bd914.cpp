#include <globaldefs.h>
#include "NitroSDK/Memory/HMRFAllocator.h"

struct Struct_020bd914;
extern "C" int func_020bdbf0(Struct_020bd914* arg0, HMRFAllocator* arg1);

// USA: func_020bd914
extern "C" ARM void* func_020bd914(void* arg0, unsigned int arg1)
{
    unsigned int var0 = (unsigned int)arg0 + arg1;
    unsigned int var1 = ((unsigned int)arg0 + 3) & ~3;

    if (var1 > var0)
        return NULL;

    unsigned int var2 = var0 - var1;
    if (var2 < 0x10)
        return NULL;

    HMRFAllocator* var3 = HMRFAllocator::CreateAtLocation((void*)(var1 + 0x10), var2 - 0x10, 0);
    if (var3 == NULL)
        return NULL;

    if (func_020bdbf0((Struct_020bd914*)var1, var3))
        return (void*)var1;

    var3->RemoveFromTree();
    return NULL;
}

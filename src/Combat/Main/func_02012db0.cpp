#include <globaldefs.h>
#include "NitroSDK/Memory/AllocatorUnion.h"

// USA: func_02012db0
extern "C" ARM void* func_02012db0(AllocatorUnion* arg0, unsigned int arg1) {
    return arg0->Allocate(arg1);
}

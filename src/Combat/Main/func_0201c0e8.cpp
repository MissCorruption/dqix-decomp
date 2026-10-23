#include <globaldefs.h>
#include "World/ZoneLootableRecord.h"
#include "Memory/PlacementNew.h"

// USA: func_0201c0e8
extern "C" ARM void* func_0201c0e8(void* arg0)
{
    Struct_02012fa4* var0 = new (arg0) Struct_02012fa4;
    func_02048080(&var0->unknown_14_);
    func_0204719c(var0);
    return arg0;
}

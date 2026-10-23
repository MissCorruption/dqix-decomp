#include <globaldefs.h>
#include "World/ZoneLootableRecord.h"

// USA: func_0201c108
extern "C" ARM void* func_0201c108(void* arg0)
{
    Struct_02012fa4* var0 = static_cast<Struct_02012fa4*>(arg0);
    func_02047230(var0);
    func_02048080(&var0->unknown_14_);
    var0->~Struct_02012fa4();
    return arg0;
}

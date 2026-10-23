#include <globaldefs.h>
#include "World/ZoneLootableRecord.h"
#include "Memory/PlacementNew.h"

// USA: func_0201c0e8
extern "C" ARM void* func_0201c0e8(void* obj)
{
    Foo02048004* block = new (obj) Foo02048004;
    func_02048080(&block->nameTable);
    func_0204719c(block);
    return obj;
}

#include <globaldefs.h>
#include "World/ZoneLootableRecord.h"

// USA: func_0201c108
extern "C" ARM void* func_0201c108(void* obj)
{
    Foo02048004* block = static_cast<Foo02048004*>(obj);
    func_02047230(block);
    func_02048080(&block->nameTable);
    block->~Foo02048004();
    return obj;
}

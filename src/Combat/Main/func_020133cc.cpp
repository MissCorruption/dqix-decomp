#include <globaldefs.h>
#include "World/ZoneLootableRecord.h"
#include "Memory/PlacementNew.h"

// USA: func_020133cc
extern "C" ARM void func_020133cc(ZoneLootableRecord* base)
{
    ZoneLootableRecord* record = new (static_cast<void*>(base)) ZoneLootableRecord;
    record->id = 0;
    record->field2 = -1;
    record->field4 = 0;
    func_0204719c(&record->primary[0]);
    func_0204719c(&record->primary[1]);
}

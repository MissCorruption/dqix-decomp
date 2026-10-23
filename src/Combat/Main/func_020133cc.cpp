#include <globaldefs.h>
#include "World/ZoneLootableRecord.h"
#include "Memory/PlacementNew.h"

// USA: func_020133cc
extern "C" ARM void func_020133cc(Struct_020133cc* arg0)
{
    Struct_020133cc* var0 = new (static_cast<void*>(arg0)) Struct_020133cc;
    var0->unknown_0_ = 0;
    var0->unknown_2_ = -1;
    var0->unknown_4_ = 0;
    func_0204719c(&var0->unknown_8_[0]);
    func_0204719c(&var0->unknown_8_[1]);
}

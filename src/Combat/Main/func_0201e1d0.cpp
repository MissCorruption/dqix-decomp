#include <globaldefs.h>

#include "World/ZoneWarpScript.h"

extern Script::OpcodeLookupEntry data_020ef388[];

// USA: func_0201e1d0
extern "C" ARM void func_0201e1d0(const void* arg0, unsigned int arg1, Struct_020134e0* arg2, SafeAllocator* arg3) {
    if (arg1 == 0) return;
    data_020fdc20.unknown_8_ = arg2;
    data_020fdc20.unknown_4_ = arg3;
    data_020fdc20.unknown_0_ = 0;
    Script var0;
    var0.Initialize();
    var0.SetOpcodeLookup(data_020ef388);
    var0.Load(arg0, arg1);
    var0.Execute();
    data_020fdc20.unknown_8_ = 0;
    data_020fdc20.unknown_4_ = 0;
    data_020fdc20.unknown_0_ = 0;
}

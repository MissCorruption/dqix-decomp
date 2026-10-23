#include "World/ZoneWarpScript.h"
#include <globaldefs.h>

// USA: func_0201d494
extern "C" ARM int func_0201d494(Script::Parameter* arg0, int arg1) {
    Vector3fix var0;
    arg0 = arg0->ToVec3fix(&var0);
    fix32_t var1 = fix32ReduceAngle0To2Pi((int)(4096.0f * arg0->ToFloat()));
    Struct_020134e0* var2 = data_020fdc20.unknown_8_;
    var2->unknown_70_ = var0;
    var2->unknown_7c_ = var1;
    return 1;
}

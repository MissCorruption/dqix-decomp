#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"
#include "World/ZoneWarpScript.h"

struct Struct_0201c1c8;

// USA: func_0201dfcc
extern "C" ARM int func_0201dfcc(Script::Parameter* arg0, int) {
    struct Struct_0201c1c8* var0 = (struct Struct_0201c1c8*)arg0;
    unsigned int var1 = ((Script::Parameter*)var0)->ToInt();
    Struct_020134e0::Struct_0201dfcc* var2 = (Struct_020134e0::Struct_0201dfcc*)data_020fdc20.unknown_4_->Allocate(var1 * sizeof(Struct_020134e0::Struct_0201dfcc));
    if (var2 == NULL) return 0;
    data_020fdc20.unknown_8_->func_0201e878(var2, var1);
    return 1;
}

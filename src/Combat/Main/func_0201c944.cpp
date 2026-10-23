#include <globaldefs.h>
#include "World/ZoneFeatures.h"
#include "Resource/Script.h"

class SafeAllocator;
struct Struct_0201c1c8;
struct Struct_0201e480;

struct Struct_020fdc20_4 {
    int unknown_0_;
    SafeAllocator* unknown_4_;
    struct Struct_0201e480* unknown_8_;
};
extern struct Struct_020fdc20_4 data_020fdc20;

// USA: func_0201c944
extern "C" ARM int func_0201c944(Script::Parameter* arg0, int) {
    struct Struct_0201c1c8* var0 = (struct Struct_0201c1c8*)arg0;
    int var1 = ((Script::Parameter*)var0)->ToInt();
    ((Struct_020134e0*)data_020fdc20.unknown_8_)->func_0201e480(var1, data_020fdc20.unknown_4_);
    return 1;
}

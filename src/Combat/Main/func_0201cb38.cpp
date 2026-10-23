#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "World/ZoneFeatures.h"
#include "Resource/Script.h"

struct Struct_0201e518;
struct Struct_0201c1c8;

struct Struct_020fdc20_5 {
    int unknown_0_;
    SafeAllocator* unknown_4_;
    Struct_0201e518* unknown_8_;
};
extern Struct_020fdc20_5 data_020fdc20;

// USA: func_0201cb38
extern "C" ARM int func_0201cb38(Script::Parameter* arg0, int) {
    Struct_0201c1c8* var0 = (Struct_0201c1c8*)arg0;
    ((Struct_020134e0*)data_020fdc20.unknown_8_)->func_0201e518(((Script::Parameter*)var0)->ToInt(), data_020fdc20.unknown_4_);
    return 1;
}

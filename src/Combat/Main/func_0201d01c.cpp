#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "World/ZoneFeatures.h"
#include "Resource/Script.h"

struct Struct_0201e634;
struct Struct_0201c1c8;

struct Struct_020fdc20_6 {
    int unknown_0_;
    SafeAllocator* unknown_4_;
    Struct_0201e634* unknown_8_;
};
extern Struct_020fdc20_6 data_020fdc20;

// USA: func_0201d01c
extern "C" ARM int func_0201d01c(Script::Parameter* arg0, int) {
    Struct_0201c1c8* var0 = (Struct_0201c1c8*)arg0;
    ((Struct_020134e0*)data_020fdc20.unknown_8_)->func_0201e634(((Script::Parameter*)var0)->ToInt(), data_020fdc20.unknown_4_);
    return 1;
}

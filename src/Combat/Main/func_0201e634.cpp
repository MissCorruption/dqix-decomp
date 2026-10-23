#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "World/ZoneFeatures.h"

struct Struct_0201e634 {
    char unknown_0_[0x24];
    void* unknown_24_;
    int unknown_28_;
    int unknown_2c_;
};

// USA: func_0201e634
ARM void Struct_020134e0::func_0201e634(int arg0, SafeAllocator* arg1) {
    struct Struct_0201e634* var0 = (struct Struct_0201e634*)this;
    var0->unknown_24_ = arg1->Allocate(arg0 * 0x74);
    var0->unknown_28_ = 0;
    var0->unknown_2c_ = arg0;
}

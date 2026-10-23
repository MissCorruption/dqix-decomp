#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "World/ZoneFeatures.h"

struct Struct_0201e480 {
    char  unknown_0_[0xc];
    void* unknown_c_;
    int   unknown_10_;
    int   unknown_14_;
};

// USA: func_0201e480
ARM void Struct_020134e0::func_0201e480(int arg0, SafeAllocator* arg1) {
    struct Struct_0201e480* var0 = (struct Struct_0201e480*)this;
    var0->unknown_c_ = arg1->Allocate(arg0 * 0x24);
    var0->unknown_10_ = 0;
    var0->unknown_14_ = arg0;
}

#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "World/ZoneFeatures.h"

struct Struct_0201e25c {
    void* unknown_0_;
    int   unknown_4_;
    int   unknown_8_;
};

// USA: func_0201e25c
ARM void Struct_020134e0::func_0201e25c(int arg0, SafeAllocator* arg1) {
    struct Struct_0201e25c* var0 = (struct Struct_0201e25c*)this;
    var0->unknown_0_ = arg1->Allocate(arg0 * 0x58);
    var0->unknown_4_ = 0;
    var0->unknown_8_ = arg0;
}

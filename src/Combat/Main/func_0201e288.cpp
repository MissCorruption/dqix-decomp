#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "World/ZoneFeatures.h"

struct Struct_0201e288 {
    char  unknown_0_[0x30];
    void* unknown_30_;
    int   unknown_34_;
    int   unknown_38_;
};

// USA: func_0201e288
ARM void Struct_020134e0::func_0201e288(int arg0, SafeAllocator* arg1) {
    struct Struct_0201e288* var0 = (struct Struct_0201e288*)this;
    var0->unknown_30_ = arg1->Allocate(arg0 * 0x10);
    var0->unknown_34_ = 0;
    var0->unknown_38_ = arg0;
}

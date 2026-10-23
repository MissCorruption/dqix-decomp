#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "World/ZoneFeatures.h"

struct Struct_0201e518 {
    char  unknown_0_[0x18];
    void* unknown_18_;
    int   unknown_1c_;
    int   unknown_20_;
};

// USA: func_0201e518
ARM void Struct_020134e0::func_0201e518(int arg0, SafeAllocator* arg1) {
    struct Struct_0201e518* var0 = (struct Struct_0201e518*)this;
    var0->unknown_18_ = arg1->Allocate(arg0 * 0x70);
    var0->unknown_1c_ = 0;
    var0->unknown_20_ = arg0;
}

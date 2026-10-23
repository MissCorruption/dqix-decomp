#include <globaldefs.h>
#include "NitroSDK/Memory/HPXEAllocator.h"

struct Struct_02114e20 {
    void* unknown_0_;
    HPXEAllocator* unknown_4_;
};

// USA: func_02012dd0
extern "C" ARM unsigned int func_02012dd0(Struct_02114e20* arg0) {
    return arg0->unknown_4_->GetMaxPossibleAllocation(4);
}

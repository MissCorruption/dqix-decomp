#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_0201c414 {
    void* unknown_0_;            // 0x0
    int unknown_4_;            // 0x4
    int unknown_8_;              // 0x8
    char unknown_c_[0x14];       // 0xc..0x1f
    SafeAllocator* unknown_20_; // 0x20
};

// USA: func_0201c414
extern "C" ARM void func_0201c414(struct Struct_0201c414* arg0, int arg1) {
    arg0->unknown_0_ = arg0->unknown_20_->Allocate(arg1 << 5);
    if (arg0->unknown_0_ != NULL) {
        arg0->unknown_4_ = arg1;
        arg0->unknown_8_ = 0;
    }
}

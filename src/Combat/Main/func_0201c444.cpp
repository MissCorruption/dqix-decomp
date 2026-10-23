#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_0201c444 {
    char unknown_0_[0xc];       // 0x0..0xb
    void* unknown_c_;            // 0xc
    char unknown_10_[0x4];       // 0x10..0x13
    int unknown_14_;            // 0x14
    char unknown_18_[0x8];       // 0x18..0x1f
    SafeAllocator* unknown_20_; // 0x20
};

// USA: func_0201c444
extern "C" ARM void func_0201c444(struct Struct_0201c444* arg0, int arg1) {
    arg0->unknown_c_ = arg0->unknown_20_->Allocate(arg1 * 0x2c);
    if (arg0->unknown_c_ != NULL) {
        arg0->unknown_14_ = arg1;
    }
}

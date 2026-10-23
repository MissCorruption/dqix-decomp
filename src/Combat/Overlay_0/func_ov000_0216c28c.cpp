#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

extern "C" void func_ov000_02169b78(void* arg0);

struct Struct_ov000_02184264_20 {
    char unknown_0_[8];
    SafeAllocator* unknown_8_;
};
extern Struct_ov000_02184264_20 data_ov000_02184264;

struct Struct_ov000_0216c28c {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

// USA: func_ov000_0216c28c
extern "C" ARM int func_ov000_0216c28c(void) {
    struct Struct_ov000_0216c28c* var0 = (struct Struct_ov000_0216c28c*)data_ov000_02184264.unknown_8_->Allocate(0xc);
    var0->unknown_0_ = 0;
    var0->unknown_4_ = 0;
    var0->unknown_0_ = 0x5e;
    func_ov000_02169b78(var0);
    return 1;
}

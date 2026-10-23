#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

extern "C" void func_ov000_02169b78(void* arg0);

struct Struct_ov000_02184264_2 {
    unsigned char unknown_0_[8];
    SafeAllocator* unknown_8_;
};
extern struct Struct_ov000_02184264_2 data_ov000_02184264;

struct Struct_ov000_02169bb4 {
    int unknown_0_;
    int unknown_4_;
};

// USA: func_ov000_02169bb4
extern "C" ARM void func_ov000_02169bb4(int arg0) {
    struct Struct_ov000_02169bb4* var0 = (struct Struct_ov000_02169bb4*)data_ov000_02184264.unknown_8_->Allocate(8);
    if (var0 == NULL) return;
    var0->unknown_0_ = 0;
    var0->unknown_4_ = 0;
    var0->unknown_0_ = arg0;
    func_ov000_02169b78(var0);
}

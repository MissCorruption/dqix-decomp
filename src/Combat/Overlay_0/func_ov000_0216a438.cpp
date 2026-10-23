#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_ov000_02169a40;
extern "C" void func_ov000_02169a40(struct Struct_ov000_02169a40* arg0);

struct Struct_ov000_0216a438 {
    unsigned short* unknown_0_;
    unsigned short unknown_4_;
    unsigned int unknown_8_;
    struct Struct_ov000_0216a438* unknown_c_;
};

struct Struct_ov000_02184264_9 {
    struct Struct_ov000_0216a438* unknown_0_;
    struct Struct_ov000_0216a438* unknown_4_;
    SafeAllocator* unknown_8_;
};
extern struct Struct_ov000_02184264_9 data_ov000_02184264;

// USA: func_ov000_0216a438
extern "C" ARM int func_ov000_0216a438(void) {
    struct Struct_ov000_0216a438* var0 = (struct Struct_ov000_0216a438*)data_ov000_02184264.unknown_8_->Allocate(0x10);
    func_ov000_02169a40((struct Struct_ov000_02169a40*)var0);
    var0->unknown_4_ = 3;
    var0->unknown_0_ = (unsigned short*)data_ov000_02184264.unknown_8_->Allocate(var0->unknown_4_ * 2);
    var0->unknown_0_[0] = 1;
    var0->unknown_0_[1] = 2;
    var0->unknown_0_[2] = 0xdb;
    struct Struct_ov000_0216a438* var1 = data_ov000_02184264.unknown_4_;
    if (var1 == 0) {
        data_ov000_02184264.unknown_4_ = var0;
    } else {
        var1->unknown_c_ = var0;
        data_ov000_02184264.unknown_4_ = var0;
    }
    if (!data_ov000_02184264.unknown_0_) {
        data_ov000_02184264.unknown_0_ = var0;
    }
    return 1;
}

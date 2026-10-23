#include <globaldefs.h>
#include "NitroSDK/Interrupts.h"
#include "NitroSDK/ProcessorContext.h"
#include "NitroSDK/Memory.h"

struct Struct_ov031_0220603c {
    Struct_ov031_0220603c* unknown_0_;
    unsigned short unknown_4_, unknown_6_;
    unsigned int unknown_8_;
    unsigned char unknown_c_[1];
};
struct Struct_ov031_0220603c_2 {
    char unknown_0_[0x100];
    union { Struct_ov031_0220603c* unknown_100_; signed int unknown1_100_; };
    Struct_ov031_0220603c* unknown_104_;
    unsigned short unknown_108_, unknown_10a_;
    BlockedContextList unknown_10c_;
};
struct Struct_ov031_0220603c_3 {
    char unknown_0_[0xa]; unsigned short unknown_a_;
    char unknown_c_[0xc]; unsigned short unknown_18_, unknown_1a_;
    unsigned int unknown_1c_, unknown_20_;
    char unknown_24_[0x40]; Struct_ov031_0220603c_2* unknown_64_;
    char unknown_68_[0xc]; unsigned short unknown_74_;
};
struct Struct_ov031_0220603c_4 {
    char unknown_0_[0x18]; void* (*unknown_18_)(int);
};
struct Struct_ov031_0224e224 { unsigned int unknown_0_, unknown_4_; };
extern Struct_ov031_0220603c_4* data_ov031_022496a4;
extern Struct_ov031_0224e224 data_ov031_0224e224;

// USA: func_ov031_0220603c
extern "C" ARM int func_ov031_0220603c(const void* arg0, unsigned int arg1, Struct_ov031_0220603c_3* arg2) {
    Struct_ov031_0220603c_2* var0 = arg2->unknown_64_;
    Struct_ov031_0220603c* var1;
    int var2 = DisableIRQInterrupts();
    if (var0->unknown_10a_ >= var0->unknown_108_ + arg1) {
        var1 = (Struct_ov031_0220603c*)data_ov031_022496a4->unknown_18_(arg1 + 0xc);
        if (var1) {
            var0->unknown_108_ += arg1;
            var1->unknown_0_ = 0;
            var1->unknown_4_ = arg1;
            var1->unknown_6_ = arg2->unknown_18_;
            var1->unknown_8_ = arg2->unknown_1c_;
            VectorizedInvertedMemcpy(arg0, var1->unknown_c_, arg1);
            if (var0->unknown1_100_) var0->unknown_100_->unknown_0_ = var1;
            var0->unknown_100_ = var1;
            if (!var0->unknown_104_) var0->unknown_104_ = var1;
        } else data_ov031_0224e224.unknown_0_++;
    } else {
        data_ov031_0224e224.unknown_4_++;
    }
    if (!arg2->unknown_74_) arg2->unknown_74_ = arg2->unknown_a_;
    arg2->unknown_18_ = arg2->unknown_1a_;
    arg2->unknown_1c_ = arg2->unknown_20_;
    UnblockContexts(&var0->unknown_10c_);
    SetIRQInterruptState(var2);
    return 1;
}

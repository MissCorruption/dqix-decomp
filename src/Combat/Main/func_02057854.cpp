#include <globaldefs.h>

struct Struct_02057334_2 {
    char unknown_0_[0x4];
    unsigned int unknown_4_;
    unsigned int unknown_8_;
    unsigned char unknown_c_;
    char unknown_d_[0x34 - 0xd];
    struct Struct_02057334_2* unknown_34_;
    unsigned char unknown_38_;
    unsigned char unknown_39_;
    char unknown_3a_[0x148 - 0x3a];
    struct Struct_02057334_2* unknown_148_;
};

// USA: func_02057854
extern "C" ARM int func_02057854(struct Struct_02057334_2* arg0) {
    struct Struct_02057334_2* var0;
    if (arg0->unknown_c_ != 0) return 0;
    if (arg0->unknown_39_ != 0) return 0;
    if (arg0->unknown_38_ == 0) {
        for (var0 = arg0->unknown_34_; var0 != 0; var0 = var0->unknown_148_) {
            int var1;
            if (var0->unknown_c_ != 0) {
                var1 = 0;
            } else {
                var1 = var0->unknown_8_ <= var0->unknown_4_;
            }
            if (!var1) return 0;
        }
    }
    return arg0->unknown_8_ < arg0->unknown_4_;
}

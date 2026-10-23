#include <globaldefs.h>

struct Struct_ov023_021f6d14_2 {
    unsigned int unknown_0_;
    int unknown_4_;
    struct Struct_ov023_021f6d14_2* unknown_8_;
    struct Struct_ov023_021f6d14_2* unknown_c_;
};

struct Struct_ov023_021f6d14 { char unknown_0_[0x28]; struct Struct_ov023_021f6d14_2* unknown_28_; };

// USA: func_ov023_021f6d14
extern "C" ARM void func_ov023_021f6d14(struct Struct_ov023_021f6d14* arg0, struct Struct_ov023_021f6d14_2* arg1) {
    if (arg1 == NULL) return;
    arg1->unknown_8_ = NULL;
    arg1->unknown_c_ = NULL;
    struct Struct_ov023_021f6d14_2* var0 = arg0->unknown_28_;
    if (var0 == NULL) {
        arg0->unknown_28_ = arg1;
        return;
    }
    while (var0 != NULL) {
        if (arg1->unknown_0_ < var0->unknown_0_) {
            if (var0->unknown_8_ != NULL) {
                var0->unknown_8_->unknown_c_ = arg1;
            }
            arg1->unknown_c_ = var0;
            arg1->unknown_8_ = var0->unknown_8_;
            var0->unknown_8_ = arg1;
            if (var0 == arg0->unknown_28_) {
                arg0->unknown_28_ = arg1;
            }
            return;
        }
        if (var0->unknown_c_ == NULL) {
            var0->unknown_c_ = arg1;
            arg1->unknown_8_ = var0;
            return;
        }
        var0 = var0->unknown_c_;
    }
}

#include <globaldefs.h>

struct Struct_ov023_021f6d9c_2 {
    char unknown_0_[0x8];
    struct Struct_ov023_021f6d9c_2* unknown_8_;
    struct Struct_ov023_021f6d9c_2* unknown_c_;
};

struct Struct_ov023_021f6d9c {
    char unknown_0_[0x28];
    struct Struct_ov023_021f6d9c_2* unknown_28_;
};

// USA: func_ov023_021f6d9c
extern "C" ARM void func_ov023_021f6d9c(struct Struct_ov023_021f6d9c* arg0, struct Struct_ov023_021f6d9c_2* arg1) {
    if (arg1 == NULL) {
        return;
    }
    if (arg1 == arg0->unknown_28_) {
        arg0->unknown_28_ = arg1->unknown_c_;
    }
    if (arg1->unknown_8_ != NULL) {
        arg1->unknown_8_->unknown_c_ = arg1->unknown_c_;
    }
    if (arg1->unknown_c_ != NULL) {
        arg1->unknown_c_->unknown_8_ = arg1->unknown_8_;
    }
}

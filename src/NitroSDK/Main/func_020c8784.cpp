#include <globaldefs.h>

struct Struct_020c8784 {
    struct Struct_020c8784* unknown_0_;
    struct Struct_020c8784* unknown_4_;
};

// USA: func_020c8784
extern "C" ARM struct Struct_020c8784* func_020c8784(struct Struct_020c8784* arg0, struct Struct_020c8784* arg1) {
    if (arg1->unknown_4_ != 0) {
        arg1->unknown_4_->unknown_0_ = arg1->unknown_0_;
    }
    if (arg1->unknown_0_ == 0) {
        arg0 = arg1->unknown_4_;
    } else {
        arg1->unknown_0_->unknown_4_ = arg1->unknown_4_;
    }
    return arg0;
}

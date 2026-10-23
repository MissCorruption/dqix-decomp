#include <globaldefs.h>

struct Struct_02046a3c {
    char unknown_0_[2];
    unsigned char unknown_2_;
    char unknown_3_;
    struct Struct_02046a3c* unknown_4_;
};

struct Struct_02046a3c_2 {
    struct Struct_02046a3c* unknown_0_;
    struct Struct_02046a3c* unknown_4_;
};

// USA: func_02046a3c
extern "C" ARM void func_02046a3c(struct Struct_02046a3c_2* arg0, struct Struct_02046a3c* arg1) {
    if (arg0->unknown_0_ != NULL && arg0->unknown_4_ != NULL) {
        arg1->unknown_4_ = arg0->unknown_0_->unknown_4_;
        arg0->unknown_0_->unknown_4_ = arg1;
        if (arg1->unknown_4_ == NULL)
            arg0->unknown_4_ = arg1;
    } else {
        arg0->unknown_0_ = arg1;
        arg0->unknown_4_ = arg1;
        arg1->unknown_4_ = NULL;
    }
    arg1->unknown_2_ = 1;
}

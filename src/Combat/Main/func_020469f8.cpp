#include <globaldefs.h>

struct Struct_020469f8_2 {
    char unknown_0_[2];
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    struct Struct_020469f8_2* unknown_4_;
};

struct Struct_020469f8 {
    struct Struct_020469f8_2* unknown_0_;
    struct Struct_020469f8_2* unknown_4_;
};

// USA: func_020469f8
extern "C" ARM void func_020469f8(struct Struct_020469f8* arg0, struct Struct_020469f8_2* arg1) {
    if (arg0->unknown_0_ != NULL && arg0->unknown_4_ != NULL) {
        arg0->unknown_0_->unknown_3_ = 0;
        arg1->unknown_4_ = arg0->unknown_0_;
        arg0->unknown_0_ = arg1;
    } else {
        arg0->unknown_0_ = arg1;
        arg0->unknown_4_ = arg1;
        arg1->unknown_4_ = NULL;
    }
    arg1->unknown_2_ = 1;
}

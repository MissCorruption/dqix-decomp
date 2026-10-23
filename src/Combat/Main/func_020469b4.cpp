#include <globaldefs.h>

struct Struct_0201bdac {
    char unknown_0_[2];
    unsigned char unknown_2_;
    char unknown_3_;
    struct Struct_0201bdac* unknown_4_;
};

struct Struct_0201bdac_2 {
    struct Struct_0201bdac* unknown_0_;
    struct Struct_0201bdac* unknown_4_;
};

// USA: func_020469b4
extern "C" ARM void func_020469b4(struct Struct_0201bdac_2* arg0, struct Struct_0201bdac* arg1) {
    if (arg0->unknown_0_ != NULL && arg0->unknown_4_ != NULL) {
        arg0->unknown_4_->unknown_4_ = arg1;
        arg0->unknown_4_ = arg1;
        arg1->unknown_4_ = NULL;
    } else {
        arg0->unknown_0_ = arg1;
        arg0->unknown_4_ = arg1;
        arg1->unknown_4_ = NULL;
    }
    arg1->unknown_4_ = NULL;
    arg1->unknown_2_ = 1;
}

#include <globaldefs.h>

struct Struct_02046968_2 {
    char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    struct Struct_02046968_2* unknown_4_;
};

struct Struct_02046968 {
    struct Struct_02046968_2* unknown_0_;
};

// USA: func_02046968
extern "C" ARM void func_02046968(struct Struct_02046968* arg0) {
    struct Struct_02046968_2* var0;
    while ((var0 = arg0->unknown_0_) != NULL) {
        if (var0->unknown_1_ != 0) {
            var0->unknown_2_ = 0;
            arg0->unknown_0_->unknown_3_ = 0;
            arg0->unknown_0_ = arg0->unknown_0_->unknown_4_;
        } else {
            var0->unknown_3_ = 1;
            return;
        }
    }
}

#include <globaldefs.h>

struct Struct_0206ed44_2 {
    char unknown_0_[0x10];
    struct Struct_0206ed44_2* unknown_10_;
};

struct Struct_0206ed44 {
    struct Struct_0206ed44_2* unknown_0_;
    unsigned char unknown_4_;
};

// USA: func_0206eeec
extern "C" ARM void func_0206eeec(struct Struct_0206ed44* arg0, struct Struct_0206ed44_2* arg1) {
    struct Struct_0206ed44_2* var0 = arg0->unknown_0_;
    if (var0 != 0) {
        arg1->unknown_10_ = var0;
        arg0->unknown_0_ = arg1;
    } else {
        arg0->unknown_0_ = arg1;
        arg1->unknown_10_ = 0;
    }
    arg0->unknown_4_++;
}

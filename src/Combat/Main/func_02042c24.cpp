#include <globaldefs.h>

struct Struct_02042c24 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
};

struct Struct_02042b98_3 {
    char unknown_0_[0x440];
    struct Struct_02042c24* unknown_440_;
};

// USA: func_02042c24
extern "C" ARM void func_02042c24(struct Struct_02042b98_3* arg0, int arg1, int arg2) {
    if (arg0->unknown_440_ != 0) {
        arg0->unknown_440_->unknown_0_ = arg1;
        arg0->unknown_440_->unknown_2_ = arg2;
    }
}

#include <globaldefs.h>

struct Struct_02042c3c {
    char unknown_0_[0x4];
    unsigned short unknown_4_;
    unsigned short unknown_6_;
};

struct Struct_02042b98 {
    char unknown_0_[0x440];
    struct Struct_02042c3c* unknown_440_;
};

// USA: func_02042c3c
extern "C" ARM void func_02042c3c(struct Struct_02042b98* arg0, int arg1, int arg2) {
    if (arg0->unknown_440_ != 0) {
        arg0->unknown_440_->unknown_4_ = arg1;
        arg0->unknown_440_->unknown_6_ = arg2;
    }
}

#include <globaldefs.h>

struct Struct_020bc1ec_2 {
    char unknown_0_[0x34];
    unsigned short unknown_34_;
    char unknown_36_[0x2];
    unsigned short unknown_38_;
};

struct Struct_020bc1ec {
    struct Struct_020bc1ec_2* volatile unknown_0_;
};

// USA: func_020bc1ec
extern "C" ARM void func_020bc1ec(struct Struct_020bc1ec* arg0, int arg1) {
    if (arg0->unknown_0_ != 0) {
        arg0->unknown_0_->unknown_34_ = 1;
        arg0->unknown_0_->unknown_38_ = arg1;
        return;
    }
}

#include <globaldefs.h>

struct Struct_ov024_021fb430 {
    char unknown_0_[0x18];
    int unknown_18_;
};

struct Struct_ov024_021fa7ec_5 {
    char unknown_0_[0x138];
    struct Struct_ov024_021fb430* unknown_138_;
};

// USA: func_ov024_021fb430
extern "C" ARM int func_ov024_021fb430(struct Struct_ov024_021fa7ec_5* arg0) {
    return (arg0->unknown_138_->unknown_18_ & 0x2) != 0;
}

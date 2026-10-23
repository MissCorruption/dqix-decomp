#include <globaldefs.h>

struct Struct_ov024_021e05e4 {
    char unknown_0_[0x18];
    int unknown_18_;
};

struct Struct_ov024_021e04e0 {
    char unknown_0_[0x138];
    struct Struct_ov024_021e05e4* unknown_138_;
};

// USA: func_ov024_021e05e4
extern "C" ARM int func_ov024_021e05e4(struct Struct_ov024_021e04e0* arg0) {
    return (arg0->unknown_138_->unknown_18_ & 0x1000) != 0;
}

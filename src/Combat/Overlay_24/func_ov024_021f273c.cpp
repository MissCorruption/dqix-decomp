#include <globaldefs.h>

struct Struct_ov024_021f273c {
    char unknown_0_[0x18];
    int unknown_18_;
};

struct Struct_ov024_021f26fc {
    char unknown_0_[0x138];
    struct Struct_ov024_021f273c* unknown_138_;
};

// USA: func_ov024_021f273c
extern "C" ARM int func_ov024_021f273c(struct Struct_ov024_021f26fc* arg0) {
    return (arg0->unknown_138_->unknown_18_ & 0x8) != 0;
}

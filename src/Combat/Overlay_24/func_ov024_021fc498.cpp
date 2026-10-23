#include <globaldefs.h>

struct Struct_ov024_021fc498 {
    char unknown_0_[0x3b];
    unsigned char unknown_3b_0_:4;
    unsigned char unknown_3b_4_:4;
};

struct Struct_ov024_021fc37c {
    char unknown_0_[0x138];
    struct Struct_ov024_021fc498* unknown_138_;
};

// USA: func_ov024_021fc498
extern "C" ARM int func_ov024_021fc498(struct Struct_ov024_021fc37c* arg0) {
    return arg0->unknown_138_->unknown_3b_4_;
}

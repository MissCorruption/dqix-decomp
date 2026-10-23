#include <globaldefs.h>

struct Struct_ov024_021fb448 {
    char unknown_0_[0x18];
    int unknown_18_;
};

struct Struct_ov024_021fa7ec_6 {
    char unknown_0_[0x138];
    struct Struct_ov024_021fb448* unknown_138_;
};

// USA: func_ov024_021fb448
extern "C" ARM int func_ov024_021fb448(struct Struct_ov024_021fa7ec_6* arg0) {
    return (arg0->unknown_138_->unknown_18_ & 0x4) != 0;
}

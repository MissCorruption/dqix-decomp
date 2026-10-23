#include <globaldefs.h>

struct Struct_ov024_021f6bc0 {
    char unknown_0_[0x14];
    float unknown_14_;
    float unknown_18_;
    float unknown_1c_;
    float unknown_20_;
};

// USA: func_ov024_021f6bc0
extern "C" ARM int func_ov024_021f6bc0(Struct_ov024_021f6bc0* arg0) {
    arg0->unknown_1c_ = 0.75f * arg0->unknown_14_;
    arg0->unknown_20_ = 0.75f * arg0->unknown_18_;
    return 1;
}

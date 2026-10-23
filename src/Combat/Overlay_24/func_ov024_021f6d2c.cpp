#include <globaldefs.h>

extern "C" int func_020882f8(unsigned char* arg0);

struct Struct_ov024_021de25c { char unknown_0_[0x14]; int unknown_14_; };
struct Struct_ov024_021de124 { char unknown_0_[0x138]; struct Struct_ov024_021de25c* unknown_138_; };
extern "C" int func_ov024_021de25c(struct Struct_ov024_021de124* arg0);

struct Struct_ov024_021f6d2c {
    int unknown_0_;
    struct Struct_ov024_021de124* unknown_4_;
    int unknown_8_[3];
    float unknown_14_;
    float unknown_18_;
    float unknown_1c_;
    float unknown_20_;
};

// USA: func_ov024_021f6d2c
extern "C" ARM int func_ov024_021f6d2c(struct Struct_ov024_021f6d2c* arg0) {
    struct Struct_ov024_021de124* var0 = arg0->unknown_4_;
    if (func_020882f8((unsigned char*)var0->unknown_138_) || func_ov024_021de25c(var0)) {
        arg0->unknown_1c_ = arg0->unknown_14_ * 2.0f;
        arg0->unknown_20_ = arg0->unknown_18_ * 2.0f;
    }
    return 1;
}

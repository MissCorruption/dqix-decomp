#include <globaldefs.h>

struct Struct_020885b4;
extern "C" int func_020885b4(struct Struct_020885b4* arg0);
struct Struct_02088514;
extern "C" int func_02088514(struct Struct_02088514* arg0);

struct Struct_ov024_021da9b0 { char unknown_0_[0x14]; int unknown_14_; };
struct Struct_ov024_021da670_7 { char unknown_0_[0x138]; struct Struct_ov024_021da9b0* unknown_138_; };
extern "C" int func_ov024_021da9b0(struct Struct_ov024_021da670_7* arg0);

struct Struct_ov024_021f6cc0 {
    int unknown_0_;
    struct Struct_ov024_021da670_7* unknown_4_;
    int unknown_8_[3];
    float unknown_14_;
    float unknown_18_;
    float unknown_1c_;
    float unknown_20_;
};

// USA: func_ov024_021f6cc0
extern "C" ARM int func_ov024_021f6cc0(struct Struct_ov024_021f6cc0* arg0) {
    struct Struct_ov024_021da670_7* var0 = arg0->unknown_4_;
    if (func_020885b4((struct Struct_020885b4*)var0->unknown_138_) ||
        func_02088514((struct Struct_02088514*)var0->unknown_138_) ||
        func_ov024_021da9b0(var0)) {
        arg0->unknown_1c_ = arg0->unknown_14_ * 1.5f;
        arg0->unknown_20_ = arg0->unknown_18_ * 1.5f;
    }
    return 1;
}

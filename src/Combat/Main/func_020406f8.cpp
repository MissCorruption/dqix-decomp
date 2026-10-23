#include <globaldefs.h>

struct Struct_0203de84 {
    unsigned int unknown_0_[3];
};

struct Struct_020406f8 {
    char unknown_0_[4];
    struct Struct_0203de84 unknown_4_;
};

struct Struct_020406f8_2 {
    char unknown_0_[0x44];
    struct Struct_0203de84 unknown_44_;
};

struct Struct_0203de84_2 {
    char unknown_0_[0x14];
    struct Struct_020406f8* unknown_14_;
    struct Struct_020406f8_2* unknown_18_;
    struct Struct_020406f8_2* unknown_1c_;
};

// USA: func_020406f8
extern "C" ARM void func_020406f8(struct Struct_0203de84* arg0, struct Struct_0203de84_2* arg1) {
    if (arg1->unknown_14_ != NULL) {
        *arg0 = arg1->unknown_14_->unknown_4_;
        return;
    }
    if (arg1->unknown_18_ != NULL) {
        *arg0 = arg1->unknown_18_->unknown_44_;
        return;
    }
    if (arg1->unknown_1c_ != NULL) {
        *arg0 = arg1->unknown_1c_->unknown_44_;
        return;
    }
    {
        struct Struct_0203de84 var0;
        var0.unknown_0_[0] = 0;
        var0.unknown_0_[1] = 0;
        var0.unknown_0_[2] = 0;
        *arg0 = var0;
    }
}

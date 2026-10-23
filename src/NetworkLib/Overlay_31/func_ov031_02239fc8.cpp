#include <globaldefs.h>

struct Struct_ov031_02239fc8 {
    int unknown_0_;
    short unknown_4_;
    char unknown_6_[0x48 - 6];
    int unknown_48_;
    int (*unknown_4c_)(void* event);
    short unknown_50_;
    short unknown_52_;
    int unknown_54_;
    char unknown_58_[0x12a0 - 0x58];
    int unknown_12a0_;
    int unknown_12a4_;
};

struct Struct_ov031_02290d18_21 {
    char unknown_0_[4];
    Struct_ov031_02239fc8* unknown_4_;
};

extern Struct_ov031_02290d18_21 data_ov031_02290d18 __attribute__((aligned(4)));
extern "C" int func_ov031_0223a060();

// USA: func_ov031_02239fc8
extern "C" ARM int func_ov031_02239fc8() {
    data_ov031_02290d18.unknown_4_->unknown_12a4_ = 0;
    data_ov031_02290d18.unknown_4_->unknown_12a0_ = 0;
    data_ov031_02290d18.unknown_4_->unknown_48_ = 0;
    data_ov031_02290d18.unknown_4_->unknown_50_ = 0;
    data_ov031_02290d18.unknown_4_->unknown_52_ = 1;
    data_ov031_02290d18.unknown_4_->unknown_54_ = 0;
    data_ov031_02290d18.unknown_4_->unknown_0_ = 0;
    data_ov031_02290d18.unknown_4_->unknown_4_ = 0;
    data_ov031_02290d18.unknown_4_->unknown_4c_ = NULL;
    int var0;
    if (func_ov031_0223a060() == 0) {
        var0 = 0;
    } else {
        var0 = 1;
    }
    return var0;
}

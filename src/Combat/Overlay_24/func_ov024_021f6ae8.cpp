#include <globaldefs.h>

struct Struct_ov024_021f6ae8_2 {
    char unknown_0_[0xa];
    unsigned short unknown_a_0_ : 12;
    unsigned short unknown_b_4_ : 1;
    unsigned short unknown_b_5_ : 3;
};

struct Struct_ov024_021f6ae8 {
    char unknown_0_[8];
    struct Struct_ov024_021f6ae8_2* unknown_8_;
    char unknown_c_[0x10];
    float unknown_1c_;
    float unknown_20_;
};

// USA: func_ov024_021f6ae8
extern "C" ARM int func_ov024_021f6ae8(struct Struct_ov024_021f6ae8* arg0) {
    struct Struct_ov024_021f6ae8_2* var0 = arg0->unknown_8_;
    if (var0 != NULL && var0->unknown_b_4_) {
        arg0->unknown_1c_ = 2.0f;
        arg0->unknown_20_ = 1.0f;
    } else {
        arg0->unknown_1c_ = 0.0f;
        arg0->unknown_20_ = 0.0f;
    }
    return 1;
}

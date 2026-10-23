#include <globaldefs.h>

struct Struct_0201c4d4_3 { unsigned char unknown_0_[8]; };
struct Struct_0201c4d4_4 { unsigned char unknown_0_[0x1c]; };
struct Struct_0201c4d4 { unsigned char unknown_0_0_ : 3; unsigned char unknown_0_3_ : 5; };

struct Struct_0201c4d4_2 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned char unknown_4_;
    struct Struct_0201c4d4_3 unknown_5_;
    struct Struct_0201c4d4_4 unknown_d_;
    struct Struct_0201c4d4 unknown_29_;
    unsigned char unknown_2a_;
};

struct Struct_0201c1f8 {
    unsigned char* unknown_0_;
    int unknown_4_;
    int unknown_8_;
    struct Struct_0201c4d4_2* unknown_c_;
    int unknown_10_;
    int unknown_14_;
    int unknown_18_;
    int unknown_1c_;
};

// USA: func_0201c4d4
extern "C" ARM void func_0201c4d4(struct Struct_0201c1f8* arg0, struct Struct_0201c4d4_2* arg1) {
    struct Struct_0201c4d4_2* var0;

    if (arg0->unknown_0_) {
        if (arg0->unknown_8_ < arg0->unknown_4_) {
            (arg0->unknown_0_ + 0x1f)[(arg0->unknown_8_ - 1) * 0x20]++;
        }
    }

    if (arg0->unknown_18_ >= 0) {
        if (arg0->unknown_18_ != arg0->unknown_8_ - 1) {
            return;
        }
    }

    if (arg0->unknown_1c_ >= 0) {
        if (arg0->unknown_1c_ != arg1->unknown_29_.unknown_0_0_) {
            return;
        }
    }

    if (!arg0->unknown_c_) {
        return;
    }
    if (arg0->unknown_10_ >= arg0->unknown_14_) {
        return;
    }

    var0 = &arg0->unknown_c_[arg0->unknown_10_];
    var0->unknown_0_ = arg1->unknown_0_;
    var0->unknown_2_ = arg1->unknown_2_;
    var0->unknown_4_ = arg1->unknown_4_;
    var0->unknown_5_ = arg1->unknown_5_;
    var0->unknown_d_ = arg1->unknown_d_;
    var0->unknown_29_ = arg1->unknown_29_;
    var0->unknown_2a_ = arg1->unknown_2a_;

    if (arg0->unknown_8_ > 0) {
        arg0->unknown_c_[arg0->unknown_10_].unknown_4_ = arg0->unknown_8_ - 1;
    }

    arg0->unknown_10_ = arg0->unknown_10_ + 1;
}

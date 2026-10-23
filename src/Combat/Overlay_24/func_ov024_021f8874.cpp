#include <globaldefs.h>

struct Struct_ov024_021f8874_3 {
    char unknown_0_[0x2];
    unsigned short unknown_2_;
    char unknown_4_[0x14 - 0x4];
    int unknown_14_;
};
struct Struct_ov024_021f8874 {
    char unknown_0_[0x4];
    short unknown_4_;
    char unknown_6_[0x138 - 0x6];
    struct Struct_ov024_021f8874_3* unknown_138_;
};
struct Struct_ov024_021f8874_2 { char unknown_0_[0x8]; struct Struct_ov024_021f8874* unknown_8_; };
struct Struct_ov024_021f8874_4 {
    char unknown_0_[0x8];
    unsigned int unknown_8_0_ : 8;
    unsigned int unknown_9_0_ : 19;
    unsigned int unknown_b_3_ : 1;
    unsigned int unknown_b_4_ : 4;
    char unknown_c_[0x10 - 0xc];
    unsigned int unknown_10_;
};

extern "C" int func_ov024_021f87dc(struct Struct_ov024_021f8874* arg0, struct Struct_ov024_021f8874_4* arg1, int* arg2);

// USA: func_ov024_021f8874
extern "C" ARM int func_ov024_021f8874(struct Struct_ov024_021f8874_2* arg0, struct Struct_ov024_021f8874_4* arg1, struct Struct_ov024_021f8874* arg2, int* arg3) {
    if (!arg1) return 0;
    if (arg1->unknown_b_3_ == 0) return 0;
    int var0 = 0;
    short var1 = arg2->unknown_4_;
    if (var1 >= 0 && var1 <= 3) {
        var0 = 1;
    }
    int var2;
    if (var0) {
        var2 = func_ov024_021f87dc(arg2, arg1, arg3);
    } else {
        var2 = arg1->unknown_8_0_;
    }
    unsigned short var3 = arg0->unknown_8_->unknown_138_->unknown_2_;
    if (var2 > var3) return 0;
    if (arg1->unknown_10_ & 1) {
        if (arg2->unknown_138_->unknown_14_ & 0x100) return 0;
    }
    if (arg1->unknown_10_ & 2) {
        if (arg2->unknown_138_->unknown_14_ & 0x80) return 0;
    }
    return 1;
}

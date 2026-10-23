#include <globaldefs.h>

struct Struct_ov014_02184f78;

struct Struct_020a95a4_5 {
    unsigned int unknown_0_0_ : 10;
    unsigned int unknown_1_2_ : 1;
    unsigned int unknown_1_3_ : 7;
    unsigned int unknown_2_2_ : 7;
    unsigned int unknown_3_1_ : 7;
};

struct Struct_ov014_02184dcc {
    char unknown_0_[0x48];
    Struct_ov014_02184f78* unknown_48_;
    Struct_ov014_02184f78* unknown_4c_;
    Struct_020a95a4_5* unknown_50_;
    char unknown_54_[0x80 - 0x54];
    unsigned char unknown_80_;
    unsigned char unknown_81_;
    char unknown_82_[0x90 - 0x82];
    unsigned char unknown_90_[3];
    unsigned char unknown_93_;
};

extern "C" void func_ov014_02184f78(Struct_ov014_02184dcc* arg0, Struct_ov014_02184f78* arg1, Struct_020a95a4_5* arg2, bool arg3);

// USA: func_ov014_02184dcc
extern "C" ARM void func_ov014_02184dcc(Struct_ov014_02184dcc* arg0) {
    if (arg0->unknown_81_ & 1)
        return;
    if (arg0->unknown_81_ & 8)
        return;
    if (arg0->unknown_50_ == NULL || !arg0->unknown_50_->unknown_1_2_)
        return;
    unsigned char var0 = arg0->unknown_80_;
    func_ov014_02184f78(arg0, arg0->unknown_48_, arg0->unknown_50_, false);
    arg0->unknown_80_ = var0 + 1;
    arg0->unknown_80_ %= 2;
    arg0->unknown_90_[2] = true;
    arg0->unknown_81_ |= 8;
}

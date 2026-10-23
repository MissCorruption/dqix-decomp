#include <globaldefs.h>

struct Struct_02017098_3 {
    char unknown_0_[0xc];
    char* unknown_c_;
    char unknown_10_[0x14 - 0x10];
    int unknown_14_;
    char unknown_18_[0x70 - 0x18];
    int unknown_70_;
    int unknown_74_;
    int unknown_78_;
    int unknown_7c_;
    char unknown_80_[0x84 - 0x80];
    unsigned char unknown_84_0_ : 1;
    unsigned char unknown_84_1_ : 7;
};

extern int data_02114e50;

// USA: func_020478bc
extern "C" ARM void func_020478bc(struct Struct_02017098_3* arg0, int arg1) {
    if (!arg0->unknown_84_0_) {
        return;
    }
    if (arg0->unknown_14_ <= 0) {
        return;
    }
    if (arg0->unknown_74_ == arg1 || arg1 == 0) {
        return;
    }

    arg0->unknown_70_ = 0;
    arg0->unknown_74_ = arg1;
    arg0->unknown_78_ = data_02114e50;
    arg0->unknown_7c_ = *(int*)(*(char**)(arg0->unknown_c_ + arg0->unknown_74_ * 8 + 4) + arg0->unknown_70_ * 0xc + 4);
}

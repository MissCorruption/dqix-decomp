#include <globaldefs.h>

struct Struct_02070950 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

struct Struct_02070950_2 {
    unsigned char unknown_0_;   // 0x0
    unsigned char unknown_1_;    // 0x1
    unsigned short unknown_2_;   // 0x2
    unsigned char unknown_4_;     // 0x4
    unsigned char unknown_5_[3]; // 0x5-0x7
    int unknown_8_;             // 0x8
    unsigned char unknown_c_[4]; // 0xc-0xf
    int unknown_10_;            // 0x10
};

// USA: func_02070950
extern "C" ARM void func_02070950(struct Struct_02070950_2* arg0, struct Struct_02070950* arg1, int arg2, int arg3, int arg4) {
    if (arg2 < 0) {
        return;
    }
    arg0->unknown_10_ = arg2;
    arg0->unknown_2_ = arg1->unknown_0_ | (arg1->unknown_4_ << 5) | (arg1->unknown_8_ << 10);
    arg0->unknown_8_ = (int)(16.667f * (float)arg3);
    arg0->unknown_4_ = (unsigned char)arg4;
    arg0->unknown_0_ = 1;
}

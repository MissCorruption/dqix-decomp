#include <globaldefs.h>

struct Struct_02070900 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

struct Struct_02070900_2 {
    unsigned char unknown_0_;   // 0x0
    unsigned char unknown_1_;    // 0x1
    unsigned short unknown_2_;   // 0x2
    unsigned char unknown_4_;     // 0x4
    unsigned char unknown_5_[3]; // 0x5-0x7
    int unknown_8_;             // 0x8
};

// USA: func_02070900
extern "C" ARM void func_02070900(struct Struct_02070900_2* arg0, struct Struct_02070900* arg1, unsigned int arg2) {
    arg0->unknown_2_ = arg1->unknown_0_ | (arg1->unknown_4_ << 5) | (arg1->unknown_8_ << 10);
    arg0->unknown_8_ = (int)(16.667f * (float)arg2);
    arg0->unknown_4_ = 0x1f;
    arg0->unknown_0_ = 1;
}

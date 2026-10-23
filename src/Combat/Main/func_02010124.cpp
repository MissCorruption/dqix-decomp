#include <globaldefs.h>

struct Struct_0200f3a4_9 {
    char unknown_0_[0x3b4];
    int unknown_3b4_;
    int unknown_3b8_;
    unsigned short unknown_3bc_;
    char unknown_3be_[2];
    int unknown_3c0_;
    int unknown_3c4_;
};

// USA: func_02010124
extern "C" ARM void func_02010124(struct Struct_0200f3a4_9* arg0) {
    arg0->unknown_3b4_ = 0x21;
    arg0->unknown_3b8_ = 0x21;
    arg0->unknown_3bc_ = 0x1000;
    arg0->unknown_3c4_ = 2;
    arg0->unknown_3c0_ = 0x2000;
}

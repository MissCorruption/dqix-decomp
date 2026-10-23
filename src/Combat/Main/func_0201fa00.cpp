#include <globaldefs.h>

struct Struct_0201fa00 {
    unsigned char unknown_0_;    // +0
    unsigned char unknown_1_;       // +1
    unsigned char unknown_2_;       // +2
    unsigned char unknown_3_;       // +3
    unsigned short unknown_4_;      // +4
    unsigned short unknown_6_;      // +6
    int unknown_8_;                 // +8
    int unknown_c_;                 // +0xc
    int unknown_10_;                // +0x10
};

extern "C" {
// USA: func_0201fa00
ARM void func_0201fa00(struct Struct_0201fa00* arg0) {
    arg0->unknown_0_ = 1;
    arg0->unknown_1_ = 0;
    arg0->unknown_4_ = 0;
    arg0->unknown_10_ = 0x43300000;
    arg0->unknown_8_ = 0;
    arg0->unknown_c_ = 0;
}
}

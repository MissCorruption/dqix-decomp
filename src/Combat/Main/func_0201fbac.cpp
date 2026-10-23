#include <globaldefs.h>

struct Struct_0201fbac {
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

// USA: func_0201fbac
extern "C" ARM void func_0201fbac(struct Struct_0201fbac* arg0) {
    unsigned char var0 = arg0->unknown_0_;
    if (var0 == 1 || var0 == 4) {
        arg0->unknown_1_ = 3;
    } else if (var0 == 2) {
        arg0->unknown_10_ = 0x43080000;
    }
    arg0->unknown_4_ = 0;
}

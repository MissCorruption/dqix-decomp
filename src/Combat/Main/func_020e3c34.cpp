#include <globaldefs.h>

struct Struct_0204693c;
extern "C" void func_0204693c(Struct_0204693c* arg0);

struct Struct_020e3b8c_2 {
    unsigned char unknown_0_;    // 0
    unsigned char unknown_1_[7];   // 1..7
    unsigned char unknown_8_;     // 8
    unsigned char unknown_9_;     // 9
    unsigned short unknown_a_;   // 0xa
    int unknown_c_;              // 0xc
    int unknown_10_;             // 0x10
    int unknown_14_[2];         // 0x14, 0x18
    int unknown_1c_;             // 0x1c
    int unknown_20_;             // 0x20
    unsigned char unknown_24_;   // 0x24
};

// USA: func_020e3c34
extern "C" ARM void func_020e3c34(Struct_020e3b8c_2* arg0) {
    int var0;
    func_0204693c((Struct_0204693c*)arg0);
    arg0->unknown_0_ = 0x4d;
    arg0->unknown_1c_ = 0;
    arg0->unknown_20_ = 0;
    for (var0 = 0; var0 < 2; var0++) {
        arg0->unknown_14_[var0] = -1;
    }
    arg0->unknown_8_ = 0;
    arg0->unknown_9_ = 0;
    arg0->unknown_a_ = 0;
    arg0->unknown_c_ = 0;
    arg0->unknown_10_ = 0;
    arg0->unknown_24_ = 1;
}

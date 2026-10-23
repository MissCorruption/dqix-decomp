#include <globaldefs.h>

extern "C" void func_02059cc8(unsigned char* arg0);

struct Struct_02057930 {
    int unknown_0_;                       // 0x0
    int unknown_4_;                       // 0x4
    unsigned char unknown_8_[16][0xd4];  // 0x8 .. 0xd48
    int unknown_d48_;                     // 0xd48
    int unknown_d4c_;                     // 0xd4c
    int unknown_d50_;                     // 0xd50
};

// USA: func_02057930
extern "C" ARM void func_02057930(Struct_02057930* arg0) {
    int var0;
    arg0->unknown_0_ = 0;
    arg0->unknown_4_ = 0;
    arg0->unknown_d4c_ = 0;
    arg0->unknown_d50_ = 0;
    for (var0 = 0; var0 < 16; var0++) {
        func_02059cc8(arg0->unknown_8_[var0]);
    }
    arg0->unknown_d48_ = 0;
}

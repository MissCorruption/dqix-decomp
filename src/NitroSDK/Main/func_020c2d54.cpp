#include <globaldefs.h>

struct Struct_020c2d54 {
    volatile unsigned short unknown_0_;
    unsigned char unknown_2_[0xe];
    volatile unsigned int unknown_10_;
    unsigned int unknown_14_;
    volatile long long unknown_18_;
};

// USA: func_020c2d54
extern "C" ARM int FastIntModulus(int arg0, int arg1) {
    struct Struct_020c2d54* var0 = (struct Struct_020c2d54*)0x4000280;
    var0->unknown_0_ = 0;
    var0->unknown_10_ = arg0;
    var0->unknown_18_ = (unsigned int)arg1;
    while (var0->unknown_0_ & 0x8000) {}
    return *(volatile int*)0x40002a8;
}

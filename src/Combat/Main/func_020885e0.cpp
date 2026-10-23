#include <globaldefs.h>

struct Struct_020885e0 {
    unsigned char unknown_0_[0x14];
    unsigned int unknown_14_;
    unsigned int unknown_18_;
    unsigned char unknown_1c_[6];
    unsigned short unknown_22_0_ : 2;
};

// USA: func_020885e0
extern "C" ARM int func_020885e0(struct Struct_020885e0* arg0) {
    int var0 = arg0->unknown_14_;
    if (var0 & 0x1) {
        return 0;
    }
    if (var0 & 0x1000000) {
        return 0;
    }
    if (var0 & 0x2) {
        if (arg0->unknown_22_0_ == 2) {
            return 0;
        }
    }
    return 1;
}

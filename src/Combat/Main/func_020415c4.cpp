#include <globaldefs.h>

struct Struct_020415c4 {
    char unknown_0_[0x54];
    int unknown_54_;
    char unknown_58_[0x54];
    unsigned short unknown_ac_;
    char unknown_ae_[0x2];
    int unknown_b0_;
};

// USA: func_020415c4
extern "C" ARM int func_020415c4(struct Struct_020415c4* arg0) {
    if (arg0->unknown_ac_ & 0x2) {
        return arg0->unknown_b0_;
    }
    return arg0->unknown_54_;
}

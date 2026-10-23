#include <globaldefs.h>

struct Struct_020885b4 {
    unsigned char unknown_0_[0x14];
    unsigned int unknown_14_;
    unsigned int unknown_18_;
    unsigned char unknown_1c_[6];
    unsigned short unknown_22_0_ : 2;
};

// USA: func_020885b4
extern "C" ARM int func_020885b4(struct Struct_020885b4* arg0) {
    if (arg0->unknown_14_ & 0x2) {
        if (arg0->unknown_22_0_ == 1) {
            return 1;
        }
    }
    return 0;
}

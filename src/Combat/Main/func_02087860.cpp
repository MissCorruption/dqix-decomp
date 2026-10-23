#include <globaldefs.h>

struct Struct_02087860 {
    char unknown_0_[0x14];
    unsigned int unknown_14_;
    char unknown_18_[0x40];
    int unknown_58_0_ : 3;
    int unknown_58_3_ : 3;
};

// USA: func_02087860
extern "C" ARM int func_02087860(Struct_02087860* arg0, unsigned char arg1) {
    if (arg0->unknown_14_ & 1) return 0;
    if (arg1 == 0) {
        if (arg0->unknown_58_3_ < 2) return 1;
    } else {
        if (arg0->unknown_58_3_ > -2) return 1;
    }
    return 0;
}

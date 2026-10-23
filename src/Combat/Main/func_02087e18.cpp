#include <globaldefs.h>

struct Struct_02087e18 {
    char unknown_0_[0x14];
    unsigned int unknown_14_;
    char unknown_18_[0x40];
    int : 21;
    int unknown_5a_5_ : 3;
};

// USA: func_02087e18
extern "C" ARM int func_02087e18(Struct_02087e18* arg0, unsigned char arg1) {
    if (arg0->unknown_14_ & 1) return 0;
    if (arg1 == 0) {
        if (arg0->unknown_5a_5_ < 2) return 1;
    } else {
        if (arg0->unknown_5a_5_ > -2) return 1;
    }
    return 0;
}

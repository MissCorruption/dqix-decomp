#include <globaldefs.h>

struct Struct_02088514 {
    char unknown_0_[0x14];
    unsigned int unknown_14_;
    char unknown_18_[0xa];
    unsigned short unknown_22_0_ : 2;
    unsigned short unknown_22_2_ : 14;
};

// USA: func_02088514
extern "C" ARM int func_02088514(struct Struct_02088514* arg0) {
    if (arg0->unknown_14_ & 0x2) {
        if (arg0->unknown_22_0_ == 2) {
            return 1;
        }
    }
    return 0;
}

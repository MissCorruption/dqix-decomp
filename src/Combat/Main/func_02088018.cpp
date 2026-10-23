#include <globaldefs.h>

struct Struct_02088018 {
    char unknown_0_[0x14];
    unsigned int unknown_14_;
    char unknown_18_[0x40];
    int : 24;
    int unknown_5b_0_ : 3;
};

// USA: func_02088018
extern "C" ARM int func_02088018(struct Struct_02088018* arg0, int arg1) {
    if (arg0->unknown_14_ & 1) return 0;
    if (arg1 == 0) {
        if (arg0->unknown_5b_0_ < 2) return 1;
    } else {
        if (arg0->unknown_5b_0_ > -2) return 1;
    }
    return 0;
}

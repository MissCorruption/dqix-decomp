#include <globaldefs.h>

struct Struct_02088674 {
    unsigned char unknown_0_[0x18];
    unsigned int unknown_18_;
    unsigned char unknown_1c_[6];
    unsigned short : 9;
    unsigned short unknown_23_1_ : 3;
    unsigned short : 4;
    unsigned char unknown_24_[0x6a - 0x24];
    unsigned char unknown_6a_;
    unsigned char unknown_6b_[0x8d - 0x6b];
    unsigned char unknown_8d_;
};

// USA: func_02088674
extern "C" ARM void func_02088674(struct Struct_02088674* arg0) {
    arg0->unknown_18_ &= ~0x80;
    arg0->unknown_23_1_ = 0;
    arg0->unknown_6a_ = 0;
    arg0->unknown_8d_ = 0;
}

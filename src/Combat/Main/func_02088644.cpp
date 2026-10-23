#include <globaldefs.h>

struct Struct_02088644 {
    unsigned char unknown_0_[0x14];
    unsigned int unknown_14_;
    unsigned int unknown_18_;
    unsigned char unknown_1c_[6];
    unsigned short unknown_22_0_ : 2;
};

// USA: func_02088644
extern "C" ARM void func_02088644(struct Struct_02088644* arg0) {
    arg0->unknown_14_ &= ~0x2;
    arg0->unknown_22_0_ = 0;
}

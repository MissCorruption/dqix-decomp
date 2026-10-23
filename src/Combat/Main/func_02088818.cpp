#include <globaldefs.h>

struct Struct_020886dc_2 {
    unsigned char unknown_0_[0x22];
    unsigned short : 9;
    unsigned short unknown_23_1_ : 3;
    unsigned short : 4;
    unsigned char unknown_24_[0x6a - 0x24];
    unsigned char unknown_6a_;
    unsigned char unknown_6b_[0x8d - 0x6b];
    unsigned char unknown_8d_;
};

// USA: func_02088818
extern "C" ARM void func_02088818(struct Struct_020886dc_2* arg0, unsigned short arg1) {
    arg0->unknown_23_1_ = arg1;
    arg0->unknown_6a_ = 5;
    arg0->unknown_8d_ = 0;
}

#include <globaldefs.h>

struct Struct_02088418 {
    unsigned char unknown_0_[0x14];
    unsigned int unknown_14_;
    unsigned char unknown_18_[0x22 - 0x18];
    unsigned short : 2;
    unsigned short unknown_22_2_ : 4;
    unsigned short : 10;
};

// USA: func_02088418
extern "C" ARM int func_02088418(struct Struct_02088418* arg0, int arg1, int arg2) {
    unsigned int var0 = arg0->unknown_14_;
    if (var0 & 0x1) return 0;
    if ((var0 & 0x1000000) && arg2 != 0x1fc && arg2 != 0x20f) return 0;
    if (var0 & 0x8) return 0;
    if (var0 & 0x80000) {
        if (arg1 == arg0->unknown_22_2_) return 0;
    }
    return 1;
}

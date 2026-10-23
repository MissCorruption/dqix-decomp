#include <globaldefs.h>

struct Struct_02088660 {
    unsigned char unknown_0_[0x18];
    unsigned int unknown_18_;
};

// USA: func_02088660
extern "C" ARM int func_02088660(struct Struct_02088660* arg0) {
    return (arg0->unknown_18_ & 0x80) != 0;
}

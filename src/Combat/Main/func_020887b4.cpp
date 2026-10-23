#include <globaldefs.h>

struct Struct_020886dc_2;
extern "C" void func_02088818(struct Struct_020886dc_2* arg0, unsigned short arg1);

struct Struct_020887b4 {
    unsigned char unknown_0_[0x18];
    unsigned int unknown_18_;
};

// USA: func_020887b4
extern "C" ARM void func_020887b4(struct Struct_020887b4* arg0) {
    arg0->unknown_18_ |= 0x80;
    func_02088818((struct Struct_020886dc_2*)arg0, 4);
}

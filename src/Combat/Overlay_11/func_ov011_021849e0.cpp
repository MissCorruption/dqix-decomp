#include <globaldefs.h>

struct Struct_ov004_02158dcc { char unknown_0_[0x1b0]; unsigned short unknown_1b0_; char unknown_1b2_[0x1c8-0x1b2]; int unknown_1c8_; };

// USA: func_ov011_021849e0
extern "C" ARM void func_ov011_021849e0(Struct_ov004_02158dcc* arg0, unsigned short arg1) {
    if (arg0->unknown_1b0_ != arg1) {
        arg0->unknown_1c8_ = 1;
    }
    arg0->unknown_1b0_ = arg1;
}

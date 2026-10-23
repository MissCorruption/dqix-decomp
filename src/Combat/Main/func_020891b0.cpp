#include <globaldefs.h>

struct Struct_020891b0 {
    unsigned char unknown_0_[0x3c];
    unsigned char unknown_3c_0_ : 1;
};

// USA: func_020891b0
extern "C" ARM void func_020891b0(struct Struct_020891b0* arg0) {
    if (arg0->unknown_3c_0_) {
        arg0->unknown_3c_0_ = 0;
    } else {
        arg0->unknown_3c_0_ = 1;
    }
}

#include <globaldefs.h>

struct Struct_0203cec4 {
    char unknown_0_[0x5c];
    unsigned int unknown_5c_;
};

// USA: func_0203cec4
extern "C" ARM void func_0203cec4(struct Struct_0203cec4* arg0, int arg1) {
    if (arg1) {
        arg0->unknown_5c_ |= 0x8;
    } else {
        arg0->unknown_5c_ &= ~0x8;
    }
}

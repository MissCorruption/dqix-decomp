#include <globaldefs.h>

struct Struct_0205d304_2 {
    char unknown_0_[0x1c];
    unsigned char unknown_1c_0_ : 4;
    unsigned char unknown_1c_4_ : 4;
};

// USA: func_0205d594
extern "C" ARM void func_0205d594(struct Struct_0205d304_2* arg0, unsigned char* arg1, unsigned char* arg2) {
    *arg1 = arg0->unknown_1c_0_;
    *arg2 = arg0->unknown_1c_4_;
}

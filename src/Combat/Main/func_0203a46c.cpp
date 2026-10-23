#include <globaldefs.h>

struct Struct_0203a46c {
    char unknown_0_[0x1c];
    int unknown_1c_;
    int unknown_20_;
    int unknown_24_;
};

// USA: func_0203a46c
extern "C" ARM void func_0203a46c(struct Struct_0203a46c* arg0, int arg1, int arg2, int arg3) {
    arg0->unknown_1c_ = arg1;
    arg0->unknown_20_ = arg2;
    arg0->unknown_24_ = arg3;
}

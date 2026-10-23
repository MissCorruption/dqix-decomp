#include <globaldefs.h>

struct Struct_0208aa18 {
    char unknown_0_[0xc];
    int unknown_c_;
    int unknown_10_;
    int unknown_14_;
};

// USA: func_0208aa18
extern "C" ARM void func_0208aa18(struct Struct_0208aa18 *arg0, int arg1, int arg2, int arg3) {
    arg0->unknown_c_ = arg1;
    arg0->unknown_10_ = arg2;
    arg0->unknown_14_ = arg3;
}

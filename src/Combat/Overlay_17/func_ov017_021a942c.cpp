#include <globaldefs.h>

struct Struct_0204693c;
extern "C" void func_0204693c(Struct_0204693c* arg0);

struct Struct_ov017_021a93f0 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[7];
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
};

// USA: func_ov017_021a942c
extern "C" ARM void func_ov017_021a942c(Struct_ov017_021a93f0* arg0) {
    func_0204693c((Struct_0204693c*)arg0);
    arg0->unknown_0_ = 0x39;
    arg0->unknown_8_ = 0;
    arg0->unknown_c_ = 0;
    arg0->unknown_10_ = 0;
}

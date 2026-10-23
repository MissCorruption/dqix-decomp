#include <globaldefs.h>

struct Struct_0204693c;
extern "C" void func_0204693c(Struct_0204693c* arg0);

struct Struct_ov003_021638e4_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[7];
    unsigned char unknown_8_;
    unsigned char unknown_9_;
    unsigned char unknown_a_;
    unsigned char unknown_b_;
    unsigned short unknown_c_;
};

// USA: func_ov017_021b11b0
extern "C" ARM void func_ov017_021b11b0(Struct_ov003_021638e4_2* arg0) {
    func_0204693c((Struct_0204693c*)arg0);
    arg0->unknown_0_ = 0x27;
    arg0->unknown_8_ = 0;
    arg0->unknown_a_ = 0;
    arg0->unknown_c_ = 0;
}

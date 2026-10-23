#include <globaldefs.h>

struct Struct_0204693c;
extern "C" void func_0204693c(Struct_0204693c* arg0);

struct Struct_ov017_021913d0 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[7];
    short unknown_8_;
    unsigned char unknown_a_;
    unsigned char unknown_b_;
};

// USA: func_ov017_021c1e40
extern "C" ARM void func_ov017_021c1e40(Struct_ov017_021913d0* arg0) {
    func_0204693c((Struct_0204693c*)arg0);
    arg0->unknown_0_ = 0x42;
    arg0->unknown_a_ = 0;
    arg0->unknown_b_ = 0;
    arg0->unknown_8_ = 0x42 - 0x43;
}

#include <globaldefs.h>

struct Struct_0204693c { signed char unknown_0_, unknown_1_, unknown_2_, unknown_3_; };
extern "C" void func_0204693c(Struct_0204693c* arg0);
extern int data_ov017_021d8478;

struct Struct_ov017_021c12fc {
    Struct_0204693c unknown_0_;
    unsigned char unknown_4_[0x18];
    unsigned char unknown_1c_;
    unsigned char unknown_1d_;
    unsigned char unknown_1e_;
    unsigned char unknown_1f_;
};

// USA: func_ov017_021c1350
extern "C" ARM void func_ov017_021c1350(Struct_ov017_021c12fc* arg0, unsigned char arg1, unsigned char arg2) {
    func_0204693c(&arg0->unknown_0_);
    arg0->unknown_0_.unknown_0_ = 0x2e;
    data_ov017_021d8478 = 0;
    arg0->unknown_1c_ = 0;
    arg0->unknown_1e_ = arg1;
    arg0->unknown_1f_ = arg2;
    arg0->unknown_1d_ = 0xff;
}

#include <globaldefs.h>

struct Struct_0204693c;
extern "C" void func_0204693c(Struct_0204693c* arg0);

struct Struct_ov017_02192700_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[7];
    unsigned char unknown_8_;
    unsigned char unknown_9_;
};

// USA: func_ov017_021c316c
extern "C" ARM void func_ov017_021c316c(Struct_ov017_02192700_2* arg0, int arg1) {
    func_0204693c((Struct_0204693c*)arg0);
    arg0->unknown_0_ = 0x47;
    arg0->unknown_8_ = 0;
    arg0->unknown_9_ = (unsigned char)arg1;
}

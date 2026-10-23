#include <globaldefs.h>

struct Struct_0204693c;
extern "C" void func_0204693c(Struct_0204693c* arg0);

struct Struct_0201bdac_3 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[7];
    unsigned char unknown_8_;
};

// USA: func_020d9850
extern "C" ARM void func_020d9850(Struct_0201bdac_3* arg0) {
    func_0204693c((Struct_0204693c*)arg0);
    arg0->unknown_0_ = 0x48;
    arg0->unknown_8_ = 0;
}

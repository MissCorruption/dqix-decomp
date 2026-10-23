#include <globaldefs.h>

struct Struct_0204693c;
extern "C" void func_0204693c(Struct_0204693c* arg0);

struct Struct_ov017_021a5568 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[7];
    int unknown_8_;
    unsigned char unknown_c_[0x14];
    unsigned char unknown_20_;
    unsigned char unknown_21_;
    short unknown_22_;
};

extern int data_ov017_021d83ac;

// USA: func_ov017_021a5568
extern "C" ARM void func_ov017_021a5568(Struct_ov017_021a5568* arg0) {
    func_0204693c((Struct_0204693c*)arg0);
    arg0->unknown_0_ = 0xc;
    arg0->unknown_8_ = 0;
    data_ov017_021d83ac = 0;
    arg0->unknown_20_ = 0;
    arg0->unknown_21_ = 0;
    arg0->unknown_22_ = -1;
}

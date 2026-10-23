#include <globaldefs.h>

struct Struct_0214e4a0_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    unsigned int unknown_4_;
};
extern Struct_0214e4a0_2 data_0214e4a0;

// USA: func_020d86d0
extern "C" ARM void func_020d86d0(int arg0, int arg1) {
    *(unsigned int*)0x04000540 = arg0 | (arg1 << 1);
    data_0214e4a0.unknown_0_ = (data_0214e4a0.unknown_0_ == 0) ? 1 : 0;
}

#include <globaldefs.h>

int ReleaseGBABus(unsigned short owner);
typedef int (*Type_020d1540)(int);
unsigned int SetIRQInterruptState(int);

struct Struct_020d135c_3 {
    int unknown_0_;
    unsigned int unknown_4_;
};

// USA: func_020d1540
extern "C" ARM unsigned int func_020d1540(int arg0, struct Struct_020d135c_3* arg1) {
    if (arg1->unknown_0_ == 0) ((Type_020d1540)&ReleaseGBABus)(arg0);
    return SetIRQInterruptState(arg1->unknown_4_);
}

#include <globaldefs.h>

struct Struct_0203dd10 {
    unsigned char unknown_0_[0xc];
    int unknown_c_[0x20];
};

// USA: func_0203dd10
extern "C" ARM void func_0203dd10(Struct_0203dd10* arg0, unsigned int arg1, int arg2) {
    if (arg1 < 0x20) arg0->unknown_c_[arg1] = arg2;
}

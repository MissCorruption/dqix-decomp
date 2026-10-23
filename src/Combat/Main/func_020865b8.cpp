#include <globaldefs.h>

struct Struct_0201099c_17 {
    char unknown_0_[0x111];
    unsigned char unknown_111_[0x1000];
};

// USA: func_020865b8
extern "C" ARM void func_020865b8(struct Struct_0201099c_17* arg0, int arg1) {
    arg0->unknown_111_[arg1 / 8] |= 1 << (arg1 % 8);
}

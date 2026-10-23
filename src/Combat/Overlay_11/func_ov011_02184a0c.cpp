#include <globaldefs.h>

struct Struct_ov011_02184a0c {
    char unknown_0_[0x1b2];
    unsigned short unknown_1b2_;
};

// USA: func_ov011_02184a0c
extern "C" ARM void func_ov011_02184a0c(Struct_ov011_02184a0c* arg0, unsigned short arg1) {
    arg0->unknown_1b2_ = arg1;
}

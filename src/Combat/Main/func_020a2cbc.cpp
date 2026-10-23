#include <globaldefs.h>

struct Struct_020a2cbc {
    char unknown_0_[0x2c5];
    unsigned char unknown_2c5_;
};

// USA: func_020a2cbc
extern "C" ARM void func_020a2cbc(Struct_020a2cbc* arg0, int arg1) {
    arg0->unknown_2c5_ = arg1;
}

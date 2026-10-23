#include <globaldefs.h>

struct Struct_0203fc84 {
    char unknown_0_[0x2C];
    unsigned short unknown_2c_;
};

// USA: func_0203fc84
extern "C" ARM void func_0203fc84(struct Struct_0203fc84* arg0, int arg1) {
    if (arg1 > 0x1F) {
        arg1 = 0x1F;
    } else if (arg1 < 0) {
        arg1 = 0;
    }
    arg0->unknown_2c_ = arg1;
}

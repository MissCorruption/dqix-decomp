#include <globaldefs.h>

struct Struct_02037d88_12 {
    char unknown_0_[0x2c4];
    unsigned char unknown_2c4_;
    unsigned char unknown_2c5_;
};

// USA: func_020a2c70
extern "C" ARM int func_020a2c70(struct Struct_02037d88_12* arg0) {
    if (arg0->unknown_2c5_ != 0) {
        arg0->unknown_2c4_ = 1;
        return 1;
    }
    return 0;
}

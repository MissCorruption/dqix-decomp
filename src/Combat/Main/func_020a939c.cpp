#include <globaldefs.h>

struct Struct_020a939c {
    unsigned char unknown_0_[0x40];
};

struct Struct_020a939c_2 {
    unsigned int unknown_0_0_ : 12;
    struct Struct_020a939c *unknown_4_;
};

// USA: func_020a939c
extern "C" ARM struct Struct_020a939c* func_020a939c(struct Struct_020a939c_2 *arg0, int arg1) {
    if (arg1 < 0 || arg1 >= (int)arg0->unknown_0_0_ || arg0->unknown_4_ == 0) {
        return 0;
    }
    return &arg0->unknown_4_[arg1];
}

#include <globaldefs.h>

struct Struct_020e29a8 {
    char unknown_0_[0x16];
    unsigned char unknown_16_;
};

// USA: func_020e29a8
extern "C" ARM void func_020e29a8(struct Struct_020e29a8* arg0, int arg1) {
    if (arg1 >= 3) {
        arg1 = 2;
    }
    arg0->unknown_16_ = (unsigned char)arg1;
}

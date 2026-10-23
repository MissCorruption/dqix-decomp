#include <globaldefs.h>

struct Struct_0205d5b8 {
    char unknown_0_[0xc5];
    unsigned char unknown_c5_;
};

// USA: func_0205d5b8
extern "C" ARM void func_0205d5b8(struct Struct_0205d5b8* arg0, int arg1) {
    if (arg1) {
        arg0->unknown_c5_ |= 0x20;
    } else {
        arg0->unknown_c5_ &= ~0x20;
    }
}

#include <globaldefs.h>

struct Struct_020e3b08 {
    unsigned char unknown_0_[5];
    unsigned char unknown_5_;
    unsigned char unknown_6_;
    unsigned char unknown_7_;
};

// USA: func_020e3b08
extern "C" ARM void func_020e3b08(struct Struct_020e3b08* arg0, int arg1) {
    int var0;
    for (var0 = 0; var0 < 4; var0++, arg0++) {
        arg0->unknown_5_ &= ~(1 << arg1);
        arg0->unknown_6_ &= ~(1 << arg1);
    }
}

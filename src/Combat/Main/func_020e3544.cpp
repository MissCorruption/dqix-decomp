#include <globaldefs.h>

struct Struct_020e3004_2;
extern "C" void func_020e303c(struct Struct_020e3004_2* arg0);

struct Struct_020e3544 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
};

// USA: func_020e3544
extern "C" ARM void func_020e3544(struct Struct_020e3544 *arg0, int arg1) {
    int var0;
    for (var0 = 0; var0 < 8; ) {
        if (arg0->unknown_0_ == arg1) {
            func_020e303c((struct Struct_020e3004_2*)arg0);
        }
        var0++;
        arg0++;
    }
}

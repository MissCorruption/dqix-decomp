#include <globaldefs.h>

struct Struct_0208a9c0 {
    unsigned char unknown_0_[4];
    unsigned char unknown_4_;
    unsigned char unknown_5_;
    unsigned char unknown_6_;
    unsigned char unknown_7_[4];
    unsigned char unknown_b_;
    int unknown_c_[3];
    unsigned char unknown_18_[4];
};

// USA: func_0208a9c0
extern "C" ARM void func_0208a9c0(struct Struct_0208a9c0* arg0, unsigned char arg1, unsigned char arg2, unsigned char arg3) {
    int var0;
    int var1;
    arg0->unknown_4_ = arg1;
    arg0->unknown_5_ = arg2;
    arg0->unknown_6_ = arg3;
    for (var0 = 0; var0 < 4; var0++) {
        arg0->unknown_7_[var0] = 0xfe;
        arg0->unknown_18_[var0] = 0;
    }
    for (var1 = 0; var1 < 3; var1++) {
        arg0->unknown_c_[var1] = 0;
    }
}

#include <globaldefs.h>

struct Struct_02081f20 {
    unsigned short unknown_0_;
    unsigned char unknown_2_;
};

struct Struct_02081f20_2 {
    struct Struct_02081f20 *unknown_0_;
    unsigned short unknown_4_;
    signed char unknown_6_;
    signed char unknown_7_;
    signed char unknown_8_;
};

// USA: func_0208203c
extern "C" ARM void func_0208203c(struct Struct_02081f20_2 *arg0) {
    struct Struct_02081f20 *var0 = arg0->unknown_0_;
    if (var0 != NULL) {
        var0->unknown_0_ = 0;
        var0->unknown_2_ = 0;
    }
    arg0->unknown_4_ = 0;
    arg0->unknown_8_ = arg0->unknown_6_;
}

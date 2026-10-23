#include <globaldefs.h>

struct Struct_0205a370 {
    char unknown_0_[0x10];
    unsigned short unknown_10_;
    unsigned short unknown_12_;
    unsigned char unknown_14_;
    unsigned char unknown_15_;
    char unknown_16_[2];
};

struct Struct_0205a254;

extern "C" struct Struct_0205a370* func_0205a3d0(struct Struct_0205a254*, int);

// USA: func_0205a370
extern "C" ARM void func_0205a370(struct Struct_0205a254* arg0, int arg1) {
    struct Struct_0205a370* var0 = func_0205a3d0(arg0, arg1);
    if (var0 == NULL) return;
    if (var0->unknown_15_ & 1) {
        var0->unknown_10_ = 0;
        var0->unknown_12_ = 0;
    }
    var0->unknown_15_ &= ~7;
    var0->unknown_15_ |= 2;
}

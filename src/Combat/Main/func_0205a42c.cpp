#include <globaldefs.h>

struct Struct_0205a42c {
    char unknown_0_[0x14];
    unsigned char unknown_14_;
    char unknown_15_[3];
};

struct Struct_0205a254;

extern "C" struct Struct_0205a42c* func_0205a3d0(struct Struct_0205a254*, int);

// USA: func_0205a42c
extern "C" ARM void func_0205a42c(struct Struct_0205a254* arg0, int arg1, int arg2) {
    struct Struct_0205a42c* var0 = func_0205a3d0(arg0, arg1);
    if (var0 != NULL) {
        var0->unknown_14_ = arg2;
    }
}

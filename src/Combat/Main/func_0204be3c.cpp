#include <globaldefs.h>

struct Struct_0204be3c {
    char unknown_0_[4];
    unsigned short unknown_4_;
};

// USA: func_0204be3c
extern "C" ARM unsigned short func_0204be3c(struct Struct_0204be3c* arg0) {
    unsigned short var0 = arg0->unknown_4_;
    unsigned short var1 = var0 & 0x1f;
    unsigned short var2 = (var0 & 0x3e0) >> 5;
    unsigned short var3 = (var0 & 0x7c00) >> 10;
    return var1 * 100 + var2 * 10 + var3;
}

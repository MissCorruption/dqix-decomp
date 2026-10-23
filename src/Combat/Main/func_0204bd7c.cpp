#include <globaldefs.h>

struct Struct_0204bd7c {
    unsigned short unknown_0_; // 0x0
};

// USA: func_0204bd7c
extern "C" ARM unsigned short func_0204bd7c(struct Struct_0204bd7c* arg0) {
    unsigned short var0 = arg0->unknown_0_;
    unsigned short var1 = var0 & 0x1f;
    unsigned short var2 = (var0 & 0x3e0) >> 5;
    unsigned short var3 = (var0 & 0x7c00) >> 10;
    return 30000 + var1 * 100 + var2 * 10 + var3;
}

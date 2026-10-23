#include <globaldefs.h>

struct Struct_0204bef4 {
    unsigned short unknown_0_; // 0x0
};

// USA: func_0204bef4
extern "C" ARM int func_0204bef4(struct Struct_0204bef4* arg0) {
    unsigned short var0 = arg0->unknown_0_;
    unsigned short var1 = var0 & 0x1f;
    unsigned short var2 = (var0 & 0x3e0) >> 5;
    unsigned short var3 = (var0 & 0x7c00) >> 10;
    return 20000 + var1 * 100 + var2 * 10 + var3;
}

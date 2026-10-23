#include <globaldefs.h>

struct Struct_020c94e4 {
    char unknown_0_[0xc];
    int unknown_c_;
    short unknown_10_;
    short unknown_12_;
};

// USA: func_020c965c
extern "C" ARM int func_020c965c(struct Struct_020c94e4* arg0, int arg1, int arg2) {
    int var0 = arg1 - arg0->unknown_c_;
    int var1 = arg2 - arg0->unknown_10_;
    if (var0 < 0 || (var0 == 0 && var1 < 0)) return 0;
    if (var1 < 0) var1 += 0x107;
    if (var1 <= arg0->unknown_12_) return 1;
    return 2;
}

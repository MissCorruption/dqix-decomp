#include <globaldefs.h>

struct Struct_020c5588 {
    volatile unsigned int unknown_0_;
    volatile unsigned short unknown_4_;
};

// USA: func_020c5588
extern "C" ARM void func_020c5588(int arg0, int arg1, int arg2, int arg3, int arg4) {
    struct Struct_020c5588* var0 = (struct Struct_020c5588*)0x4000350;
    unsigned int var1 = arg0 | (arg1 << 16) | (arg3 << 24);
    if (arg4) var1 |= 0x8000;
    var0->unknown_0_ = var1;
    var0->unknown_4_ = arg2;
}

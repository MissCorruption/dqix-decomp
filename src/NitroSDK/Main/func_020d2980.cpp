#include <globaldefs.h>

struct Struct_02114260_3 { void (*unknown_0_)(int); int unknown_4_; unsigned char unknown_8_; };
extern struct Struct_02114260_3 data_02114260[];

// USA: func_020d2980
extern "C" ARM unsigned char func_020d2980(int arg0, void (*arg1)(int), int arg2) {
    struct Struct_02114260_3* var0 = &data_02114260[arg0];
    var0->unknown_0_ = arg1;
    var0->unknown_4_ = arg2;
    return ++var0->unknown_8_;
}

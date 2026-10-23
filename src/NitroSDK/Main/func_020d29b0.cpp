#include <globaldefs.h>

struct Struct_02114260_4 { void (*unknown_0_)(int); int unknown_4_; unsigned char unknown_8_; };
extern struct Struct_02114260_4 data_02114260[];

// USA: func_020d29b0
extern "C" ARM void func_020d29b0(int arg0) {
    struct Struct_02114260_4* var0 = &data_02114260[arg0 & 0xff];
    if (((arg0 >> 8) & 0xff) != var0->unknown_8_) return;
    if (var0->unknown_0_ == 0) return;
    var0->unknown_0_(var0->unknown_4_);
}

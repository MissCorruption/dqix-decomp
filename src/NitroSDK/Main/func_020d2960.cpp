#include <globaldefs.h>

struct Struct_02114260_2 { void (*unknown_0_)(int); int unknown_4_; unsigned char unknown_8_; };
extern struct Struct_02114260_2 data_02114260[];

// USA: func_020d2960
extern "C" ARM void func_020d2960(int arg0) {
    struct Struct_02114260_2* var0 = &data_02114260[arg0];
    var0->unknown_8_++;
}

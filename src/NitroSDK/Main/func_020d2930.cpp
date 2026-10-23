#include <globaldefs.h>

struct Struct_02114260 { void (*unknown_0_)(int); int unknown_4_; unsigned char unknown_8_; };
extern struct Struct_02114260 data_02114260[8];

// USA: func_020d2930
extern "C" ARM void func_020d2930() {
    int var0 = 0;
    struct Struct_02114260* var1 = data_02114260;
    do {
        var1->unknown_0_ = 0;
        var1->unknown_4_ = 0;
        var1->unknown_8_ = 0;
        var0++;
        var1++;
    } while (var0 < 8);
}

#include <globaldefs.h>

struct Struct_0205faf4_8 { unsigned int unknown_0_0_ : 9; unsigned int unknown_1_1_ : 23; char unknown_4_[0xc]; };
struct Struct_0205faf4_7 { unsigned char unknown_0_; char unknown_1_[3]; struct Struct_0205faf4_8 unknown_4_[1]; };

// USA: func_02096134
extern "C" ARM struct Struct_0205faf4_8* func_02096134(struct Struct_0205faf4_7* arg0, int arg1) {
    int var0;
    if (arg1 > 0xcc || arg1 < 0) return NULL;
    for (var0 = 0; var0 < arg0->unknown_0_; var0++) {
        if (arg0->unknown_4_[var0].unknown_0_0_ == arg1) return &arg0->unknown_4_[var0];
    }
    return NULL;
}

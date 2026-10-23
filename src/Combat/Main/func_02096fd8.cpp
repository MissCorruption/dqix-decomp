#include <globaldefs.h>

struct Struct_02096fd8 { unsigned short unknown_0_; unsigned short unknown_2_; };

// USA: func_02096fd8
extern "C" ARM int func_02096fd8(struct Struct_02096fd8 *arg0) {
    char *var0 = (char *)(arg0->unknown_0_ * 0x30);
    char *var1 = (char *)(((int)var0 + arg0->unknown_2_ * 4 + 3) & ~3);
    return (int)var0 + (var1 - var0);
}

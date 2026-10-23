#include <globaldefs.h>

struct Struct_0210f3c0_2 { int unknown_0_; unsigned int unknown_4_; };
extern struct Struct_0210f3c0_2 data_0210f3c0;

// USA: func_020bbeb0
extern "C" ARM int func_020bbeb0(void) {
    int var0;
    int var1 = 1;
    unsigned int var2 = data_0210f3c0.unknown_4_;
    var0 = 0;
    do {
        if (!(var2 & var1)) {
            data_0210f3c0.unknown_4_ |= var1;
            return var0;
        }
        var1 <<= 1;
        var0++;
    } while (var0 < 8);
    return -1;
}

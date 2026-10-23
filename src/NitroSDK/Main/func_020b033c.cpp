#include <globaldefs.h>

struct Struct_020b033c {
    char unknown_0_[8];
    int unknown_8_[3];
};

// USA: func_020b033c
extern "C" ARM void func_020b033c(struct Struct_020b033c* arg0) {
    int var0 = 0;
    do {
        arg0->unknown_8_[var0] = -1;
    } while (++var0 < 3);
}

#include <globaldefs.h>

struct Struct_02015438 {
    signed char unknown_0_;
};

// USA: func_02046b24
extern "C" ARM int func_02046b24(struct Struct_02015438** arg0) {
    struct Struct_02015438* var0 = arg0[0];
    if (var0 != 0) {
        return var0->unknown_0_;
    }
    return -1;
}

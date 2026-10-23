#include <globaldefs.h>

struct Struct_0205faf4_12 {
    char unknown_0_[0x1b61];
    unsigned char unknown_1b61_;
};

// USA: func_02098ee8
extern "C" ARM unsigned char func_02098ee8(struct Struct_0205faf4_12* arg0) {
    unsigned char var0 = arg0->unknown_1b61_;
    arg0->unknown_1b61_ = 0;
    return var0;
}

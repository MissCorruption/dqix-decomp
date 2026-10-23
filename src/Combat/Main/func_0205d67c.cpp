#include <globaldefs.h>

struct Struct_0205d67c {
    char unknown_0_[0x98];
    int unknown_98_;
    int unknown_9c_;
    char unknown_a0_[0x14];
    unsigned char unknown_b4_;
};

// USA: func_0205d67c
extern "C" ARM int func_0205d67c(struct Struct_0205d67c* arg0) {
    if (arg0->unknown_98_ == 0) return 0;
    return arg0->unknown_9c_ != 0 ? arg0->unknown_b4_ : 0;
}

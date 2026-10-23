#include <globaldefs.h>

struct Struct_0205d0e0 { char unknown_0_[0xe0]; };

struct Struct_0205d81c {
    char unknown_0_[0x98];
    int unknown_98_;
    struct Struct_0205d0e0* unknown_9c_;
    char unknown_a0_[0xb0 - 0xa0];
    unsigned char unknown_b0_;
    char unknown_b1_[0xb4 - 0xb1];
    unsigned char unknown_b4_;
};

extern "C" struct Struct_0205d0e0* func_0205d81c(struct Struct_0205d81c*, int);

// USA: func_0205d8c4
extern "C" ARM struct Struct_0205d0e0* func_0205d8c4(struct Struct_0205d81c* arg0) {
    if (arg0->unknown_98_ == 0) return 0;
    if (arg0->unknown_9c_ == 0) return 0;
    if (arg0->unknown_b4_ == 0) return 0;
    return func_0205d81c(arg0, arg0->unknown_b0_);
}

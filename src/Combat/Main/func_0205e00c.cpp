#include <globaldefs.h>

struct Struct_0205e00c { char unknown_0_[0xe0]; };

struct Struct_0205d81c {
    char unknown_0_[0x98];
    int unknown_98_;
    struct Struct_0205e00c* unknown_9c_;
    char unknown_a0_[0xb4 - 0xa0];
    unsigned char unknown_b4_;
};

extern "C" struct Struct_0205e00c* func_0205d81c(struct Struct_0205d81c*, int);

// USA: func_0205e00c
extern "C" ARM struct Struct_0205e00c* func_0205e00c(struct Struct_0205d81c* arg0, int arg1) {
    if (func_0205d81c(arg0, arg1) != 0) return 0;
    return &arg0->unknown_9c_[arg0->unknown_b4_];
}

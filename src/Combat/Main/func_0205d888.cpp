#include <globaldefs.h>

struct Struct_0205d0e0_2 {
    char unknown_0_[0x98];
    int unknown_98_;
    void* unknown_9c_;
    char unknown_a0_[0x14];
    unsigned char unknown_b4_;
};

// USA: func_0205d888
extern "C" ARM void* func_0205d888(struct Struct_0205d0e0_2* arg0) {
    void* var0;
    if (arg0->unknown_98_ == 0) return 0;
    var0 = arg0->unknown_9c_;
    if (var0 == 0) return 0;
    return arg0->unknown_b4_ != 0 ? (char*)var0 + (arg0->unknown_b4_ - 1) * 0xE0 : 0;
}

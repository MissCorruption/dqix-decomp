#include <globaldefs.h>

struct Struct_0209fccc {
    unsigned short unknown_0_;
};

struct Struct_0209d44c {
    unsigned char unknown_0_[4];
    char* unknown_4_;
};

// USA: func_0209fccc
extern "C" ARM int func_0209fccc(struct Struct_0209d44c* arg0, int arg1) {
    struct Struct_0209fccc* var0 = *(struct Struct_0209fccc**)(arg0->unknown_4_ + 0x8e18);
    if (var0 == NULL) {
        return -1;
    }
    if (arg1 == 0) {
        return var0->unknown_0_;
    }
    return var0->unknown_0_ / 100;
}

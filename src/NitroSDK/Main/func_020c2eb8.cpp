#include <globaldefs.h>

struct Struct_020c2eb8 {
    volatile unsigned short unknown_0_;
    unsigned char unknown_2_[6];
    volatile long long unknown_8_;
};

// USA: func_020c2eb8
extern "C" ARM int Vector3fix_Length(int* arg0) {
    struct Struct_020c2eb8* var0 = (struct Struct_020c2eb8*)0x40002b0;
    long long var1 = (long long)arg0[0] * arg0[0];
    var1 = (long long)arg0[1] * arg0[1] + var1 + (long long)arg0[2] * arg0[2];
    var0->unknown_0_ = 1;
    var0->unknown_8_ = var1 << 2;
    while (var0->unknown_0_ & 0x8000) {}
    return (*(volatile int*)0x40002b4 + 1) >> 1;
}

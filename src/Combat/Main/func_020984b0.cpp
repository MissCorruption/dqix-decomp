#include <globaldefs.h>

struct Struct_02064e88 {
    unsigned char unknown_0_[0xc];
    unsigned int unknown_c_;
    unsigned char unknown_10_[0xd8];
};

// USA: func_020984b0
extern "C" ARM void func_020984b0(struct Struct_02064e88* arg0) {
    int var0;
    for (var0 = 0; var0 < 30; var0++) {
        unsigned int* var1 = (unsigned int*)((char*)arg0 + var0 * 0xe8);
        var1[3] &= ~0x3f000000;
    }
}

#include <globaldefs.h>

extern "C" void func_02059cfc(unsigned char* arg0, int arg1, int arg2);

struct Struct_020579b4 {
    int unknown_0_;                       // 0x0
    int unknown_4_;                       // 0x4
    unsigned char unknown_8_[16][0xd4];  // 0x8 ..
};

// USA: func_020579b4
extern "C" ARM void func_020579b4(Struct_020579b4* arg0, int arg1) {
    int var0;
    for (var0 = 0; var0 < 16; var0++) {
        func_02059cfc(arg0->unknown_8_[var0], arg1, var0 + 0xd0);
    }
}

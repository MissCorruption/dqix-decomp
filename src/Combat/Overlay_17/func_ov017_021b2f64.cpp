#include <globaldefs.h>

struct Struct_0204693c;
extern "C" void func_0204693c(struct Struct_0204693c* arg0);

struct Struct_ov017_021b2f64 {
    unsigned char unknown_0_[0x10];
    int unknown_10_[14];
};

// USA: func_ov017_021b2f64
extern "C" ARM void func_ov017_021b2f64(unsigned char* arg0) {
    func_0204693c((struct Struct_0204693c*)arg0);
    arg0[0] = 0x13;
    *(short*)(arg0 + 8) = 0x13 - 0x14;
    arg0[0xa] = 0;
    arg0[0xb] = 0;
    *(int*)(arg0 + 0xc) = 0;
    Struct_ov017_021b2f64* var0 = (Struct_ov017_021b2f64*)arg0;
    for (int var1 = 0; var1 < 14; var1++) {
        var0->unknown_10_[var1] = 0x13 - 0x14;
    }
}

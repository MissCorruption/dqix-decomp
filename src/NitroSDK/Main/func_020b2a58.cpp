#include <globaldefs.h>

struct Struct_020b2a58 {
    unsigned short* unknown_0_; // 0x0
};

// USA: func_020b2a58
extern "C" ARM unsigned short func_020b2a58(struct Struct_020b2a58* arg0) {
    unsigned short* var0 = arg0->unknown_0_;
    unsigned short var1 = *var0++;
    arg0->unknown_0_ = var0;
    return var1;
}

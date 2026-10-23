#include <globaldefs.h>

struct Struct_020c2c94 {
    unsigned short unknown_0_;
    unsigned char unknown_2_[0xe];
    long long unknown_10_;
    long long unknown_18_;
};

// USA: func_020c2c94
extern "C" ARM void fix32_QueueComputeReciprocal(int arg0) {
    struct Struct_020c2c94* var0 = (struct Struct_020c2c94*)0x4000280;
    var0->unknown_0_ = 1;
    var0->unknown_10_ = 0x100000000000LL;
    var0->unknown_18_ = (unsigned int)arg0;
}

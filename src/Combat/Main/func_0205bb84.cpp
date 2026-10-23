#include <globaldefs.h>

struct Struct_0205bb84 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
    int unknown_14_;
    int unknown_18_;
    int unknown_1c_;
    int unknown_20_;
    int* unknown_24_;
    int* unknown_28_;
    int* unknown_2c_;
};

// USA: func_0205bb84
extern "C" ARM int func_0205bb84(struct Struct_0205bb84* arg0) {
    int var0 = *arg0->unknown_24_ * *arg0->unknown_28_ + *arg0->unknown_2c_;
    int var1 = arg0->unknown_14_ * arg0->unknown_c_ * arg0->unknown_8_;
    return (short)var1 + (short)var0;
}

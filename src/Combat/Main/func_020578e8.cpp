#include <globaldefs.h>

struct Struct_020578e8 {
    int unknown_0_;
    float unknown_4_;
};
struct Struct_020557a4 {
    Struct_020578e8* unknown_0_;
};

// USA: func_020578e8
extern "C" ARM float func_020578e8(Struct_020557a4* arg0, Struct_020557a4* arg1) {
    Struct_020578e8* var0 = arg0->unknown_0_;
    Struct_020578e8* var1 = arg1->unknown_0_;
    return (var1->unknown_4_ - var0->unknown_4_) / (float)(var1->unknown_0_ - var0->unknown_0_);
}

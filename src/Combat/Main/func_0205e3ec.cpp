#include <globaldefs.h>
struct Struct_0205e3ec { unsigned int unknown_0_[4]; };
struct Struct_0205e330_3 { unsigned char unknown_0_; unsigned char unknown_1_; unsigned char unknown_2_[2]; struct Struct_0205e3ec unknown_4_; };
// USA: func_0205e3ec
extern "C" ARM struct Struct_0205e330_3* func_0205e3ec(struct Struct_0205e330_3* arg0, struct Struct_0205e330_3* arg1) {
    arg0->unknown_0_ = arg1->unknown_0_;
    arg0->unknown_1_ = arg1->unknown_1_;
    arg0->unknown_4_ = arg1->unknown_4_;
    return arg0;
}

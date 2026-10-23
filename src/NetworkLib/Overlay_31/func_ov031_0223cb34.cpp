#include <globaldefs.h>

struct Struct_ov031_0223cb34 { unsigned short unknown_0_, unknown_2_; };
struct Struct_ov031_0223cb34_2 { unsigned short unknown_0_, unknown_2_, unknown_4_, unknown_6_; };

// USA: func_ov031_0223cb34
extern "C" ARM void func_ov031_0223cb34(Struct_ov031_0223cb34* arg0, Struct_ov031_0223cb34* arg1, Struct_ov031_0223cb34_2* arg2) {
    arg2->unknown_0_ = arg0->unknown_0_;
    arg2->unknown_2_ = arg0->unknown_2_;
    arg2->unknown_4_ = arg0->unknown_0_ + arg1->unknown_0_;
    arg2->unknown_6_ = arg0->unknown_2_ + arg1->unknown_2_;
}

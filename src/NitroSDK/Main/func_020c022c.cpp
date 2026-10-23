#include <globaldefs.h>

struct Struct_020bc180_2 { int unknown_0_; int unknown_4_; int unknown_8_; int unknown_c_; };

// USA: func_020c022c
extern "C" ARM int func_020c022c(struct Struct_020bc180_2* arg0) {
    if (arg0->unknown_8_ >= arg0->unknown_c_) {
        return arg0->unknown_4_;
    }
    return arg0->unknown_0_ + arg0->unknown_8_ * (arg0->unknown_4_ - arg0->unknown_0_) / arg0->unknown_c_;
}

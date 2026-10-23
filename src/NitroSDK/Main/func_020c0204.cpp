#include <globaldefs.h>

struct Struct_020bc180_2 { int unknown_0_; int unknown_4_; int unknown_8_; int unknown_c_; };

extern "C" int func_020c022c(struct Struct_020bc180_2* arg0);

// USA: func_020c0204
extern "C" ARM void func_020c0204(struct Struct_020bc180_2* arg0, int arg1, int arg2) {
    arg0->unknown_0_ = func_020c022c(arg0);
    arg0->unknown_4_ = arg1;
    arg0->unknown_c_ = arg2;
    arg0->unknown_8_ = 0;
}

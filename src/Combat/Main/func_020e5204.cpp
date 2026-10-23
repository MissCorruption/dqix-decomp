#include <globaldefs.h>

extern "C" void* func_020e523c(void* arg0, void* arg1, int arg2);

struct Struct_020e5204 {
    void* unknown_0_;
    void* unknown_4_;
};

// USA: func_020e5204
extern "C" ARM int func_020e5204(void* arg0, struct Struct_020e5204* arg1) {
    arg1->unknown_0_ = func_020e523c(arg0, arg1->unknown_0_, 0);
    arg1->unknown_4_ = func_020e523c(arg0, arg1->unknown_4_, 0);
    return 1;
}

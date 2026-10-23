#include <globaldefs.h>

extern "C" void func_0203aa80(void* arg0, int arg1);
extern "C" int func_0203aa64(void* arg0);
extern "C" int func_0203aa98(void*, int);

struct Struct_02108760_3 {
    char unknown_0_[0xb8];
    int unknown_b8_;
    short unknown_bc_;
    char unknown_be_[0xc0 - 0xbe];
    int unknown_c0_;
};

// USA: func_0205ead0
extern "C" ARM void func_0205ead0(struct Struct_02108760_3* arg0, int arg1, int arg2) {
    func_0203aa80(arg0, arg0->unknown_b8_);
    func_0203aa98(arg0, arg1);
    arg0->unknown_bc_ = arg2;
    arg0->unknown_c0_ = func_0203aa64(arg0);
}

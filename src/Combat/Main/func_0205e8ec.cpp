#include <globaldefs.h>

extern "C" void func_0203aa80(void* arg0, int arg1);
extern "C" void func_0205e944(void*, int);
extern "C" void func_020bbd9c(void);

struct Struct_0205e8ec {
    char unknown_0_[0xb8];
    int unknown_b8_;
    short unknown_bc_;
    char unknown_be_[0xc0 - 0xbe];
    int unknown_c0_;
    short unknown_c4_;
};

// USA: func_0205e8ec
extern "C" ARM void func_0205e8ec(struct Struct_0205e8ec* arg0) {
    if (arg0->unknown_b8_ != 0) {
        func_0203aa80(arg0, arg0->unknown_b8_);
        arg0->unknown_c0_ = arg0->unknown_b8_;
        arg0->unknown_bc_ = -1;
        arg0->unknown_c4_ = -1;
    }
    func_0205e944(arg0, 0x7f);
    func_020bbd9c();
}

#include <globaldefs.h>

extern "C" void func_0205e944(void*, int);

struct Struct_02108760_2 {
    char unknown_0_[0xc8];
    int unknown_c8_;
    unsigned char unknown_cc_;
};

// USA: func_0205e9f4
extern "C" ARM void func_0205e9f4(struct Struct_02108760_2* arg0, int arg1) {
    if (arg1 < 1) return;
    if (arg1 > 5) return;
    arg0->unknown_cc_ = (unsigned char)arg1;
    func_0205e944(arg0, arg0->unknown_c8_);
}

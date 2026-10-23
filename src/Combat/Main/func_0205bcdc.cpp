#include <globaldefs.h>

extern "C" void func_0205bb04(void*, int);

struct Struct_0205bcdc {
    int unknown_0_;
    char unknown_4_[0x2c];
    int unknown_30_;
};

// USA: func_0205bcdc
extern "C" ARM void func_0205bcdc(struct Struct_0205bcdc* arg0, int arg1) {
    if (arg1 < 0) return;
    if (arg0->unknown_0_ <= arg1) return;
    arg0->unknown_30_ = -1;
    func_0205bb04(arg0, arg1);
}

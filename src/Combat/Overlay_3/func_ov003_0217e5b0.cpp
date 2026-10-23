#include <globaldefs.h>

extern "C" void func_ov003_02168324(int arg0);
extern "C" void func_ov003_0217e36c(void* arg0);

struct Struct_ov003_0217e5b0 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    char unknown_2_[0x1e];
    int unknown_20_;
};

// USA: func_ov003_0217e5b0
extern "C" ARM void func_ov003_0217e5b0(struct Struct_ov003_0217e5b0* arg0) {
    if (arg0->unknown_20_ != 0) {
        func_ov003_02168324(arg0->unknown_20_);
    }
    func_ov003_0217e36c(arg0);
    arg0->unknown_1_ = 1;
}

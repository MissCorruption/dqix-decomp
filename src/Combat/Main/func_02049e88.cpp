#include <globaldefs.h>

extern "C" void func_02048cf0(void* arg0, int arg1);

struct Struct_02049e88_2 {
    unsigned char unknown_0_[0x20];
    unsigned int unknown_20_;
};
struct Struct_02049e88 {
    unsigned char unknown_0_[0x13c];
    struct Struct_02049e88_2* unknown_13c_;
};

// USA: func_02049e88
extern "C" ARM void func_02049e88(struct Struct_02049e88* arg0) {
    if (arg0->unknown_13c_ == NULL) return;
    arg0->unknown_13c_->unknown_20_ &= ~0x3;
    arg0->unknown_13c_->unknown_20_ |= 0x20;
    func_02048cf0(arg0, 0);
}

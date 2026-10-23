#include <globaldefs.h>

extern "C" int func_020d1ee4(int arg0, int arg1, int arg2, int arg3);
struct Struct_0210cfd0;
struct Struct_0210cfdc;
extern "C" void func_020cef34(struct Struct_0210cfd0*);
extern "C" void func_020cef4c(struct Struct_0210cfdc*);

struct Struct_020bcb70 {
    char unknown_0_[8];
    char unknown_8_[0xc];
    char unknown_14_[0x10];
    int unknown_24_;
    char unknown_28_[0x18];
    int unknown_40_;
    int unknown_44_;
};

// USA: func_020bcb70
extern "C" ARM void func_020bcb70(struct Struct_020bcb70* arg0) {
    func_020d1ee4(arg0->unknown_44_, 0, 1 << arg0->unknown_40_, 0);
    if ((arg0->unknown_24_ << 30) >> 31) return;
    func_020cef34((struct Struct_0210cfd0*)&arg0->unknown_8_);
    func_020cef4c((struct Struct_0210cfdc*)&arg0->unknown_14_);
    arg0->unknown_24_ |= 2;
}

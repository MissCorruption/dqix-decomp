#include <globaldefs.h>

extern "C" void func_0202e5d8(void*, int, int, int);

struct Struct_0202e6c0 {
    char unknown_0_[0x70];
    int unknown_70_;
    int unknown_74_;
    int unknown_78_;
};

// USA: func_0202e6c0
extern "C" ARM void func_0202e6c0(struct Struct_0202e6c0* arg0, int arg1) {
    int var0;
    arg0->unknown_74_ = arg1;
    if (0.0f < (float)arg0->unknown_74_) {
        var0 = arg0->unknown_78_ - 0x1000;
        if (var0 < arg0->unknown_74_) arg0->unknown_74_ = var0;
    } else {
        var0 = 0x1000 - arg0->unknown_78_;
        if (arg0->unknown_74_ < var0) arg0->unknown_74_ = var0;
    }
    func_0202e5d8(arg0, arg0->unknown_70_, arg0->unknown_74_, arg0->unknown_78_);
}

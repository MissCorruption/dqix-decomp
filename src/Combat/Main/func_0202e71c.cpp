#include <globaldefs.h>

struct Struct_0202e71c {
    unsigned char unknown_0_[0x70];
    int unknown_70_;
    int unknown_74_;
    int unknown_78_;
};

extern "C" void func_0202e5d8(struct Struct_0202e71c* arg0, int arg1, int arg2, int arg3);

// USA: func_0202e71c
extern "C" ARM void func_0202e71c(struct Struct_0202e71c* arg0, int arg1) {
    arg0->unknown_78_ = arg1;
    int var0 = arg0->unknown_74_;
    if (0.0f < (float)var0) {
        int var1 = var0 + 0x1000;
        if (arg0->unknown_78_ < var1) arg0->unknown_78_ = var1;
    } else {
        int var2 = 0x1000 - var0;
        if (arg0->unknown_78_ < var2) arg0->unknown_78_ = var2;
    }
    if (arg0->unknown_78_ < 0x1000)
        arg0->unknown_78_ = 0x1000;
    func_0202e5d8(arg0, arg0->unknown_70_, arg0->unknown_74_, arg0->unknown_78_);
}

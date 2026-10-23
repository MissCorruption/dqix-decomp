#include <globaldefs.h>

struct Struct_0202e6a8 {
    char unknown_0_[0x70];
    int unknown_70_;
};

extern "C" void func_0202e6a8(struct Struct_0202e6a8*, int);

// USA: func_0202e784
extern "C" ARM void func_0202e784(struct Struct_0202e6a8* arg0, int arg1) {
    arg1 += arg0->unknown_70_;
    if ((float)arg1 < 0.0f) arg1 += 0x6488;
    if (arg1 > 0x6488) arg1 += -0x6488;
    func_0202e6a8(arg0, arg1);
}

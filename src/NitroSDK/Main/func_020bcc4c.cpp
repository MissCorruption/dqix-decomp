#include <globaldefs.h>

extern "C" void func_020d2018(int, int);

struct Struct_020bcc4c {
    char unknown_0_[0x48];
    int unknown_48_;
    unsigned char unknown_4c_[1];
};

// USA: func_020bcc4c
extern "C" ARM void func_020bcc4c(struct Struct_020bcc4c* arg0, int arg1, int arg2) {
    if (arg1 > arg0->unknown_48_ - 1) return;
    func_020d2018(1 << arg0->unknown_4c_[arg1], arg2);
}

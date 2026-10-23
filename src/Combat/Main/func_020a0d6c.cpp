#include <globaldefs.h>

extern "C" void _ZN8Vector3iaSERKS_(int* arg0, int* arg1);

struct Struct_0202ed7c {
    int unknown_0_;    // 0x0
    int unknown_4_[3]; // 0x4
    int unknown_10_[3];   // 0x10
    int unknown_1c_;     // 0x1c
    int unknown_20_;     // 0x20
    int unknown_24_;     // 0x24
};

// USA: func_020a0d6c
extern "C" ARM void func_020a0d6c(struct Struct_0202ed7c* arg0, int* arg1, int* arg2, int arg3, int arg4, int arg5) {
    _ZN8Vector3iaSERKS_(arg0->unknown_4_, arg1);
    _ZN8Vector3iaSERKS_(arg0->unknown_10_, arg2);
    arg0->unknown_1c_ = arg3;
    arg0->unknown_20_ = arg4;
    arg0->unknown_24_ = arg5;
    if (arg5 == 0) arg0->unknown_24_ = arg4;
    arg0->unknown_0_ = 1;
}

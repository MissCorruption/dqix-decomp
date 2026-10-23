#include <globaldefs.h>

struct Struct_0209daa4 {
    char unknown_0_[0x6c];
    int unknown_6c_;
    char unknown_70_[0x14];
    int unknown_84_;
    int unknown_88_;
};

// USA: func_0209fde8
extern "C" ARM void func_0209fde8(struct Struct_0209daa4* arg0, int arg1, int arg2, int arg3) {
    arg0->unknown_84_ = arg1;
    arg0->unknown_88_ = arg3;
    arg0->unknown_6c_ = arg2;
}

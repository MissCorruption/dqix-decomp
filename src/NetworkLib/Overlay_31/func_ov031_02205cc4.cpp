#include <globaldefs.h>

extern int func_ov031_02205d10;
extern "C" void* func_ov031_02205134(void*, void*, int);
struct Struct_ov031_0220527c;
extern "C" int func_ov031_0220527c(Struct_ov031_0220527c*, void*);

struct Struct_ov031_02205cc4 {
    char unknown_0_[0x10];
    unsigned int unknown_10_;
    unsigned int unknown_14_;
    unsigned int unknown_18_;
    unsigned int unknown_1c_;
};

// USA: func_ov031_02205cc4
extern "C" ARM int func_ov031_02205cc4(Struct_ov031_0220527c* arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3, unsigned int arg4) {
    Struct_ov031_02205cc4* var0 = (Struct_ov031_02205cc4*)func_ov031_02205134(&func_ov031_02205d10, arg0, 1);
    var0->unknown_10_ = arg1;
    var0->unknown_14_ = arg2;
    var0->unknown_18_ = arg3;
    var0->unknown_1c_ = arg4;
    return func_ov031_0220527c(arg0, var0);
}

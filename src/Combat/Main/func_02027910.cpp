#include <globaldefs.h>

struct Struct_02027910_2 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
};

struct Struct_02027910 {
    char unknown_0_[0x2c];
    Struct_02027910_2* unknown_2c_;
    int unknown_30_;
};

struct Struct_020278a4_2;
extern "C" int func_020278a4(Struct_020278a4_2* arg0, int arg1);

// USA: func_02027910
extern "C" ARM void func_02027910(Struct_02027910* arg0, int arg1, int arg2, int arg3, int arg4) {
    arg0->unknown_2c_[arg0->unknown_30_].unknown_0_ = arg1;
    arg0->unknown_2c_[arg0->unknown_30_].unknown_4_ = func_020278a4((Struct_020278a4_2*)arg0, arg2);
    arg0->unknown_2c_[arg0->unknown_30_].unknown_8_ = arg3;
    arg0->unknown_2c_[arg0->unknown_30_].unknown_c_ = arg4;
    arg0->unknown_30_++;
}

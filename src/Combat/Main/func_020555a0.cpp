#include <globaldefs.h>

extern "C" void func_0207df90(char* arg0);
extern "C" void func_0207dfac(char* arg0);
extern "C" void func_020553ec(void* arg0, int arg1, int arg2, int arg3, int arg4);

struct Struct_020555a0 {
    int unknown_0_;
    int unknown_4_;
    char* unknown_8_;
    int unknown_c_;
    int unknown_10_;
};

// USA: func_020555a0
extern "C" ARM void func_020555a0(struct Struct_020555a0* arg0) {
    if (arg0->unknown_4_ != 0 && arg0->unknown_c_ != 0 && arg0->unknown_10_ != 0 && arg0->unknown_8_ != 0) {
        func_0207df90(arg0->unknown_8_);
        func_020553ec(arg0, arg0->unknown_0_, arg0->unknown_4_, arg0->unknown_c_, arg0->unknown_10_);
        func_0207dfac(arg0->unknown_8_);
    }
    arg0->unknown_8_ = 0;
    arg0->unknown_c_ = 0;
    arg0->unknown_10_ = 0;
}

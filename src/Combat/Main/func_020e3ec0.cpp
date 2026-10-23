#include <globaldefs.h>

struct Struct_020e3b8c_2;
extern "C" void func_020e3c34(Struct_020e3b8c_2* arg0);

struct Struct_020e3ec0 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
};

// USA: func_020e3ec0
extern "C" ARM void func_020e3ec0(Struct_020e3ec0* arg0) {
    func_020e3c34((Struct_020e3b8c_2*)arg0);
    arg0->unknown_1_ = 1;
}

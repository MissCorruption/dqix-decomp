#include <globaldefs.h>

struct Struct_0204ae44 {
    short unknown_0_;   // 0x0
    short unknown_2_;  // 0x2
    char unknown_4_[8];  // 0x4
    void* unknown_c_;  // 0xc
};

extern "C" void func_0204ae7c(struct Struct_0204ae44* arg0, int arg1, int arg2, int arg3, int arg4, int arg5);

// USA: func_0204ae44
extern "C" ARM void func_0204ae44(struct Struct_0204ae44* arg0, int arg1) {
    if (arg0->unknown_c_ != NULL) {
        func_0204ae7c(arg0, arg1, 0, 0, arg0->unknown_0_, arg0->unknown_2_);
    }
}

#include <globaldefs.h>

struct Struct_ov025_021d8bfc {
    unsigned int unknown_0_;
    unsigned int unknown_4_;
    unsigned int unknown_8_;
    unsigned int unknown_c_;
    unsigned int unknown_10_;
    unsigned char unknown_14_;
};

extern "C" void func_ov025_021d8c30(void* arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3,
                                     unsigned int arg4, unsigned int arg5, unsigned int arg6);

// USA: func_ov025_021d8bfc
extern "C" ARM void func_ov025_021d8bfc(void* arg0, struct Struct_ov025_021d8bfc* arg1) {
    func_ov025_021d8c30(arg0, arg1->unknown_0_, arg1->unknown_4_, arg1->unknown_8_, arg1->unknown_c_, arg1->unknown_10_, arg1->unknown_14_);
}

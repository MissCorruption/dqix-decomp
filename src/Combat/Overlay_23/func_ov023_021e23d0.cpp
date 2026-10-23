#include <globaldefs.h>

extern "C" void* func_ov023_021e2418(void* arg0, int arg1);

struct Struct_ov023_021e23d0 {
    char unknown_0_[3];
    unsigned char unknown_3_0_ : 4;
    unsigned char unknown_3_4_ : 4;
    char unknown_4_[0xc - 4];
    int unknown_c_;
};

// USA: func_ov023_021e23d0
extern "C" ARM void func_ov023_021e23d0(void* arg0, int arg1, int arg2, unsigned char arg3, unsigned char arg4) {
    struct Struct_ov023_021e23d0* var0 = (struct Struct_ov023_021e23d0*)func_ov023_021e2418(arg0, arg1);
    if (var0 == NULL) return;
    var0->unknown_c_ = arg2;
    var0->unknown_3_0_ = arg3;
    var0->unknown_3_4_ = arg4;
}

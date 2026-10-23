#include <globaldefs.h>

struct Struct_020546c8;
extern "C" void* func_02055080(struct Struct_020546c8* arg0);

struct Struct_020550c0 {
    char unknown_0_[0x8];
    void* unknown_8_;
};

// USA: func_020550c0
extern "C" ARM void* func_020550c0(struct Struct_020546c8* arg0) {
    struct Struct_020550c0* var0 = (struct Struct_020550c0*)func_02055080(arg0);
    return var0 == NULL ? NULL : var0->unknown_8_;
}

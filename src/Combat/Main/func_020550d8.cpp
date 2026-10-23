#include <globaldefs.h>

struct Struct_020546c8;
extern "C" void* func_02055080(struct Struct_020546c8* arg0);

struct Struct_020550d8 {
    char unknown_0_[0xc];
    void* unknown_c_;
};

// USA: func_020550d8
extern "C" ARM void* func_020550d8(struct Struct_020546c8* arg0) {
    struct Struct_020550d8* var0 = (struct Struct_020550d8*)func_02055080(arg0);
    return var0 == NULL ? NULL : var0->unknown_c_;
}

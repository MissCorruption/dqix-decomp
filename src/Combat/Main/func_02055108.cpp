#include <globaldefs.h>

struct Struct_020546c8;
extern "C" void* func_02055080(struct Struct_020546c8* arg0);

struct Struct_02055108 {
    char unknown_0_[0x14];
    void* unknown_14_;
};

// USA: func_02055108
extern "C" ARM void* func_02055108(struct Struct_020546c8* arg0) {
    struct Struct_02055108* var0 = (struct Struct_02055108*)func_02055080(arg0);
    return var0 == NULL ? NULL : var0->unknown_14_;
}

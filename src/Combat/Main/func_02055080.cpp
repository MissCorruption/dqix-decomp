#include <globaldefs.h>

struct Struct_020546c8 {
    char unknown_0_[0x4];
    void* unknown_4_;
};

// USA: func_02055080
extern "C" ARM void* func_02055080(struct Struct_020546c8* arg0) {
    void* var0 = arg0->unknown_4_;
    return var0 != NULL ? var0 : NULL;
}

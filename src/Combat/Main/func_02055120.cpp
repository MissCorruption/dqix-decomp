#include <globaldefs.h>

struct Struct_020546c8;
extern "C" void* func_02055080(struct Struct_020546c8* arg0);

struct Struct_02055120 {
    char unknown_0_[0x18];
    void* unknown_18_;
};

// USA: func_02055120
extern "C" ARM void* func_02055120(struct Struct_020546c8* arg0) {
    struct Struct_02055120* var0 = (struct Struct_02055120*)func_02055080(arg0);
    return var0 == NULL ? NULL : var0->unknown_18_;
}

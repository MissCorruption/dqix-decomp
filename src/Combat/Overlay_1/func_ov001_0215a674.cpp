#include <globaldefs.h>

struct Struct_ov001_0215a674 { int unknown_0_; char unknown_4_[0xc]; int unknown_10_; int unknown_14_; };
extern "C" struct Struct_ov001_0215a674* func_ov001_0215a054(void*);

// USA: func_ov001_0215a674
extern "C" ARM void func_ov001_0215a674(void* arg0, int arg1, int arg2) {
    struct Struct_ov001_0215a674* var0 = func_ov001_0215a054(arg0);
    if (var0 != NULL) {
        var0->unknown_0_ = 0x16;
        var0->unknown_10_ = arg1;
        var0->unknown_14_ = arg2;
    }
}

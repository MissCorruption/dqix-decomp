#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void __clear(void* arg0, int arg1);
extern "C" int func_020426bc(void* arg0, void* arg1, int arg2);
extern "C" void func_02042764(void* arg0, void* arg1, int arg2);

struct Struct_ov003_0215eeb8 {
    char unknown_0_[8];
    void* unknown_8_;
    char unknown_c_[4];
    int unknown_10_;
    char unknown_14_[0x1f - 0x14];
    unsigned char unknown_1f_;
};

// USA: func_ov003_0215eeb8
extern "C" ARM int func_ov003_0215eeb8(struct Struct_ov003_0215eeb8* arg0) {
    void* var0 = arg0->unknown_8_;
    unsigned char var1 = arg0->unknown_1f_;
    char var2[0x100];
    int var3;

    __clear(var2, 0x100);
    int var4 = func_020426bc(var0, var2, var1);
    if (var4 == 0) {
        var3 = 9;
    } else {
        var2[var4 - 1] = 0;
        memset(var0, 0, arg0->unknown_10_);
        func_02042764(var2, var0, var1);
        var3 = 8;
    }
    return var3;
}

#include <globaldefs.h>

extern "C" void* func_ov023_021e2418(void* arg0);
extern "C" ARM void* func_020421b0(int arg0);

struct Struct_ov023_021e2550 {
    char unknown_0_[0xc];
    void* unknown_c_;
};

// USA: func_ov023_021e2550
extern "C" ARM void* func_ov023_021e2550(void* arg0, int arg1, int arg2) {
    struct Struct_ov023_021e2550* var0 = (struct Struct_ov023_021e2550*)func_ov023_021e2418(arg0);
    if (!var0) return var0;
    void* var1 = func_020421b0((arg2 * 4 + 0x28) & 0xff);
    var0->unknown_c_ = var1;
    return var1;
}

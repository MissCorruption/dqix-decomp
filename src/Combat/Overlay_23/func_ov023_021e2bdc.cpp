#include <globaldefs.h>

struct Struct_ov023_021e2bdc { short unknown_0_; };
struct Struct_ov023_021e2bdc_2 { char unknown_0_[2]; unsigned short unknown_2_; struct Struct_ov023_021e2bdc* unknown_4_; };

extern "C" struct Struct_ov023_021e2bdc_2* func_ov023_021db4e4(void*);
extern "C" void func_ov023_021e2b5c(void*, int, short*, short*);

// USA: func_ov023_021e2bdc
extern "C" ARM void func_ov023_021e2bdc(void* arg0, int arg1, short* arg2, short* arg3) {
    struct Struct_ov023_021e2bdc_2* var0 = func_ov023_021db4e4(arg0);
    if (var0 != 0 && var0->unknown_2_ != 0 && var0->unknown_4_ != 0) {
        short var1 = var0->unknown_4_->unknown_0_;
        short var2, var3;
        func_ov023_021e2b5c(arg0, var1, &var2, &var3);
        *arg2 = var2;
        *arg3 = var3;
    }
}

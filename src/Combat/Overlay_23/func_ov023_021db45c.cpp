#include <globaldefs.h>

extern "C" void* func_ov023_021db4e4(void*, int);
extern "C" void func_ov023_021e2acc(void*, int, short*, short*);

struct Struct_ov023_021db45c { char unknown_0_[0xac]; short unknown_ac_; short unknown_ae_; };
struct Struct_ov023_021db45c_2 { char unknown_0_[8]; short unknown_8_; short unknown_a_; };

// USA: func_ov023_021db45c
extern "C" ARM void func_ov023_021db45c(void* arg0, struct Struct_ov023_021db45c* arg1, int arg2, short* arg3, short* arg4) {
    struct Struct_ov023_021db45c_2* var0 = (struct Struct_ov023_021db45c_2*)func_ov023_021db4e4(arg0, arg2);
    if (var0 == 0) return;
    short var1 = 0, var2 = 0;
    func_ov023_021e2acc(arg0, arg2, &var1, &var2);
    short var3 = var1;
    short var4 = var2;
    arg1->unknown_ac_ = var3 >> 3;
    arg1->unknown_ae_ = var4 >> 3;
    *arg3 = var0->unknown_8_;
    *arg4 = var0->unknown_a_;
    var0->unknown_8_ = 0;
    var0->unknown_a_ = 0;
}

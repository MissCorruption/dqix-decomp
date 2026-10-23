#include <globaldefs.h>

extern "C" void* func_ov000_0215e958(void* arg0);
extern "C" void func_ov000_0215a88c(void* arg0, void* arg1, int arg2);
extern "C" void func_ov000_0215ffc4(void* arg0, void* arg1, int arg2);
extern "C" void func_ov000_02159eac(void* arg0, void* arg1, int arg2);
extern "C" void func_ov000_0215cd44(void* arg0, void* arg1, void* arg2, int arg3, unsigned long long arg4, int arg5);

struct Struct_ov024_021ddc80_5 { char unknown_0_[0xc]; void* unknown_c_; void* unknown_10_; };

// USA: func_ov024_021e8cfc
extern "C" ARM void* func_ov024_021e8cfc(struct Struct_ov024_021ddc80_5* arg0, void* arg1, int arg2, int arg3) {
    void* var0 = func_ov000_0215e958(arg0->unknown_10_);
    if (!var0) return 0;
    if (arg3) {
        func_ov000_0215a88c(arg0->unknown_10_, var0, 0xf1);
    }
    func_ov000_0215a88c(arg0->unknown_10_, var0, 0x25c);
    func_ov000_0215ffc4(arg0->unknown_c_, var0, 1);
    ((unsigned char*)arg0->unknown_10_)[0x8e02] = ((unsigned char*)arg0->unknown_10_)[0x8e02] + 1;
    union { struct { int unknown_0_; int unknown_4_; }; unsigned long long unknown1_0_; } var1;
    var1.unknown_0_ = 0;
    var1.unknown_4_ = 0;
    func_ov000_02159eac(arg0->unknown_10_, &var1, (unsigned char)arg2);
    func_ov000_0215cd44(arg0->unknown_10_, var0, arg1, 0, var1.unknown1_0_, 0);
    return var0;
}

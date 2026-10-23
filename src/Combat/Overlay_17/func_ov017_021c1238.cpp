#include <globaldefs.h>

struct Struct_ov017_021a3ef0_10 { unsigned char unknown_0_[0x1c]; void* unknown_1c_; };

extern "C" void func_ov008_021845ac(void*);
extern "C" void func_ov017_021c07d0(Struct_ov017_021a3ef0_10*);

// USA: func_ov017_021c1238
extern "C" ARM void func_ov017_021c1238(Struct_ov017_021a3ef0_10* arg0) {
    void* var0 = arg0->unknown_1c_;
    if (var0) func_ov008_021845ac(var0);
    func_ov017_021c07d0(arg0);
    ((unsigned char*)arg0)[1] = 1;
}

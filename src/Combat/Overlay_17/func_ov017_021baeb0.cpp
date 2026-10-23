#include <globaldefs.h>

struct Struct_ov017_021a3ef0_11 { unsigned char unknown_0_[0x20]; void* unknown_20_; };

extern "C" void func_ov003_0215c800(void*);
extern "C" void func_ov017_021bac8c(Struct_ov017_021a3ef0_11*);

// USA: func_ov017_021baeb0
extern "C" ARM void func_ov017_021baeb0(Struct_ov017_021a3ef0_11* arg0) {
    void* var0 = arg0->unknown_20_;
    if (var0) func_ov003_0215c800(var0);
    func_ov017_021bac8c(arg0);
    ((unsigned char*)arg0)[1] = 1;
}

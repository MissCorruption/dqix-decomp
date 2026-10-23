#include <globaldefs.h>

extern "C" void* func_02012fe4(void);
extern "C" void func_ov017_021913d0(void* arg0, unsigned short arg1);
extern "C" void func_ov017_02191484(void* arg0);

struct Struct_ov017_021ce458 { unsigned char unknown_0_[4]; unsigned short unknown_4_; unsigned short unknown_6_; };

// USA: func_ov017_021ce458
extern "C" ARM void func_ov017_021ce458(int arg0, Struct_ov017_021ce458* arg1, int arg2, void* arg3) {
    void* var0 = func_02012fe4();
    if (arg1->unknown_6_ == *(unsigned short*)var0) {
        func_ov017_021913d0(arg3, arg1->unknown_4_);
        return;
    }
    func_ov017_02191484(arg3);
}

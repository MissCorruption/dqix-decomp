#include <globaldefs.h>

struct Struct_ov000_02176134 { char unknown_0_[0xc]; short unknown_c_; };

extern "C" void func_ov000_0217616c(struct Struct_ov000_02176134*);

// USA: func_ov000_02176134
extern "C" ARM void func_ov000_02176134(struct Struct_ov000_02176134* arg0, short arg1) {
    if (arg1 == arg0->unknown_c_) return;
    arg0->unknown_c_ = arg1;
    func_ov000_0217616c(arg0);
}

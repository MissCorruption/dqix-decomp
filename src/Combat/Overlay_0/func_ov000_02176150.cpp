#include <globaldefs.h>

struct Struct_ov000_021537b8_6 { char unknown_0_[0xe]; short unknown_e_; };

extern "C" void func_ov000_0217616c(struct Struct_ov000_021537b8_6*);

// USA: func_ov000_02176150
extern "C" ARM void func_ov000_02176150(struct Struct_ov000_021537b8_6* arg0, short arg1) {
    if (arg1 == arg0->unknown_e_) return;
    arg0->unknown_e_ = arg1;
    func_ov000_0217616c(arg0);
}

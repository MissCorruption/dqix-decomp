#include <globaldefs.h>

struct Struct_ov017_021d82fc_6 {
    unsigned char unknown_0_[0xd];
    unsigned char unknown_d_;
};

extern "C" void func_020da8e0(Struct_ov017_021d82fc_6*);
extern "C" void func_020da31c(Struct_ov017_021d82fc_6*);

// USA: func_020da2fc
extern "C" ARM void func_020da2fc(Struct_ov017_021d82fc_6* arg0) {
    if (arg0->unknown_d_ & 1) {
        func_020da8e0(arg0);
        return;
    }
    func_020da31c(arg0);
}

#include <globaldefs.h>

extern "C" void func_ov031_0223e2c0(int, void*);

struct Struct_ov031_02236e38 { char unknown_0_[0x14]; int unknown_14_; };
struct Struct_ov031_02290d04_7 { char unknown_0_[4]; struct Struct_ov031_02236e38 *unknown_4_; };
extern struct Struct_ov031_02290d04_7 data_ov031_02290d04;

// USA: func_ov031_02236e38
extern "C" ARM void func_ov031_02236e38(void* arg0) {
    func_ov031_0223e2c0(0, arg0);
    data_ov031_02290d04.unknown_4_->unknown_14_ = 0;
}

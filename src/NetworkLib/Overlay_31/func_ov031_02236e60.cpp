#include <globaldefs.h>

extern "C" ARM void *func_ov031_0223e218(void *arg0, void *arg1, void *arg2, int arg3);
extern "C" void func_ov031_02236f88(void);

struct Struct_ov031_02236e60 { char unknown_0_[0x14]; int unknown_14_; char unknown_18_; };
struct Struct_ov031_02290d04_8 { char unknown_0_[4]; struct Struct_ov031_02236e60 *unknown_4_; };
extern struct Struct_ov031_02290d04_8 data_ov031_02290d04;

// USA: func_ov031_02236e60
extern "C" ARM void func_ov031_02236e60(void) {
    data_ov031_02290d04.unknown_4_->unknown_18_ = 1;
    data_ov031_02290d04.unknown_4_->unknown_14_ = (int)func_ov031_0223e218(0, (void*)func_ov031_02236f88, 0, 0x78);
}

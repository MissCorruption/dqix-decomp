#include <globaldefs.h>

struct Struct_ov031_02236f68 { char unknown_0_[0x14]; int unknown_14_; };
struct Struct_ov031_02290d04_10 { char unknown_0_[4]; struct Struct_ov031_02236f68 *unknown_4_; };
extern struct Struct_ov031_02290d04_10 data_ov031_02290d04;

// USA: func_ov031_02236f68
extern "C" ARM int func_ov031_02236f68(void) {
    return data_ov031_02290d04.unknown_4_->unknown_14_ != 0;
}

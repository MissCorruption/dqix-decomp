#include <globaldefs.h>

struct Struct_ov031_02239be8 { unsigned char unknown_0_[0x40]; int unknown_40_; };
struct Struct_ov031_02290d18_18 { unsigned char unknown_0_[4]; struct Struct_ov031_02239be8* unknown_4_; };
extern struct Struct_ov031_02290d18_18 data_ov031_02290d18;

// USA: func_ov031_02239be8
extern "C" ARM int func_ov031_02239be8(void) {
	return data_ov031_02290d18.unknown_4_->unknown_40_;
}

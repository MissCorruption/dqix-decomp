#include <globaldefs.h>

struct Struct_ov031_022393e4 { unsigned char unknown_0_[0x40]; int unknown_40_; unsigned char unknown_44_[0x10]; int unknown_54_; };
struct Struct_ov031_02290d18_7 { unsigned char unknown_0_[4]; struct Struct_ov031_022393e4* unknown_4_; };
extern struct Struct_ov031_02290d18_7 data_ov031_02290d18;

// USA: func_ov031_022393e4
extern "C" ARM void func_ov031_022393e4(int arg0) {
	int var0 = data_ov031_02290d18.unknown_4_->unknown_40_;
	if ((unsigned int)(var0 - 9) > 1) {
		data_ov031_02290d18.unknown_4_->unknown_54_ = arg0;
	}
}

#include <globaldefs.h>

struct Struct_ov031_02291f24 { unsigned char unknown_0_; unsigned char unknown_1_[0x13]; int unknown_14_; };
extern struct Struct_ov031_02291f24 data_ov031_02291f24;

// USA: func_ov031_02245858
extern "C" ARM void func_ov031_02245858(int arg0, unsigned char arg1) {
	data_ov031_02291f24.unknown_14_ = arg0;
	data_ov031_02291f24.unknown_0_ = arg1;
}

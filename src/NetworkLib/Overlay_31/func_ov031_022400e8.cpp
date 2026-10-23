#include <globaldefs.h>

struct Struct_ov031_0223ede0 { int unknown_0_; unsigned char unknown_4_[0x14]; int unknown_18_; int unknown_1c_; };

// USA: func_ov031_022400e8
extern "C" ARM int func_ov031_022400e8(Struct_ov031_0223ede0* arg0, int arg1, int arg2) {
	if (arg0->unknown_0_ != 0) {
		return 0;
	}
	arg0->unknown_1c_ = arg1;
	arg0->unknown_18_ = arg2;
	return 1;
}

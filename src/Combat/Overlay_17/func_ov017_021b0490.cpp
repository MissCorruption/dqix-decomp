#include <globaldefs.h>

struct Struct_ov017_021b0490 {
	unsigned char unknown_0_[9];
	unsigned char unknown_9_;
	unsigned char unknown_a_;
	unsigned char unknown_b_[0x23 - 0xb];
	unsigned char unknown_23_;
	unsigned char unknown_24_;
	unsigned char unknown_25_[0x30 - 0x25];
	int unknown_30_;
};

// USA: func_ov017_021b0490
extern "C" ARM int func_ov017_021b0490(Struct_ov017_021b0490* arg0) {
	if (arg0->unknown_9_ == 0) {
		if (arg0->unknown_30_ != 0) {
			arg0->unknown_23_ = 0;
			arg0->unknown_24_ = 0;
			return 9;
		}
	}
	return arg0->unknown_a_;
}

#include <globaldefs.h>

struct Struct_ov017_021b04c0 {
	char unknown_0_[0xa];
	unsigned char unknown_a_;
	char unknown_b_[0x21 - 0xb];
	unsigned char unknown_21_;
	unsigned char unknown_22_;
	char unknown_23_[0x28 - 0x23];
	int unknown_28_;
};

// USA: func_ov017_021b04c0
extern "C" ARM unsigned char func_ov017_021b04c0(Struct_ov017_021b04c0* arg0) {
	if (arg0->unknown_28_ != 0) {
		arg0->unknown_21_ = 0;
		arg0->unknown_22_ = 0;
		return 7;
	}
	return arg0->unknown_a_;
}

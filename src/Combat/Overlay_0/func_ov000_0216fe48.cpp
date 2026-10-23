#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_ov000_0216fe48 {
	int unknown_0_;
	unsigned char unknown_4_[0x84 - 0x4];
	int unknown_84_;
	unsigned char unknown_88_[0x18];
	unsigned char unknown_a0_;
	unsigned char unknown_a1_;
};

// USA: func_ov000_0216fe48
extern "C" ARM void func_ov000_0216fe48(struct Struct_ov000_0216fe48* arg0) {
	arg0->unknown_0_ = -1;
	arg0->unknown_84_ = 0;
	arg0->unknown_a0_ = 0;
	arg0->unknown_a1_ = 0;
	memset(arg0->unknown_88_, 0, 0x18);
}

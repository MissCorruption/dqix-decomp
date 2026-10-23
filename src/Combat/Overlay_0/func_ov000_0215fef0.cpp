#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_ov000_0215fef0 {
	unsigned char unknown_0_[0xc];
	short unknown_c_;
	unsigned char unknown_e_[6];
	unsigned char unknown_14_[0x20 - 0x14];
};

// USA: func_ov000_0215fef0
extern "C" ARM void func_ov000_0215fef0(struct Struct_ov000_0215fef0* arg0) {
	memset(arg0, 0, 0x20);
	memset(arg0->unknown_e_, -1, 6);
	arg0->unknown_c_ = -1;
}

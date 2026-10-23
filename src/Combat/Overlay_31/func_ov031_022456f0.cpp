#include <globaldefs.h>

struct Struct_ov031_022456f0 { unsigned char unknown_0_[0x34]; unsigned char unknown_34_; unsigned char unknown_35_; };

// USA: func_ov031_022456f0
extern "C" ARM int func_ov031_022456f0(Struct_ov031_022456f0* arg0) {
	if (arg0->unknown_34_ == 7 || arg0->unknown_34_ == 6) {
		arg0->unknown_35_ = 5;
		return 1;
	}
	return 0;
}

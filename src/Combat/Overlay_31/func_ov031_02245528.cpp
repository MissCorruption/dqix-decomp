#include <globaldefs.h>

struct Struct_02245528 { unsigned char unknown_0_[0x34]; unsigned char unknown_34_; unsigned char unknown_35_; unsigned char unknown_36_; unsigned char unknown_37_; };

// USA: func_ov031_02245528
extern "C" ARM void func_ov031_02245528(struct Struct_02245528* arg0, int arg1) {
	arg0->unknown_34_ = arg1;
	arg0->unknown_35_ = 0;
	arg0->unknown_37_ = 0;
	if (arg1 == 0) {
		arg0->unknown_36_ = 1;
	}
}

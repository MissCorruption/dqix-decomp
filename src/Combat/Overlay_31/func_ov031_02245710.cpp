#include <globaldefs.h>

struct Struct_ov031_022456f0 { unsigned char unknown_0_[0x34]; unsigned char unknown_34_; unsigned char unknown_35_; };
extern "C" ARM int func_ov031_022456f0(Struct_ov031_022456f0* arg0);

// USA: func_ov031_02245710
extern "C" ARM int func_ov031_02245710(Struct_ov031_022456f0* arg0, int arg1) {
	if (arg1 != 0) return func_ov031_022456f0(arg0);
	if (arg0->unknown_34_ == 6) {
		if (arg0->unknown_35_ == 2 || arg0->unknown_35_ == 1) return func_ov031_022456f0(arg0);
	}
	return 0;
}

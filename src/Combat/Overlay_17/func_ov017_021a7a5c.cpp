#include <globaldefs.h>

struct Struct_ov017_021a3ef0_20 { unsigned char unknown_0_; unsigned char unknown_1_; };

extern "C" void func_ov017_021a79f0(Struct_ov017_021a3ef0_20*);

// USA: func_ov017_021a7a5c
extern "C" ARM void func_ov017_021a7a5c(Struct_ov017_021a3ef0_20* arg0) {
	func_ov017_021a79f0(arg0);
	arg0->unknown_1_ = 1;
}

#include <globaldefs.h>

struct Struct_ov017_021a3ef0_5 { unsigned char unknown_0_; unsigned char unknown_1_; };

extern "C" void func_ov017_021b6f9c(Struct_ov017_021a3ef0_5*);

// USA: func_ov017_021b83f0
extern "C" ARM void func_ov017_021b83f0(Struct_ov017_021a3ef0_5* arg0) {
	func_ov017_021b6f9c(arg0);
	arg0->unknown_1_ = 1;
}

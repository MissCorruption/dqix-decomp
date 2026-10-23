#include <globaldefs.h>

struct Struct_ov017_021a3ef0_3 { unsigned char unknown_0_; unsigned char unknown_1_; };

extern "C" void func_ov017_021b14ec(Struct_ov017_021a3ef0_3*);

// USA: func_ov017_021b1d24
extern "C" ARM void func_ov017_021b1d24(Struct_ov017_021a3ef0_3* arg0) {
	func_ov017_021b14ec(arg0);
	arg0->unknown_1_ = 1;
}

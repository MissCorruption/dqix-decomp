#include <globaldefs.h>

struct Struct_ov017_021a3ef0_2 { unsigned char unknown_0_; unsigned char unknown_1_; };

extern "C" void func_ov017_021a92a0(Struct_ov017_021a3ef0_2*);

// USA: func_ov017_021a9314
extern "C" ARM void func_ov017_021a9314(Struct_ov017_021a3ef0_2* arg0) {
	func_ov017_021a92a0(arg0);
	arg0->unknown_1_ = 1;
}

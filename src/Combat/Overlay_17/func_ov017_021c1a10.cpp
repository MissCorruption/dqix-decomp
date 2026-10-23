#include <globaldefs.h>

struct Struct_ov017_021a3ef0_15 { unsigned char unknown_0_; unsigned char unknown_1_; };
extern "C" void func_ov017_021c1a24(Struct_ov017_021a3ef0_15* arg0);

// USA: func_ov017_021c1a10
extern "C" ARM void func_ov017_021c1a10(Struct_ov017_021a3ef0_15* arg0) {
	arg0->unknown_1_ = 1;
	func_ov017_021c1a24(arg0);
}

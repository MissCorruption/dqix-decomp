#include <globaldefs.h>

struct Struct_ov017_021a3ef0_16 { unsigned char unknown_0_; unsigned char unknown_1_; };
extern "C" void func_ov017_021c310c(Struct_ov017_021a3ef0_16* arg0);

// USA: func_ov017_021c30f8
extern "C" ARM void func_ov017_021c30f8(Struct_ov017_021a3ef0_16* arg0) {
	arg0->unknown_1_ = 1;
	func_ov017_021c310c(arg0);
}

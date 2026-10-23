#include <globaldefs.h>

struct Struct_ov017_021a3ef0_18 { unsigned char unknown_0_; unsigned char unknown_1_; };

extern "C" void func_ov017_021a6b30(Struct_ov017_021a3ef0_18*);

// USA: func_ov017_021a6b84
extern "C" ARM void func_ov017_021a6b84(Struct_ov017_021a3ef0_18* arg0) {
	func_ov017_021a6b30(arg0);
	arg0->unknown_1_ = 1;
}

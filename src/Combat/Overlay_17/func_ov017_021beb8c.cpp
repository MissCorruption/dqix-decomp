#include <globaldefs.h>

struct Struct_ov017_021a3ef0_6 { unsigned char unknown_0_; unsigned char unknown_1_; };

extern "C" void func_ov017_021beb48(Struct_ov017_021a3ef0_6*);

// USA: func_ov017_021beb8c
extern "C" ARM void func_ov017_021beb8c(Struct_ov017_021a3ef0_6* arg0) {
	func_ov017_021beb48(arg0);
	arg0->unknown_1_ = 1;
}

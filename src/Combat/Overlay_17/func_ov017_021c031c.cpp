#include <globaldefs.h>

struct Struct_ov017_021a3ef0_8 { unsigned char unknown_0_; unsigned char unknown_1_; };

extern "C" void func_ov017_021c0160(Struct_ov017_021a3ef0_8*);

// USA: func_ov017_021c031c
extern "C" ARM void func_ov017_021c031c(Struct_ov017_021a3ef0_8* arg0) {
	func_ov017_021c0160(arg0);
	arg0->unknown_1_ = 1;
}

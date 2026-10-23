#include <globaldefs.h>

struct Struct_ov017_021a3ef0_7 { unsigned char unknown_0_; unsigned char unknown_1_; };

extern "C" void func_ov017_021bef84(Struct_ov017_021a3ef0_7*);

// USA: func_ov017_021befcc
extern "C" ARM void func_ov017_021befcc(Struct_ov017_021a3ef0_7* arg0) {
	func_ov017_021bef84(arg0);
	arg0->unknown_1_ = 1;
}

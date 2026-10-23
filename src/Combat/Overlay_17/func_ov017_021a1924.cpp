#include <globaldefs.h>

struct Struct_ov017_021a1924 { unsigned char unknown_0_; unsigned char unknown_1_; };

extern "C" void func_ov017_021a18c8(Struct_ov017_021a1924*);

// USA: func_ov017_021a1924
extern "C" ARM void func_ov017_021a1924(Struct_ov017_021a1924* arg0) {
	func_ov017_021a18c8(arg0);
	arg0->unknown_1_ = 1;
}

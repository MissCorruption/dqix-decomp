#include <globaldefs.h>

struct Struct_ov017_021a3ef0_19 { unsigned char unknown_0_; unsigned char unknown_1_; };

#if defined(jpn)
#define func_ov017_021a7280 func_ov017_021a7c28
#endif
extern "C" void func_ov017_021a7280(Struct_ov017_021a3ef0_19*);

// USA: func_ov017_021a72dc
extern "C" ARM void func_ov017_021a72dc(Struct_ov017_021a3ef0_19* arg0) {
	func_ov017_021a7280(arg0);
	arg0->unknown_1_ = 1;
}

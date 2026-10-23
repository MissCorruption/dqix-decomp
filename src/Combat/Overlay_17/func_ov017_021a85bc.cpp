#include <globaldefs.h>

struct Struct_ov017_021a3ef0 { unsigned char unknown_0_; unsigned char unknown_1_; };

#if defined(jpn)
#define func_ov017_021a7dd8 func_ov017_021a8754
#endif
extern "C" void func_ov017_021a7dd8(Struct_ov017_021a3ef0*);

// USA: func_ov017_021a85bc
extern "C" ARM void func_ov017_021a85bc(Struct_ov017_021a3ef0* arg0) {
	func_ov017_021a7dd8(arg0);
	arg0->unknown_1_ = 1;
}

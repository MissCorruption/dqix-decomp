#include <globaldefs.h>

struct Struct_ov017_0219558c { unsigned char unknown_0_[0xa]; unsigned char unknown_a_; };

// USA: func_ov017_021b1454
extern "C" ARM void func_ov017_021b1454(Struct_ov017_0219558c* arg0, int arg1) {
	arg0->unknown_a_ &= ~(1 << arg1);
}

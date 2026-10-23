#include <globaldefs.h>

extern "C" void func_ov023_021f809c(void* arg0, int arg1, int arg2, int arg3);

struct Struct_ov004_0215f6f4 { char unknown_0_[0xe2]; unsigned short unknown_e2_; };

// USA: func_ov023_021f8944
extern "C" ARM void func_ov023_021f8944(struct Struct_ov004_0215f6f4* arg0, int arg1, int arg2, int arg3) {
	arg2 &= 0xf;
	arg0->unknown_e2_ = arg2;
	if (arg3 != 0) func_ov023_021f809c(arg0, arg1, arg2, arg3);
}

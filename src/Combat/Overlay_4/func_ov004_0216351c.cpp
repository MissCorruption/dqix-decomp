#include <globaldefs.h>

struct Struct_ov004_0216351c { char unknown_0_[0x5c]; short unknown_5c_; short unknown_5e_; };

// USA: func_ov004_0216351c
extern "C" ARM void func_ov004_0216351c(Struct_ov004_0216351c* arg0, short* arg1, short* arg2) {
	*arg1 = arg0->unknown_5c_;
	*arg2 = arg0->unknown_5e_;
}

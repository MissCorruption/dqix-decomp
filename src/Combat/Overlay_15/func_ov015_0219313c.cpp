#include <globaldefs.h>

struct Struct_ov015_02192700_9 { char unknown_0_[0x5c]; short unknown_5c_; short unknown_5e_; short unknown_60_; };

// USA: func_ov015_0219313c
extern "C" ARM void func_ov015_0219313c(Struct_ov015_02192700_9* arg0, int arg1, int arg2) {
	arg0->unknown_5c_ = arg1;
	arg0->unknown_60_ = arg0->unknown_5c_;
	arg0->unknown_5e_ = arg2;
}

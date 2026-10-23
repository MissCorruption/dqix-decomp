#include <globaldefs.h>

struct Struct_ov015_02192700_10 { char unknown_0_[0x5c]; short unknown_5c_; short unknown_5e_; short unknown_60_; };

// USA: func_ov015_02193150
extern "C" ARM void func_ov015_02193150(struct Struct_ov015_02192700_10* arg0, int arg1) {
	arg0->unknown_60_ = arg1 + arg0->unknown_5c_;
}

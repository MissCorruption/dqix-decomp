#include <globaldefs.h>

extern "C" unsigned short func_0202053c(void* arg0);

struct Struct_ov024_021f7244 { void* unknown_0_; char unknown_4_[0x10]; float unknown_14_; float unknown_18_; float unknown_1c_; float unknown_20_; };

// USA: func_ov024_021f7244
extern "C" ARM int func_ov024_021f7244(struct Struct_ov024_021f7244* arg0) {
	func_0202053c(arg0->unknown_0_);
	arg0->unknown_1c_ = arg0->unknown_14_ / 4.0f + 5.0f;
	arg0->unknown_20_ = arg0->unknown_18_ / 4.0f + 5.0f;
	return 1;
}

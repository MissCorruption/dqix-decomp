#include <globaldefs.h>

#if defined(jpn)
#define func_ov023_021e3084 func_ov023_021e33dc
#endif

struct Struct_ov017_021a185c { unsigned char unknown_0_[0x1c]; void* unknown_1c_; unsigned char unknown_20_[0x22 - 0x1c - 4]; unsigned char unknown_22_; };

extern "C" void func_ov023_021e3084(void*);

// USA: func_ov017_021a185c
extern "C" ARM void func_ov017_021a185c(Struct_ov017_021a185c* arg0) {
	if (arg0->unknown_22_ <= 1) {
		return;
	}
	if (arg0->unknown_1c_ == 0) {
		return;
	}
	func_ov023_021e3084(arg0->unknown_1c_);
}

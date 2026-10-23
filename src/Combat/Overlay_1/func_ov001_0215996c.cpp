#include <globaldefs.h>

struct Struct_ov001_0215996c { char unknown_0_[0x10]; int unknown_10_; };
struct Struct_ov001_0215996c_2 { char unknown_0_[0x60]; int unknown_60_; };

// USA: func_ov001_0215996c
extern "C" ARM int func_ov001_0215996c(Struct_ov001_0215996c* arg0, Struct_ov001_0215996c_2* arg1) {
	int var0 = arg1->unknown_60_;
	int var1 = arg0->unknown_10_;
	if (var0 >= var1) {
		arg1->unknown_60_ = 0;
		return 0;
	}
	arg1->unknown_60_ = var0 + 1;
	return 1;
}

#include <globaldefs.h>

struct Struct_ov001_02158470 { char unknown_0_[0x1c]; int unknown_1c_; };
struct Struct_ov001_02158470_2 { char unknown_0_[0x44]; int unknown_44_; };

// USA: func_ov001_02158470
extern "C" ARM int func_ov001_02158470(Struct_ov001_02158470* arg0, Struct_ov001_02158470_2* arg1) {
	int var0 = arg1->unknown_44_;
	int var1 = arg0->unknown_1c_;
	if (var0 >= var1) {
		arg1->unknown_44_ = 0;
		return 0;
	}
	arg1->unknown_44_ = var0 + 1;
	return 1;
}

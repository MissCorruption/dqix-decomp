#include <globaldefs.h>

struct Struct_ov017_021d4a38_2 { int unknown_0_; int unknown_4_; };
extern "C" void func_ov017_021d4a64(Struct_ov017_021d4a38_2* arg0, Struct_ov017_021d4a38_2* arg1);

struct Struct_ov017_021d4a38 { unsigned char unknown_0_[0x14]; Struct_ov017_021d4a38_2* unknown_14_; };

// USA: func_ov017_021d4a38
extern "C" ARM void func_ov017_021d4a38(Struct_ov017_021d4a38* arg0, Struct_ov017_021d4a38_2 arg1) {
	Struct_ov017_021d4a38_2* var0 = arg0->unknown_14_;
	arg0->unknown_14_ = var0 + 1;
	func_ov017_021d4a64(var0, &arg1);
}

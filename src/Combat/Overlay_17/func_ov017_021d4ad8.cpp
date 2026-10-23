#include <globaldefs.h>

struct Struct_ov017_021d4ad8 { int unknown_0_; int unknown_4_; };
struct Struct_ov017_021d4ad8_2 { unsigned char unknown_0_[0x14]; Struct_ov017_021d4ad8* unknown_14_; };

// USA: func_ov017_021d4ad8
extern "C" ARM void func_ov017_021d4ad8(Struct_ov017_021d4ad8_2* arg0, int arg1) {
	arg0->unknown_14_->unknown_0_ = 1;
	Struct_ov017_021d4ad8* var0 = arg0->unknown_14_;
	arg0->unknown_14_ = var0 + 1;
	var0->unknown_4_ = arg1;
}

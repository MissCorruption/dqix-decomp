#include <globaldefs.h>

struct Struct_ov017_021d4b9c { int unknown_0_; int unknown_4_; int unknown_8_; };
struct Struct_ov017_021d4b9c_2 {
	unsigned char unknown_0_[0x28];
	Struct_ov017_021d4b9c* unknown_28_;
	unsigned char unknown_2c_[4];
	int unknown_30_;
	int unknown_34_;
};

// USA: func_ov017_021d4b9c
extern "C" ARM int func_ov017_021d4b9c(Struct_ov017_021d4b9c_2* arg0) {
	arg0->unknown_28_--;
	arg0->unknown_30_ = arg0->unknown_28_->unknown_4_;
	arg0->unknown_34_ = arg0->unknown_28_->unknown_8_;
	return arg0->unknown_28_->unknown_0_;
}

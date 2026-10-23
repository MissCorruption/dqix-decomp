#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_ov017_021d4af8_3 { int unknown_0_; int unknown_4_; int unknown_8_; };
struct Struct_ov017_021d4af8 { int unknown_0_; char unknown_4_[4]; int unknown_8_; int unknown_c_; };

struct Struct_ov017_021d4af8_2 {
	char unknown_0_[0x14];
	int unknown_14_;
	char unknown_18_[0x28 - 0x14 - 4];
	struct Struct_ov017_021d4af8_3* unknown_28_;
	struct Struct_ov017_021d4af8_3* unknown_2c_;
	int unknown_30_;
	struct Struct_ov017_021d4af8* unknown_34_;
	char unknown_38_[0x48 - 0x34 - 4];
	int unknown_48_;
};

extern "C" void func_0200159c(int arg0);

// USA: func_ov017_021d4af8
extern "C" ARM int func_ov017_021d4af8(struct Struct_ov017_021d4af8_2* arg0, struct Struct_ov017_021d4af8* arg1, int arg2) {
	struct Struct_ov017_021d4af8_3* var0 = arg0->unknown_28_;
	if (var0 >= arg0->unknown_2c_) {
		func_0200159c(-2);
	}
	var0->unknown_0_ = arg2;
	arg0->unknown_28_->unknown_8_ = (int)arg0->unknown_34_;
	arg0->unknown_28_->unknown_4_ = arg0->unknown_30_;

	arg0->unknown_30_ = arg0->unknown_14_ - (arg1->unknown_c_ << 3);
	arg0->unknown_14_ = arg0->unknown_30_ + (arg1->unknown_8_ << 3);
	arg0->unknown_34_ = arg1;
	arg0->unknown_28_ = (struct Struct_ov017_021d4af8_3*)((char*)arg0->unknown_28_ + 0xc);

	memset((void*)(arg0->unknown_30_ + (arg0->unknown_34_->unknown_c_ << 3)), 0, (arg0->unknown_34_->unknown_8_ - arg0->unknown_34_->unknown_c_) << 3);

	return arg0->unknown_48_ + arg1->unknown_0_;
}

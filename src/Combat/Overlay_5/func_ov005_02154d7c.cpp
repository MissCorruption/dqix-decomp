#include <globaldefs.h>

struct Struct_ov005_02154d7c {
	char unknown_0_[8];
	int unknown_8_;
	int unknown_c_;
	int unknown_10_;
	int unknown_14_;
	char unknown_18_[0x18];
	int unknown_30_;
	int unknown_34_;
};

// USA: func_ov005_02154d7c
extern "C" ARM void func_ov005_02154d7c(Struct_ov005_02154d7c* arg0, int arg1, int arg2) {
	arg0->unknown_30_ = arg0->unknown_c_ + (arg1 - arg0->unknown_8_);
	arg0->unknown_34_ = arg0->unknown_14_ + (arg2 - arg0->unknown_10_);
}

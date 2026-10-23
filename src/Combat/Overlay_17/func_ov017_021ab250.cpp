#include <globaldefs.h>

struct Struct_0204693c;
extern "C" void func_0204693c(Struct_0204693c* arg0);

struct Struct_ov017_021ab250 {
	unsigned char unknown_0_;
	unsigned char unknown_1_[7];
	int unknown_8_;
	int unknown_c_;
	unsigned char unknown_10_[4];
	int unknown_14_;
	int unknown_18_;
	int unknown_1c_;
};

// USA: func_ov017_021ab250
extern "C" ARM void func_ov017_021ab250(Struct_ov017_021ab250* arg0) {
	func_0204693c((Struct_0204693c*)arg0);
	arg0->unknown_0_ = 6;
	arg0->unknown_8_ = 0;
	arg0->unknown_c_ = 0;
	arg0->unknown_14_ = 0;
	arg0->unknown_18_ = 0;
	arg0->unknown_1c_ = 0;
}

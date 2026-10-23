#include <globaldefs.h>

struct Struct_0204693c;
extern "C" void func_0204693c(Struct_0204693c* arg0);

struct Struct_ov017_021adcb0 {
	unsigned char unknown_0_;
	unsigned char unknown_1_[7];
	unsigned short unknown_8_;
	unsigned char unknown_a_[2];
	int unknown_c_;
	unsigned char unknown_10_;
	unsigned char unknown_11_;
	unsigned short unknown_12_;
	int unknown_14_;
	int unknown_18_;
};

// USA: func_ov017_021c2744
extern "C" ARM void func_ov017_021c2744(Struct_ov017_021adcb0* arg0) {
	func_0204693c((Struct_0204693c*)arg0);
	arg0->unknown_0_ = 0x45;
	arg0->unknown_10_ = 0;
	arg0->unknown_8_ = 0x7d0;
	arg0->unknown_11_ = 0;
	arg0->unknown_14_ = 0;
	arg0->unknown_18_ = -1;
	arg0->unknown_12_ = 0;
	arg0->unknown_c_ = 0;
}

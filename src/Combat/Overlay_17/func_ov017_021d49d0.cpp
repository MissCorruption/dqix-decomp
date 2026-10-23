#include <globaldefs.h>

struct Struct_ov001_021538d4;
extern "C" void func_ov017_021d4a24(Struct_ov001_021538d4* arg0);

struct Struct_ov001_02165828 {
	int unknown_0_;
	int unknown_4_;
	unsigned char unknown_8_[4];
	int unknown_c_;
	int unknown_10_;
	int unknown_14_;
	int unknown_18_;
	unsigned char unknown_1c_[4];
	int unknown_20_;
	int unknown_24_;
	int unknown_28_;
	int unknown_2c_;
	unsigned char unknown_30_[8];
	int unknown_38_;
	unsigned char unknown_3c_[4];
	int unknown_40_;
};

// USA: func_ov017_021d49d0
extern "C" ARM Struct_ov001_02165828* func_ov017_021d49d0(Struct_ov001_02165828* arg0) {
	arg0->unknown_14_ = arg0->unknown_10_;
	arg0->unknown_18_ = arg0->unknown_10_;
	arg0->unknown_28_ = arg0->unknown_24_;
	arg0->unknown_2c_ = arg0->unknown_24_;
	arg0->unknown_38_ = 0;
	arg0->unknown_4_ = 0;
	arg0->unknown_c_ = 0;
	arg0->unknown_20_ = 0;
	arg0->unknown_40_ = 0;
	arg0->unknown_0_ = 1;
	func_ov017_021d4a24((Struct_ov001_021538d4*)arg0);
	return arg0;
}

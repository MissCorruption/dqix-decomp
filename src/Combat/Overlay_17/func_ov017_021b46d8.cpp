#include <globaldefs.h>

struct Struct_0204693c;
extern "C" void func_0204693c(Struct_0204693c* arg0);

struct Struct_ov017_0219dc90_3 {
	unsigned char unknown_0_;
	unsigned char unknown_1_[7];
	int unknown_8_;
	int unknown_c_;
	unsigned char unknown_10_;
	unsigned char unknown_11_;
	unsigned short unknown_12_;
	int unknown_14_;
};

// USA: func_ov017_021b46d8
extern "C" ARM void func_ov017_021b46d8(struct Struct_ov017_0219dc90_3* arg0) {
	func_0204693c((Struct_0204693c*)arg0);
	arg0->unknown_0_ = 0x14;
	arg0->unknown_8_ = 0;
	arg0->unknown_10_ = 0;
	arg0->unknown_c_ = -1;
	arg0->unknown_12_ = 0;
#if !defined(jpn)
	arg0->unknown_14_ = 0;
#endif
	arg0->unknown_11_ = 0;
}

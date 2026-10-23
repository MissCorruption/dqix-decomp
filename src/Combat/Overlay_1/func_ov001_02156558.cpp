#include <globaldefs.h>

struct Struct_ov001_02156558 {
	unsigned char unknown_0_[1];
	unsigned char unknown_1_;
	unsigned char unknown_2_[8];
	unsigned short unknown_a_;
};

extern "C" void func_ov001_02154da0(struct Struct_ov001_02156558* arg0);
extern "C" void func_ov017_021bb27c(struct Struct_ov001_02156558* arg0);

// USA: func_ov001_02156558
extern "C" ARM unsigned short func_ov001_02156558(struct Struct_ov001_02156558* arg0) {
	func_ov001_02154da0(arg0);
	func_ov017_021bb27c(arg0);
	arg0->unknown_1_ = 1;
	return arg0->unknown_a_;
}

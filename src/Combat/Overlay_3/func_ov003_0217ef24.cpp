#include <globaldefs.h>

struct Struct_0204693c;
extern "C" void func_0204693c(struct Struct_0204693c* arg0);

struct Struct_ov003_0217ef24 {
	unsigned char unknown_0_;              // 0x0
	char unknown_1_[0xc - 1];
	int unknown_c_;                     // 0xc
	int unknown_10_;                    // 0x10
	char unknown_14_[0x28 - 0x14];
	unsigned char unknown_28_;          // 0x28
	char unknown_29_[0x3a - 0x29];
	unsigned char unknown_3a_;          // 0x3a
	unsigned char unknown_3b_;          // 0x3b
};

// USA: func_ov003_0217ef24
extern "C" ARM void func_ov003_0217ef24(struct Struct_ov003_0217ef24* arg0) {
	func_0204693c((struct Struct_0204693c*)arg0);
	arg0->unknown_0_ = 0x2a;
	arg0->unknown_c_ = 0;
	arg0->unknown_10_ = 0;
	arg0->unknown_3a_ = 0;
	arg0->unknown_3b_ = 0;
	arg0->unknown_28_ = 0xff;
}

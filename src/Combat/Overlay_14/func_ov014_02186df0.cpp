#include <globaldefs.h>

struct Struct_ov014_02186bc8_2 {
	unsigned char unknown_0_[0xd0];
	short* unknown_d0_;
	unsigned char unknown_d4_[0x17a - 0xd4];
	unsigned char unknown_17a_;
	unsigned char unknown_17b_;
	unsigned char unknown_17c_[0x17f - 0x17c];
	unsigned char unknown_17f_;
};

// USA: func_ov014_02186df0
extern "C" ARM void func_ov014_02186df0(struct Struct_ov014_02186bc8_2* arg0) {
	if (arg0->unknown_17f_ != 0) return;
	arg0->unknown_17f_ = 1;
	short* var0 = arg0->unknown_d0_;
	if (var0 != NULL) *var0 = -1;
	arg0->unknown_d0_ = NULL;
	arg0->unknown_17a_ = 5;
	arg0->unknown_17b_ = 0;
}

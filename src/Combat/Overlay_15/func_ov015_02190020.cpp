#include <globaldefs.h>

struct Struct_ov015_02190020 {
	char unknown_0_[0x1c];
	unsigned char unknown_1c_;
	char unknown_1d_[0x24 - 0x1d];
	int* unknown_24_;
	char unknown_28_[0x2c - 0x28];
	unsigned char unknown_2c_;
	char unknown_2d_[0x3c - 0x2d];
	unsigned char unknown_3c_;
};

// USA: func_ov015_02190020
extern "C" ARM void func_ov015_02190020(struct Struct_ov015_02190020* arg0, unsigned char arg1) {
	char* var0;
	if (arg0->unknown_1c_ != 0 && arg0->unknown_1c_ != 1) {
		return;
	}
	if (arg0->unknown_3c_ == arg1) {
		return;
	}
	var0 = (char*)arg0->unknown_24_ + 0x200;
	*(short*)(var0 + 0xb2) = -1;
	arg0->unknown_3c_ = arg1;
	arg0->unknown_2c_ = 1;
}

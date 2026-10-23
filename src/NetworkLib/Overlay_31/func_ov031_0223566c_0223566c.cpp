#include <globaldefs.h>

struct Struct_ov031_0223566c {
	unsigned char unknown_0_[0x10];
	unsigned short unknown_10_;
	unsigned short unknown_12_;
	unsigned char unknown_14_[0x19 - 0x14];
	unsigned char unknown_19_;
	unsigned char unknown_1a_;
	unsigned char unknown_1b_;
};
extern Struct_ov031_0223566c* data_ov031_02290cf4;
extern unsigned char data_ov031_022491f4[];

struct Struct_ov031_0223566c_2 { unsigned short unknown_0_; unsigned short unknown_2_; unsigned short unknown_4_; unsigned short unknown_6_; };

// USA: func_ov031_0223566c
extern "C" ARM void func_ov031_0223566c(int arg0, Struct_ov031_0223566c_2* arg1) {
	unsigned short var0 = data_ov031_02290cf4->unknown_10_;
	arg1->unknown_0_ = var0;
	arg1->unknown_4_ = var0 + 0xc;
	switch (arg0) {
	case 0:
		break;
	case 1:
		arg1->unknown_2_ = data_ov031_02290cf4->unknown_12_ + data_ov031_02290cf4->unknown_1a_;
		arg1->unknown_6_ = arg1->unknown_2_ + data_ov031_022491f4[data_ov031_02290cf4->unknown_1b_];
		break;
	case 2:
		arg1->unknown_2_ = data_ov031_02290cf4->unknown_12_ - 0xd;
		arg1->unknown_6_ = data_ov031_02290cf4->unknown_12_;
		break;
	case 3:
		arg1->unknown_2_ = data_ov031_02290cf4->unknown_12_ + data_ov031_02290cf4->unknown_19_;
		arg1->unknown_6_ = arg1->unknown_2_ + 0xd;
		break;
	case 4:
		arg1->unknown_2_ = data_ov031_02290cf4->unknown_12_;
		arg1->unknown_6_ = arg1->unknown_2_ + data_ov031_02290cf4->unknown_19_;
		break;
	}
}

#include <globaldefs.h>

extern "C" ARM void func_ov031_0223521c(void);
extern "C" void func_ov031_022238cc(void);
extern "C" int FastIntModulus(int, int);
extern "C" void func_ov031_0222c3b4(void);
extern "C" void func_ov031_0222c660(void);
extern "C" int FastIntDivide(int arg0, unsigned int arg1);
extern "C" void func_ov031_022351f8(int arg0);
extern "C" ARM void func_ov031_02235204(void);
extern "C" void func_ov031_0222c8cc(void);
extern "C" void func_ov031_0223e2c0(int arg0, void* arg1);

struct Struct_ov031_0222c71c {
	unsigned char unknown_0_[0x38];
	int unknown_38_;
	unsigned char unknown_3c_[0x40 - 0x38 - 4];
	unsigned short unknown_40_;
	unsigned char unknown_42_[0x53 - 0x42];
	unsigned char unknown_53_;
};
struct Struct_ov031_02290c8c_14 {
	unsigned char unknown_0_[2];
	unsigned short unknown_2_;
	Struct_ov031_0222c71c* unknown_4_;
};
extern Struct_ov031_02290c8c_14 data_ov031_02290c8c;

// USA: func_ov031_0222c71c
extern "C" ARM void func_ov031_0222c71c(void* arg0) {
	func_ov031_0223521c();
	func_ov031_022238cc();

	if (data_ov031_02290c8c.unknown_2_ > 4) {
		data_ov031_02290c8c.unknown_2_ = data_ov031_02290c8c.unknown_2_ - 4;
	} else {
		data_ov031_02290c8c.unknown_2_ = 0;
	}

	int var0 = FastIntModulus(data_ov031_02290c8c.unknown_2_, 0x1c);
	if (var0 == 0x18) {
		func_ov031_0222c3b4();
		return;
	}

	if (var0 > 0x18) {
		data_ov031_02290c8c.unknown_2_ = data_ov031_02290c8c.unknown_2_ + (0x1c - var0);
		var0 = 0;
	}

	func_ov031_0222c660();
	if (var0 != 0) return;

	int var1 = data_ov031_02290c8c.unknown_2_ * data_ov031_02290c8c.unknown_4_->unknown_53_;
	int var2 = FastIntDivide(var1, data_ov031_02290c8c.unknown_4_->unknown_40_);
	func_ov031_022351f8(var2);
	func_ov031_02235204();
	func_ov031_0222c8cc();
	data_ov031_02290c8c.unknown_4_->unknown_38_ = 0;
	func_ov031_0223e2c0(0, arg0);
}

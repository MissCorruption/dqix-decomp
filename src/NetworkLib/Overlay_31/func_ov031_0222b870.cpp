#include <globaldefs.h>

extern "C" int FastIntDivide(int arg0, unsigned int arg1);
extern "C" void func_ov031_022350bc(int arg0, int arg1, int arg2, int arg3, int arg4);

struct Struct_ov031_0222b870 {
	unsigned char unknown_0_[0x40];
	unsigned short unknown_40_;
	unsigned char unknown_42_[0x51 - 0x42];
	unsigned char unknown_51_;
	unsigned char unknown_52_[1];
	unsigned char unknown_53_;
};
struct Struct_ov031_02290c8c_3 {
	unsigned char unknown_0_[2];
	unsigned short unknown_2_;
	Struct_ov031_0222b870* unknown_4_;
};
extern Struct_ov031_02290c8c_3 data_ov031_02290c8c;

// USA: func_ov031_0222b870
extern "C" ARM void func_ov031_0222b870(void) {
	int var0 = 0;
	Struct_ov031_0222b870* var1 = data_ov031_02290c8c.unknown_4_;
	var1->unknown_40_ = (var1->unknown_51_ - 4) * 0x1c;

	var1 = data_ov031_02290c8c.unknown_4_;
	unsigned char var2 = var1->unknown_51_;
	int var3;
	if (var2 <= 4) {
		var1->unknown_53_ = 0;
		var3 = 0;
	} else if (var2 <= 8) {
		var1->unknown_53_ = 0x1f;
		var3 = 1;
	} else {
		var1->unknown_53_ = 0x37;
		var3 = 2;
	}

	if (var3 != 0) {
		var1 = data_ov031_02290c8c.unknown_4_;
		unsigned short var4 = data_ov031_02290c8c.unknown_2_;
		unsigned char var5 = var1->unknown_53_;
		unsigned short var6 = var1->unknown_40_;
		var0 = FastIntDivide(var4 * var5, var6);
	}
	func_ov031_022350bc(var3, 0x55, 0xec, 0x3f, var0);
}

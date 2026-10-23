#include <globaldefs.h>

extern "C" void func_ov031_0220321c(void);
extern "C" void func_ov031_02203190(void);
extern "C" void func_ov031_02203250(void);
extern "C" void func_ov031_022031bc(int arg0, unsigned short arg1, unsigned int arg2);
extern "C" void* func_ov031_02204260(int arg0);
extern "C" int func_ov031_02204368(int arg0, int arg1);

struct Struct_ov031_0224c980_16 {
	unsigned char unknown_0_[0x20];
	unsigned int unknown_20_;
	unsigned char unknown_24_[0x38 - 0x24];
	unsigned int unknown_38_;
	unsigned char unknown_3c_[0x4c - 0x3c];
	unsigned int unknown_4c_;
};
extern Struct_ov031_0224c980_16 data_ov031_0224c980;

// USA: func_ov031_02204710
extern "C" ARM int func_ov031_02204710(int* arg0, int arg1) {
	func_ov031_0220321c();
	func_ov031_02203190();

	if (arg1 == 1) {
		func_ov031_022031bc(0x44, 0x43, data_ov031_0224c980.unknown_20_);
	} else {
		func_ov031_022031bc(0x44, 0x43, 0x43 - 0x44);
	}

	int var0 = 0;
	int var1 = 0;
	do {
		var0 = func_ov031_02204368((int)func_ov031_02204260(arg1), var1);
		if (var0 != 0) break;
		var1++;
	} while (var1 < 4);

	func_ov031_02203250();

	if (var0 == 2) {
		*arg0 = data_ov031_0224c980.unknown_4c_ >> 1;
		data_ov031_0224c980.unknown_38_ = (data_ov031_0224c980.unknown_4c_ + (data_ov031_0224c980.unknown_4c_ << 1)) >> 3;
		return 1;
	}

	unsigned int var2 = data_ov031_0224c980.unknown_38_ >> 1;
	data_ov031_0224c980.unknown_38_ = var2;
	*arg0 = var2;

	switch (arg1) {
	case 1:
		if (var2 < 0x3c) {
			*arg0 = 1;
			data_ov031_0224c980.unknown_38_ = data_ov031_0224c980.unknown_4c_ >> 3;
		}
		break;
	case 2:
		if (var2 < 0x3c) {
			*arg0 = 1;
		}
		break;
	}

	return 0;
}

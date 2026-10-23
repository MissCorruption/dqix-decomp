#include <globaldefs.h>

extern "C" int func_ov031_02223fa0(void);
extern "C" void func_ov031_02223fb4(int);
extern "C" void func_ov031_02223fc8(int);
extern "C" ARM void func_ov031_022274c0(int);
extern "C" int func_ov031_02236878(int);
extern "C" int func_ov031_0222d524(void);
extern "C" void func_ov031_0222d2bc(void);
extern "C" void func_ov031_0222d3b0(void);
extern "C" void func_ov031_0222d094(void);

struct Struct_ov031_0222ced0 {
	unsigned char unknown_0_[4];
	int* unknown_4_;
	unsigned char unknown_8_[0x29 - 8];
	unsigned char unknown_29_;
	unsigned char unknown_2a_;
};
extern Struct_ov031_0222ced0* data_ov031_02290c94;

// USA: func_ov031_0222ced0
extern "C" ARM void func_ov031_0222ced0(void) {
	int var0 = func_ov031_02223fa0();
	switch (var0) {
	case 0:
		goto epilogueA;
	case 0x80:
		if (data_ov031_02290c94->unknown_29_ != 0) {
			func_ov031_02236878(3);
			data_ov031_02290c94->unknown_29_ -= 1;
			{
				unsigned char* var1 = (unsigned char*)data_ov031_02290c94 + data_ov031_02290c94->unknown_29_;
				var1[8] = 0;
			}
			if (data_ov031_02290c94->unknown_29_ == 0) {
				func_ov031_02223fb4(0);
			}
			func_ov031_02223fc8(1);
		}
		goto epilogueA;
	case 0x82:
		func_ov031_02236878(7);
		data_ov031_02290c94->unknown_2a_ = 0;
		func_ov031_022274c0((int)func_ov031_0222d094);
		return;
	case 0x83:
		if (func_ov031_0222d524()) {
			func_ov031_02236878(6);
			data_ov031_02290c94->unknown_2a_ = 1;
		} else {
			data_ov031_02290c94->unknown_2a_ = 2;
			func_ov031_02236878(9);
		}
		*(data_ov031_02290c94->unknown_4_) = (*(data_ov031_02290c94->unknown_4_) & 0xc1fffcff) | 0x200;
		func_ov031_022274c0((int)func_ov031_0222d094);
		return;
	case 0xe01d:
	default:
		if (data_ov031_02290c94->unknown_29_ != 0x20) {
			func_ov031_02236878(1);
			{
				unsigned char* var2 = (unsigned char*)data_ov031_02290c94 + data_ov031_02290c94->unknown_29_;
				var2[8] = (unsigned char)var0;
			}
			data_ov031_02290c94->unknown_29_ += 1;
			func_ov031_02223fb4(1);
			if (data_ov031_02290c94->unknown_29_ == 0x20) {
				func_ov031_02223fc8(0);
			}
		}
		break;
	}
epilogueA:
	func_ov031_0222d2bc();
	func_ov031_0222d3b0();
}

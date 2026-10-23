#include <globaldefs.h>

extern "C" int func_ov031_02222e0c(void);
extern "C" void func_ov031_02236878(int arg0);
extern "C" void func_ov031_0222cb5c(void);
extern "C" int FastIntDivide(int arg0, unsigned int arg1);
extern "C" void func_ov031_0223521c(void);
extern "C" void func_ov031_02222e98(void);
extern "C" void func_ov031_02237b2c(int arg0, int arg1, int arg2, int arg3, int arg4);
extern "C" void func_ov031_022274c0(int arg0);
extern "C" void func_ov031_0222cb8c(void);
extern "C" void func_ov031_0222c128(void);

struct Struct_ov031_0222c01c {
	char* unknown_0_;
	char unknown_4_[0x38 - 4];
	int unknown_38_;
	char unknown_3c_[0x52 - 0x3c];
	unsigned char unknown_52_;
	unsigned char unknown_53_;
	unsigned char unknown_54_;
	char unknown_55_[0x57 - 0x55];
	unsigned char unknown_57_;
};

struct Struct_ov031_02290c8c_7 {
	unsigned char unknown_0_;
	unsigned char unknown_1_;
	unsigned short unknown_2_;
	Struct_ov031_0222c01c* unknown_4_;
};

extern Struct_ov031_02290c8c_7 data_ov031_02290c8c;

// USA: func_ov031_0222c01c
extern "C" ARM void func_ov031_0222c01c(void) {
	if (data_ov031_02290c8c.unknown_4_->unknown_38_ != 0 || data_ov031_02290c8c.unknown_4_->unknown_57_ != 0) return;

	int var0 = func_ov031_02222e0c();
	switch (var0) {
	case 0:
		func_ov031_02236878(7);
		break;
	case 1:
		if (data_ov031_02290c8c.unknown_0_ == 4) {
			data_ov031_02290c8c.unknown_4_->unknown_54_ = 1;
			func_ov031_02236878(6);
			func_ov031_0222cb5c();
			break;
		}
		{
			int var1 = FastIntDivide(data_ov031_02290c8c.unknown_2_, 0x1c);
			int var2 = data_ov031_02290c8c.unknown_0_ + var1;
			Struct_ov031_0222c01c* var3 = data_ov031_02290c8c.unknown_4_;
			unsigned char* var4 = (unsigned char*)(var3->unknown_0_ + var2 * 0x2a);
			if (var4[0x28] == 2) {
				func_ov031_02236878(9);
				func_ov031_0223521c();
				func_ov031_02222e98();
				func_ov031_02237b2c(0xe, 1, 1, -1, 0);
				func_ov031_022274c0((int)func_ov031_0222cb8c);
				return;
			}
			var3->unknown_54_ = 1;
			data_ov031_02290c8c.unknown_4_->unknown_52_ = (unsigned char)var2;
			func_ov031_02236878(6);
		}
		break;
	default:
		return;
	}
	func_ov031_022274c0((int)func_ov031_0222c128);
}

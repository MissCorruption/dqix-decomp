#include <globaldefs.h>

struct Struct_ov025_021ded50_2 {
	unsigned short unknown_0_;
	unsigned short unknown_2_;
	unsigned short unknown_4_;
};

extern "C" void func_ov025_021ded84(struct Struct_ov025_021ded50_2* arg0, struct Struct_ov025_021ded50_2* arg1);

struct Struct_ov025_021ded50 {
#if defined(jpn)
	char unknown_0_[0x78dc];
#else
	char unknown1_0_[0x76ec];
#endif
	struct Struct_ov025_021ded50_2 unknown_76ec_[5];
	unsigned short unknown_770a_;
};

// USA: func_ov025_021deda0
extern "C" ARM int func_ov025_021deda0(struct Struct_ov025_021ded50* arg0, struct Struct_ov025_021ded50_2* arg1) {
	if (arg0->unknown_770a_ != 0) {
		func_ov025_021ded84(arg1, arg0->unknown_76ec_);
		arg0->unknown_770a_ = arg0->unknown_770a_ - 1;
		for (int var0 = 0; var0 < arg0->unknown_770a_; var0++) {
			func_ov025_021ded84(&arg0->unknown_76ec_[var0], &arg0->unknown_76ec_[var0 + 1]);
		}
		return 1;
	}
	return 0;
}

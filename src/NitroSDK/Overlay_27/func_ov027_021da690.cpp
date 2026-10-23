#include <globaldefs.h>

#if defined(jpn)
#define func_020c9be0 func_020cb6ac
#endif

extern "C" void func_020c9be0(void);

struct Struct_ov027_021da690 {
	unsigned char unknown_0_[0x28];
	unsigned int unknown_28_;
	unsigned int unknown_2c_;
	unsigned char unknown_30_[0x38 - 0x30];
	unsigned int unknown_38_;
	unsigned int unknown_3c_;
};

struct Struct_ov027_021da690_2 {
	unsigned int unknown_0_;
	unsigned int unknown_4_;
	unsigned int unknown_8_;
	unsigned int unknown_c_;
};

// USA: func_ov027_021da690
#pragma optimize_for_size off
extern "C" ARM void func_ov027_021da690(Struct_ov027_021da690 *arg0, int *arg1, Struct_ov027_021da690_2 *arg2, unsigned int *arg3) {
	int var0 = *arg1;
	switch (var0) {
	case 0: {
		unsigned int var1 = arg0->unknown_28_;
		if (var1 >= 0x2000000 && var1 < 0x22c0000 && var1 + arg0->unknown_2c_ <= 0x22c0000) {
			arg2->unknown_8_ = arg0->unknown_2c_;
			unsigned int var2 = arg0->unknown_28_;
			arg2->unknown_4_ = var2;
			arg2->unknown_0_ = var2;
			arg2->unknown_c_ = arg2->unknown_c_ & ~1;
			return;
		}
		func_020c9be0();
		return;
	}
	case 1: {
		int var3 = 0;
		int var4 = 0;
		unsigned int var5 = arg0->unknown_3c_;
		unsigned int var6 = arg0->unknown_38_ + var5;
		unsigned int var7 = arg0->unknown_38_;
		if (var7 >= 0x2000000 && var7 < 0x23fe800) {
			if (var6 <= 0x2300000) {
			} else if (var6 < 0x23fe800 && var5 <= 0x40000) {
				var4 = 1;
			} else {
				var3 = 1;
			}
		} else {
			if (var7 < 0x37f8000) goto rangeFail2;
			if (var7 >= 0x37f8000 + 0x17000) goto rangeFail2;
			if (var6 <= 0x37f8000 + 0x17000) {
				var4 = 1;
			} else {
				var3 = 1;
			}
			goto afterRange2;
		rangeFail2:
			var3 = 1;
		afterRange2:;
		}
		if (var3 == 1) {
			func_020c9be0();
		}
		arg2->unknown_8_ = arg0->unknown_3c_;
		arg2->unknown_4_ = arg0->unknown_38_;
		if (!var4) {
			arg2->unknown_0_ = arg2->unknown_4_;
		} else {
			arg2->unknown_0_ = *arg3;
			*arg3 = *arg3 + arg2->unknown_8_;
		}
		arg2->unknown_c_ = (arg2->unknown_c_ & ~1) | 1;
		return;
	}
	case 2: {
		unsigned int var8 = 0x27ffe00;
		arg2->unknown_8_ = 0x160;
		arg2->unknown_4_ = var8;
		arg2->unknown_0_ = var8;
		arg2->unknown_c_ = arg2->unknown_c_ & ~1;
		return;
	}
	default:
		return;
	}
}

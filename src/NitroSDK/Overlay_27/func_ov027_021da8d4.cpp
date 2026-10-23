#include <globaldefs.h>

extern void *data_ov027_021e33ec;

struct Struct_ov027_021da8d4_3 {
	int unknown_0_[3];
	unsigned short unknown_c_[3];
	unsigned short unknown_12_;
};

struct Struct_ov027_021da8d4 {
	int unknown_0_;
	int unknown_4_;
	int unknown_8_;
	int unknown_c_;
};

struct Struct_ov027_021da8d4_2 {
	int unknown_0_;
	int unknown_4_;
	int unknown_8_;
	unsigned char unknown_c_;
};

// USA: func_ov027_021da8d4
extern "C" ARM int func_ov027_021da8d4(Struct_ov027_021da8d4_2 *arg0, Struct_ov027_021da8d4_3 *arg1, unsigned int arg2, void *arg3) {
	if (arg2 >= arg1->unknown_12_) {
		return 0;
	}
	signed char var0 = 2;
	for (;;) {
		if (arg2 >= arg1->unknown_c_[var0]) break;
		var0 = var0 - 1;
		if (var0 < 0) break;
	}
	if (var0 < 0) {
		return 0;
	}
	int var1 = *(int *)((char *)data_ov027_021e33ec + 0x1000 + 0x318);
	int var2 = arg2 - arg1->unknown_c_[var0];
	int var3 = var2 * var1;
	Struct_ov027_021da8d4 *var4 = (Struct_ov027_021da8d4 *)((char *)arg3 + 0xc);
	Struct_ov027_021da8d4 *var5 = var4 + var0;
	int var6 = var5->unknown_8_ - var3;
	arg0->unknown_4_ = var6;
	int var7 = *(int *)((char *)data_ov027_021e33ec + 0x1000 + 0x318);
	if ((unsigned int)var6 > (unsigned int)var7) {
		arg0->unknown_4_ = var7;
	}
	arg0->unknown_8_ = var3 + arg1->unknown_0_[var0];
	arg0->unknown_0_ = var3 + var5->unknown_0_;
	arg0->unknown_c_ = (unsigned char)var0;
	return 1;
}

#include <globaldefs.h>

extern "C" unsigned int _u32_div_f(unsigned int arg0, unsigned int arg1);
extern "C" int func_ov027_021daa34(int arg0, int arg1, int arg2);
extern void *data_ov027_021e33ec;

struct Struct_ov027_021da808 {
	int unknown_0_[3];
	unsigned short unknown_c_[3];
	unsigned short unknown_12_;
};

struct Struct_ov027_021da808_2 {
	int unknown_0_;
	int unknown_4_;
	int unknown_8_;
	int unknown_c_;
};

// USA: func_ov027_021da808
extern "C" ARM int func_ov027_021da808(Struct_ov027_021da808 *arg0, void *arg1) {
	Struct_ov027_021da808_2 *var0;
	unsigned short *var1 = (unsigned short *)((char *)arg0 + 0xc);
	int var2 = 0;
	if (arg1 == NULL) {
		return 0;
	}
	unsigned char var3 = 0;
	do {
		arg0->unknown_0_[var3] = var2;
		var2 += *(int *)((char *)arg1 + var3 * 0x10 + 0x14);
		var3++;
	} while (var3 < 3);
	var1[0] = 0;
	var0 = (Struct_ov027_021da808_2 *)((char *)arg1 + 0xc);
	Struct_ov027_021da808_2 *var4;
	int var5;
	unsigned char var6 = 0;
	do {
		var4 = &var0[var6];
		int var7 = *(int *)((char *)data_ov027_021e33ec + 0x1000 + 0x318);
		var5 = var4->unknown_8_;
		unsigned int var8 = _u32_div_f(var5 + var7 - 1, var7);
		unsigned short var9 = (unsigned short)(var1[var6] + (unsigned short)var8);
		int var10 = var4->unknown_4_;
		if (!func_ov027_021daa34(var6, var10, var5)) {
			return 0;
		}
		if (var6 < 2) {
			unsigned short *var11 = var1 + var6;
			var11[1] = var9;
		} else {
			arg0->unknown_12_ = var9;
		}
		var6++;
	} while (var6 < 3);
	return 1;
}

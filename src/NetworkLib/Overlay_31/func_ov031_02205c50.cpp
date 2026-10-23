#include <globaldefs.h>

struct Struct_ov031_02205c50_2 {
	unsigned char unknown_0_[0x8];
	unsigned char unknown_8_;
	unsigned char unknown_9_[1];
	unsigned short unknown_a_;
	unsigned char unknown_c_[0xc];
	unsigned short unknown_18_;
	unsigned char unknown_1a_[2];
	int unknown_1c_;
	unsigned char unknown_20_[0x20];
	int unknown_40_;
	int unknown_44_;
};

struct Struct_ov031_02205c50 {
	unsigned char unknown_0_[0xc4];
	struct Struct_ov031_02205c50_2* unknown_c4_;
	unsigned char unknown_c8_[0x30];
	int unknown_f8_;
};

struct Struct_ov031_02205c50_3 { unsigned char unknown_0_[0x64]; struct Struct_ov031_02205c50* unknown_64_; };

// USA: func_ov031_02205c50
extern "C" ARM int func_ov031_02205c50(struct Struct_ov031_02205c50_3* arg0, int* arg1, unsigned short* arg2, unsigned short* arg3, int* arg4) {
	struct Struct_ov031_02205c50* var0 = arg0->unknown_64_;
	struct Struct_ov031_02205c50_2* var1 = var0->unknown_c4_;
	int var2 = var0->unknown_f8_;
	int var3 = var1->unknown_44_ - var2;
	if (var3 < 0) {
		goto negative;
	}
	*arg2 = var1->unknown_a_;
	*arg3 = var1->unknown_18_;
	*arg4 = var1->unknown_1c_;
	*arg1 = var3;
	if (var3 != 0) {
		goto ret_sum;
	}
	if (var1->unknown_8_ == 4) {
		goto ret_sum;
	}
	return 0;
negative:
	*arg1 = -1;
	return 0;
ret_sum:
	return var1->unknown_40_ + var2;
}

#include <globaldefs.h>

struct Struct_ov031_02214854_3 {
	unsigned char unknown_0_;
	unsigned char unknown_1_;
	unsigned char unknown_2_;
	unsigned char unknown_3_0_ : 7;
	unsigned char unknown_3_7_ : 1;
};

struct Struct_ov031_02214854 {
	unsigned char unknown_0_[0x36];
	unsigned short unknown_36_;
	unsigned char unknown_38_[0x88];
};

struct Struct_ov031_02214854_2 {
	unsigned char unknown_0_[0x444];
	Struct_ov031_02214854_3 unknown_444_[11];
	Struct_ov031_02214854 unknown_470_[11];
	unsigned char unknown_cb0_[0x62];
	unsigned char unknown_d12_;
};

// USA: func_ov031_02214854
extern "C" ARM int func_ov031_02214854(void* arg0) {
	Struct_ov031_02214854_2* var0 = (Struct_ov031_02214854_2*)arg0;
	int var1;
	unsigned char var2 = 0;
	for (var1 = 0; var1 < var0->unknown_d12_; var1++) {
		if (var0->unknown_444_[var1].unknown_0_ == 0 && var0->unknown_470_[var1].unknown_36_ - 1 != var0->unknown_444_[var1].unknown_3_0_) {
			var0->unknown_444_[var1].unknown_3_7_ = 0;
			var2++;
		} else {
			var0->unknown_444_[var1].unknown_3_7_ = 1;
		}
	}
	return var2;
}

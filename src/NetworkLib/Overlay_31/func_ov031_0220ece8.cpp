#include <globaldefs.h>

extern "C" int func_ov031_0220d60c(void);

struct Struct_ov031_0220ece8_3 {
	unsigned char unknown_0_;
	unsigned char unknown_1_[3];
	int unknown_4_;
	Struct_ov031_0220ece8_3* unknown_8_;
	Struct_ov031_0220ece8_3* unknown_c_;
	unsigned char unknown_10_[0xd0 - 0x10];
};

struct Struct_ov031_0220ece8 {
	int unknown_0_;
	Struct_ov031_0220ece8_3* unknown_4_;
	Struct_ov031_0220ece8_3* unknown_8_;
};

struct Struct_ov031_0220ece8_2 {
	unsigned char unknown_0_[0x270];
	Struct_ov031_0220ece8* unknown_270_;
	unsigned int unknown_274_;
};

// USA: func_ov031_0220ece8
extern "C" ARM Struct_ov031_0220ece8_3* func_ov031_0220ece8(void) {
	int var0 = func_ov031_0220d60c();
	Struct_ov031_0220ece8_2* var1 = (Struct_ov031_0220ece8_2*)(var0 + 0x2000);
	Struct_ov031_0220ece8* var2 = var1->unknown_270_;
	Struct_ov031_0220ece8_3* var3 = 0;
	if (var2 == 0) return var3;
	if (var1->unknown_274_ <= 0xc) return var3;

	unsigned int var4 = (var1->unknown_274_ - 0xc) / 0xd0;
	if (var4 == 0) return var3;
	if (var4 <= (unsigned int)var2->unknown_0_) return var3;

	int var5 = 0;
	if (var5 < var4) {
		Struct_ov031_0220ece8_3* var6 = (Struct_ov031_0220ece8_3*)((char*)var2 + 0xc);
		do {
			var3 = (Struct_ov031_0220ece8_3*)((char*)var6 + var5 * sizeof(Struct_ov031_0220ece8_3));
			if (var3->unknown_0_ == 0) break;
			var5++;
		} while (var5 < var4);
	}
	if (var5 >= var4) return var3;

	var3->unknown_0_ = 1;
	var3->unknown_4_ = var2->unknown_0_;
	var3->unknown_c_ = 0;
	var3->unknown_8_ = var2->unknown_8_;
	var2->unknown_8_ = var3;
	if (var3->unknown_8_ != 0) {
		var3->unknown_8_->unknown_c_ = var3;
	} else {
		var2->unknown_4_ = var3;
	}
	var2->unknown_0_ = var2->unknown_0_ + 1;
	return var3;
}

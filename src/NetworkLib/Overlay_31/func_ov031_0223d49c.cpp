#include <globaldefs.h>

struct Struct_ov031_0223d49c {
	unsigned char unknown_0_[0x28];
	unsigned short unknown_28_;
	unsigned short unknown_2a_;
	unsigned char unknown_2c_[0xc];
	unsigned char unknown_38_0_:1, unknown_38_1_:1, unknown_38_2_:1, unknown_38_3_:1, unknown_38_4_:1, unknown_38_5_:1, unknown_38_6_:1, unknown_38_7_:1;
};
struct Struct_ov031_02290d40_7 { unsigned char unknown_0_[4]; struct Struct_ov031_0223d49c* unknown_4_; };
extern struct Struct_ov031_02290d40_7 data_ov031_02290d40;

struct Struct_ov031_02248d8e { unsigned short unknown_0_, unknown_2_, unknown_4_, unknown_6_; };

// USA: func_ov031_0223d49c
extern "C" ARM int func_ov031_0223d49c(struct Struct_ov031_02248d8e* arg0) {
	int var0 = *(unsigned short*)0x27fffa8 & 0x8000;
	if (var0 >> 15) return 0;
	struct Struct_ov031_0223d49c* var1 = data_ov031_02290d40.unknown_4_;
	if (!var1->unknown_38_1_) return 0;
	unsigned short var2 = var1->unknown_28_;
	if (arg0->unknown_0_ > var2) return 0;
	if (arg0->unknown_4_ < var2) return 0;
	unsigned short var3 = var1->unknown_2a_;
	if (arg0->unknown_2_ > var3) return 0;
	return (arg0->unknown_6_ >= var3) ? 1 : 0;
}

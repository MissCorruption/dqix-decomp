#include <globaldefs.h>

struct Struct_ov031_0222c660 {
	unsigned char unknown_0_[0x10];
	int* unknown_10_[5];
	int* unknown_24_[5];
	unsigned char unknown_38_[0x51 - 0x38];
	unsigned char unknown_51_;
	unsigned char unknown_52_[0x56 - 0x52];
	unsigned char unknown_56_;
};
struct Struct_ov031_02290c8c_13 { unsigned char unknown_0_[2]; unsigned short unknown_2_; Struct_ov031_0222c660* unknown_4_; };
extern Struct_ov031_02290c8c_13 data_ov031_02290c8c;

extern "C" int FastIntModulus(int arg0, int arg1);

// USA: func_ov031_0222c660
extern "C" ARM void func_ov031_0222c660(void) {
	int var0 = 0x36 - FastIntModulus(data_ov031_02290c8c.unknown_2_, 0x1c);
	int var1 = data_ov031_02290c8c.unknown_4_->unknown_51_;
	if (var1 > 5) var1 = 5;
	for (int var2 = 0; var2 < var1; var2++) {
		int* var3 = data_ov031_02290c8c.unknown_4_->unknown_10_[var2];
		*var3 = (*var3 & 0xfe00ff00) | ((var0 - 2) & 0xff) | 0xb30000;
		int* var4 = data_ov031_02290c8c.unknown_4_->unknown_24_[var2];
		*var4 = (*var4 & 0xfe00ff00) | ((var0 + 1) & 0xff) | 0xd20000;
		var0 += 0x1c;
	}
	data_ov031_02290c8c.unknown_4_->unknown_56_ = 1;
}

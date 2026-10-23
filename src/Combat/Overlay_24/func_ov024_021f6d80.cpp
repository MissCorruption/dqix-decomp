#include <globaldefs.h>

struct Struct_ov024_021f6d80_2 {
	char unknown_0_[0xa];
	unsigned short unknown_a_0_ : 7;
	unsigned short unknown_a_7_ : 4;
	unsigned short unknown_b_3_ : 5;
};

struct Struct_ov024_021f6d80 {
	char unknown_0_[0x8];
	struct Struct_ov024_021f6d80_2* unknown_8_;
	char unknown_c_[0x8];
	float unknown_14_;
	float unknown_18_;
	float unknown_1c_;
	float unknown_20_;
};

// USA: func_ov024_021f6d80
extern "C" ARM int func_ov024_021f6d80(struct Struct_ov024_021f6d80* arg0) {
	struct Struct_ov024_021f6d80_2* var0 = arg0->unknown_8_;
	if (var0 && var0->unknown_a_7_ == 0xb) {
		arg0->unknown_1c_ = arg0->unknown_14_ * 1.25f;
		arg0->unknown_20_ = arg0->unknown_18_ * 1.25f;
	}
	return 1;
}

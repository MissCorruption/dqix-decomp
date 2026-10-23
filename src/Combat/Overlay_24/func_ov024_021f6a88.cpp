#include <globaldefs.h>
#include "Combat/Main/CombatCalculations.h"

struct Struct_ov024_021f6a88_2 {
	char unknown_0_[0xa];
	unsigned short unknown_a_0_:7;
	unsigned short unknown_a_7_:4;
	unsigned short unknown_b_3_:5;
};

struct Struct_ov024_021f6a88 {
	char unknown_0_[8];
	struct Struct_ov024_021f6a88_2* unknown_8_;
	char unknown_c_[0x14-0xc];
	float unknown_14_;
	float unknown_18_;
	float unknown_1c_;
	float unknown_20_;
};

// USA: func_ov024_021f6a88
extern "C" ARM int func_ov024_021f6a88(struct Struct_ov024_021f6a88* arg0) {
	struct Struct_ov024_021f6a88_2* var0 = arg0->unknown_8_;
	if (var0 != NULL) {
		if (var0->unknown_a_7_ == 2) {
			arg0->unknown_1c_ = (float)RoundUp(arg0->unknown_14_ * 1.5f);
			arg0->unknown_20_ = (float)RoundUp(arg0->unknown_18_ * 1.5f);
		}
	}
	return 1;
}

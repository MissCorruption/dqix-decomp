#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Util/Random.h"

extern "C" int func_020850d0(unsigned char* arg0);
extern "C" int func_ov000_021564cc(struct Random* arg0, int arg1);

struct Struct_ov024_021e8dc0 {
	char unknown_0_[0x10];
	struct Random* unknown_10_;
	char unknown_14_[0x78 - 0x14];
	unsigned char unknown_78_;
	unsigned char unknown_79_;
	unsigned char unknown_7a_;
};

struct Struct_ov024_021e8dc0_2 {
	char unknown_0_[4];
	unsigned int unknown_4_0_ : 12;
	unsigned int unknown_5_4_ : 20;
	char unknown_8_[0x10 - 0x8];
	unsigned int unknown_10_;
	char unknown_14_[0x1c - 0x14];
	unsigned int unknown_1c_0_ : 14;
	unsigned int unknown_1d_6_ : 5;
	unsigned int unknown_1e_3_ : 13;
};

struct Struct_ov024_021e8dc0_3 {
#if defined(jpn)
	char unknown_0_[0x144];
#else
	char unknown1_0_[0x150];
#endif
	unsigned char* unknown_150_;
};

struct Struct_ov024_021e8dc0_4 {
	unsigned int unknown_0_0_ : 1;
	unsigned int unknown_0_1_ : 1;
	unsigned int unknown_0_2_ : 30;
};

struct Struct_ov024_021fe930 {
	short unknown_0_[32];
};

extern struct Struct_ov024_021fe930 data_ov024_021fe930;

static inline int inline_ov000_02169850(int arg0) {
	return arg0 >= 0 && arg0 <= 3;
}

// USA: func_ov024_021e8dc0
extern "C" ARM int func_ov024_021e8dc0(struct Struct_ov024_021e8dc0* arg0, int arg1, struct Struct_ov024_021e8dc0_2* arg2, short* arg3, int arg4) {
	struct Random* var0 = arg0->unknown_10_;
	int var1 = 1;
	switch (arg2->unknown_1d_6_) {
		case 1: var1 = 2; break;
		case 2: var1 = (int)NextRandomFloatBetween(var0, 3.0f, 4.0f); break;
		case 6: var1 = 4; break;
		case 9: var1 = 5; break;
	}
	if (var1 > 1) arg0->unknown_7a_ = 1;
	if (inline_ov000_02169850(arg1)) {
		struct Struct_ov024_021e8dc0_3* var2 = (struct Struct_ov024_021e8dc0_3*)func_0200ff1c(GameState::GetInstance(), arg1);
		if (var2 && (arg2->unknown_10_ & 0x100000) && func_020850d0(var2->unknown_150_)) {
			arg0->unknown_7a_ = 1;
			var1 *= 2;
		}
		if (arg2->unknown_4_0_ == 1) {
			struct Struct_ov024_021e8dc0_4* var3 = (struct Struct_ov024_021e8dc0_4*)(var2->unknown_150_ + 0x2f4);
			if (!var3) return var1;
			if (!var3->unknown_0_1_ && !var3->unknown_0_0_ && func_ov000_021564cc(arg0->unknown_10_, arg1)) {
				arg0->unknown_78_ = 1;
				arg0->unknown_7a_ = 1;
				var1++;
			}
		}
	}
	struct Struct_ov024_021fe930 var4 = data_ov024_021fe930;
	short var5 = 0;
	for (int var6 = 0; var6 < var1; var6++) {
		for (int var7 = 0; var7 < arg4; var7++) {
			var4.unknown_0_[var5++] = arg3[var7];
		}
	}
	memcpy(arg3, &var4, var5 * 2);
	return var5;
}

#include <globaldefs.h>

struct Struct_ov003_0215f56c_4 { signed char unknown_0_0_ : 6; signed char unknown_0_6_ : 2; };
struct Struct_ov003_0215f56c { unsigned int unknown_0_0_ : 10; unsigned int unknown_1_2_ : 10; unsigned int unknown_2_4_ : 12; };
struct Struct_ov003_0215f56c_2 { unsigned int unknown_0_0_ : 10; unsigned int unknown_1_2_ : 22; };

struct Struct_ov003_0215f56c_3 {
	struct Struct_ov003_0215f56c_4 unknown_0_;
	char unknown_1_[0x154 - 4];
	struct Struct_ov003_0215f56c unknown_154_;
	struct Struct_ov003_0215f56c_2 unknown_158_;
};

// USA: func_ov003_0215f56c
extern "C" ARM int func_ov003_0215f56c(struct Struct_ov003_0215f56c_3* arg0) {
	int var0 = 0xf;
	if (arg0 != NULL) {
		if (arg0->unknown_0_.unknown_0_0_ >= 0) {
			float var1 = (float)(unsigned int)arg0->unknown_154_.unknown_1_2_;
			float var2 = (float)(unsigned int)arg0->unknown_158_.unknown_0_0_;
			float var3 = var1 / var2;
			if (var3 <= 0.25f) var0 = 0xd;
			if (var3 <= 0.08f) var0 = 0xb;
		}
	}
	return var0;
}

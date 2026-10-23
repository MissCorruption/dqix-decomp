#include <globaldefs.h>

struct Struct_ov003_0215e824_2 {
	char unknown_0_[0x10];
	short unknown_10_;   // 0x10
	char unknown_12_[2];
};

struct Struct_ov003_0215e824 {
	struct Struct_ov003_0215e824_2* unknown_0_; // 0x0
	char unknown_4_[2];
	short unknown_6_;               // 0x6
};

// USA: func_ov003_0215e824
extern "C" ARM struct Struct_ov003_0215e824_2* func_ov003_0215e824(struct Struct_ov003_0215e824* arg0, int arg1) {
	struct Struct_ov003_0215e824_2* var0 = arg0->unknown_0_;
	int var1 = arg0->unknown_6_;
	for (int var2 = 0; var2 < var1; var2++, var0++) {
		if (var0->unknown_10_ == arg1) return var0;
	}
	return NULL;
}

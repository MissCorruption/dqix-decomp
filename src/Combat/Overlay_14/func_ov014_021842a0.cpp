#include <globaldefs.h>

struct Struct_ov014_021842a0 {
	short unknown_0_;
	char unknown_2_[0x16];
};

struct Struct_ov014_021842a0_2 {
	char unknown_0_[8];
	struct Struct_ov014_021842a0* unknown_8_;
	char unknown_c_[8];
	unsigned short unknown_14_;
};

// USA: func_ov014_021842a0
extern "C" ARM struct Struct_ov014_021842a0* func_ov014_021842a0(struct Struct_ov014_021842a0_2* arg0, short arg1) {
	struct Struct_ov014_021842a0* var0 = arg0->unknown_8_;
	if (var0 == 0) return 0;
	unsigned short var1 = arg0->unknown_14_;
	if (var1 == 0) return 0;
	for (unsigned short var2 = 0; var2 < var1; var2++) {
		short var3 = var0[var2].unknown_0_;
		if (var3 == arg1) return &var0[var2];
	}
	return 0;
}

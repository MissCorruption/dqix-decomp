#include <globaldefs.h>

struct Struct_ov014_02187520 {
	struct Struct_ov014_02187520* unknown_0_;
};

struct Struct_ov014_021872dc {
	unsigned char unknown_0_[0xb8];
	struct Struct_ov014_02187520* unknown_b8_;
	struct Struct_ov014_02187520* unknown_bc_;
};

// USA: func_ov014_02187520
extern "C" ARM short func_ov014_02187520(struct Struct_ov014_021872dc* arg0) {
	struct Struct_ov014_02187520* var0 = arg0->unknown_b8_;
	short var1 = 0;
	while (var0 != NULL) {
		if (var0 == arg0->unknown_bc_) return var1 / 16;
		var0 = var0->unknown_0_;
		var1++;
	}
	return -1;
}

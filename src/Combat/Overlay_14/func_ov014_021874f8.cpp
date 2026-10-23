#include <globaldefs.h>

struct Struct_ov014_021874f8 {
	struct Struct_ov014_021874f8* unknown_0_;
};

struct Struct_ov014_02186bc8_3 {
	char unknown_0_[0xb8];
	struct Struct_ov014_021874f8* unknown_b8_;
};

// USA: func_ov014_021874f8
extern "C" ARM short func_ov014_021874f8(struct Struct_ov014_02186bc8_3* arg0) {
	struct Struct_ov014_021874f8* var0 = arg0->unknown_b8_;
	short var1 = 0;
	while (var0) {
		var1++;
		var0 = var0->unknown_0_;
	}
	return var1;
}

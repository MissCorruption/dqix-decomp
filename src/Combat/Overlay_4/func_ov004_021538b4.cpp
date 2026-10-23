#include <globaldefs.h>

struct Struct_ov004_02153860 {
	short unknown_0_;
	char unknown_2_[4];
};

// USA: func_ov004_021538b4
extern "C" ARM void* func_ov004_021538b4(Struct_ov004_02153860* arg0, int arg1) {
	unsigned char var0;
	for (var0 = 0; var0 < 20; var0++) {
		short var1 = arg0[var0].unknown_0_;
		if (var1 == arg1) return &arg0[var0];
	}
	return NULL;
}

#include <globaldefs.h>

struct Struct_ov004_02155090 {
	short unknown_0_;
	char unknown_2_[4];
};

// USA: func_ov004_021550c8
extern "C" ARM void* func_ov004_021550c8(Struct_ov004_02155090* arg0, int arg1) {
	unsigned char var0;
	for (var0 = 0; var0 < 2; var0++) {
		short var1 = arg0[var0].unknown_0_;
		if (var1 == arg1) return &arg0[var0];
	}
	return NULL;
}

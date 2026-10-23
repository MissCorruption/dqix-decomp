#include <globaldefs.h>

struct Struct_ov004_021546c0 {
	short unknown_0_;
	short unknown_2_;
	unsigned char unknown_4_;
	unsigned char unknown_5_;
};

// USA: func_ov004_021546c0
extern "C" ARM void func_ov004_021546c0(Struct_ov004_021546c0* arg0, int arg1, int arg2, unsigned char* arg3, unsigned char* arg4) {
	unsigned char var0;
	for (var0 = 0; var0 < 20; var0++) {
		Struct_ov004_021546c0* var1 = &arg0[var0];
		short var2 = var1->unknown_0_;
		if (var2 == arg1 && var1->unknown_2_ == arg2) {
			*arg3 = var1->unknown_4_;
			*arg4 = var1->unknown_5_;
			return;
		}
	}
}

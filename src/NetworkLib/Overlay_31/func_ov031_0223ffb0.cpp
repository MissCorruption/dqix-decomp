#include <globaldefs.h>

struct Struct_ov031_0223ffb0 {
	char unknown_0_[0x44];
	char unknown_44_[0x14];
};

extern "C" int func_ov031_02242f84(const signed char* arg0, int arg1, const signed char* arg2, int arg3);
extern "C" char func_ov031_0223ff7c(unsigned char arg0);
extern char data_ov031_022494c0[];

// USA: func_ov031_0223ffb0
extern "C" ARM int func_ov031_0223ffb0(Struct_ov031_0223ffb0* arg0, const signed char* arg1, int arg2) {
	if (func_ov031_02242f84(arg1, arg2, (const signed char*)&arg0->unknown_44_[2], 0x12) < 0) {
		return 1;
	}

	for (int var0 = 0x13; var0 >= 2; var0--) {
		char var1 = arg0->unknown_44_[var0];
		for (;;) {
			var1 = func_ov031_0223ff7c(var1);
			arg0->unknown_44_[var0] = var1;
			if (var1 == data_ov031_022494c0[var0]) {
				break;
			}
			if (func_ov031_02242f84(arg1, arg2, (const signed char*)&arg0->unknown_44_[2], 0x12) < 0) {
				return 1;
			}
		}
	}

	return 0;
}

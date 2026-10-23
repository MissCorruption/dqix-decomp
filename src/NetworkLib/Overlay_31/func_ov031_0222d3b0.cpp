#include <globaldefs.h>

struct Struct_ov031_0222d3b0 {
	unsigned char unknown_0_[4];
	int* unknown_4_;
	unsigned char unknown_8_[0x29 - 8];
	unsigned char unknown_29_;
};
extern Struct_ov031_0222d3b0* data_ov031_02290c94;
extern unsigned char data_ov031_02248ecc[];
extern unsigned char data_ov031_02248ed0[];

// USA: func_ov031_0222d3b0
extern "C" ARM void func_ov031_0222d3b0(void) {
	unsigned char var0 = data_ov031_02290c94->unknown_29_;
	int* var1 = data_ov031_02290c94->unknown_4_;
	int var2 = var0 & 0xf;
	int var3 = var0 >> 4;
	if (var0 >= 0x20) {
		var3 = 1;
		var2 = 0xf;
	}
	unsigned char var4 = data_ov031_02248ecc[var3];
	unsigned char var5 = data_ov031_02248ed0[var2];
	unsigned int var6 = *(unsigned int*)var1;
	*(unsigned int*)var1 = (var6 & 0xfe00ff00u) | var4 | (((unsigned int)var5 << 23) >> 7);
}

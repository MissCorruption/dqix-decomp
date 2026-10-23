#include <globaldefs.h>

// USA: func_ov031_0220b148
extern "C" ARM unsigned int func_ov031_0220b148(unsigned int arg0, unsigned int* arg1) {
	unsigned int var0 = arg1[(arg0 + 13) & 0xf];
	unsigned int var1 = arg1[arg0 ^ 8];
	unsigned int var2 = arg1[(arg0 + 2) & 0xf];
	unsigned int var3 = arg1[arg0];
	unsigned int var4 = var3 ^ (var2 ^ (var0 ^ var1));
	unsigned int var5 = (var4 << 1) | (var4 >> 31);
	arg1[arg0] = var5;
	return var5;
}

#include <globaldefs.h>

// USA: func_ov031_02207e90
extern "C" ARM int func_ov031_02207e90(unsigned char* arg0, int arg1) {
	unsigned char var0 = arg0[1];
	unsigned char var1 = *arg0;
	arg0 += 2;
	unsigned int var2 = var1 * 10 + var0 - 0x210;
	int var3;
	if (arg1 == 0x17) {
		if (var2 < 50) {
			var3 = var2 + 0x7d0;
		} else {
			var3 = var2 + 0x36c + 0x400;
		}
	} else {
		unsigned char var4 = arg0[1];
		unsigned char var5 = *arg0;
		arg0 += 2;
		int var6 = var5 * 10 + var4 - 0x210;
		var3 = var2 * 100 + var6;
	}
	unsigned char var7 = arg0[1];
	unsigned char var8 = arg0[0];
	unsigned char var9 = arg0[3];
	unsigned char var10 = arg0[2];
	int var11 = var8 * 10 + var7 - 0x210;
	int var12 = (var3 << 16) + (var11 << 8);
	int var13 = var10 * 10 + var9 - 0x210;
	return var12 + var13;
}

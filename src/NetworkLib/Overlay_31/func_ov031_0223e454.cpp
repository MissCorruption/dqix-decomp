#include <globaldefs.h>

extern "C" ARM int func_ov031_0223e38c(unsigned char* arg0, const signed char* arg1, int arg2);
extern const signed char data_ov031_022493c4[];

// USA: func_ov031_0223e454
extern "C" ARM int func_ov031_0223e454(unsigned char* arg0, const signed char* arg1, int arg2) {
	unsigned char var0[3];
	int var1 = 0;
	int var2 = func_ov031_0223e38c(var0, arg1, arg2 > 3 ? 3 : arg2);
	if (var2 > 0) {
		do {
			if (arg2 < 3) var0[2] = 0;
			if (arg2 < 2) var0[1] = 0;
			unsigned char var3 = var0[0];
			unsigned char var4 = var0[1];
			unsigned char var5 = var0[2];
			int var6 = (var3 >> 2) & 0xff;
			int var7 = ((var3 << 4) | (var4 >> 4)) & 0x3f;
			int var8 = ((var4 << 2) | (var5 >> 6)) & 0x3f;
			int var9 = var5 & 0x3f;
			arg0[0] = data_ov031_022493c4[var6];
			arg0[1] = data_ov031_022493c4[var7];
			arg0[2] = var2 > 1 ? data_ov031_022493c4[var8] : '*';
			arg1 += var2;
			var1 += 4;
			arg0[3] = var2 > 2 ? data_ov031_022493c4[var9] : '*';
			arg0 += 4;
			arg2 -= var2;
		} while (arg2 != 0 && (var2 = func_ov031_0223e38c(var0, arg1, arg2 > 3 ? 3 : arg2)) > 0);
	}
	*arg0 = 0;
	return var1;
}

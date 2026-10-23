#include <globaldefs.h>

// USA: func_ov031_0221b19c
extern "C" ARM void func_ov031_0221b19c(int arg0, unsigned char *arg1) {
	unsigned int var0 = ~0u;
	unsigned int var1 = var0 ^ (var0 >> arg0);
	int var2 = 0;
	int var3 = 0;
	do {
		arg1[var2] = var1 >> (0x18 - var3);
		var2++;
		var3 += 8;
	} while (var2 < 4);
}

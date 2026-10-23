#include <globaldefs.h>

extern unsigned char* data_ov031_02290c98;
extern "C" ARM void func_ov031_0222df84(void);

// USA: func_ov031_0222e1ac
extern "C" ARM void func_ov031_0222e1ac(void) {
	unsigned char* var0;
	int var1 = 0;
	int var2;
	int var3 = 0;
	do {
		var0 = data_ov031_02290c98 + 8 + var3;
		var2 = 0;
		do {
			unsigned char var4 = var0[var2];
			if (var4 != 0x30 && var4 != 0x20 && var4 != 0) break;
			var0[var2] = (var2 == 2) ? 0x30 : 0x20;
			var2++;
		} while (var2 < 3);
		var1++;
		var3 += 3;
	} while (var1 < 4);
	func_ov031_0222df84();
}

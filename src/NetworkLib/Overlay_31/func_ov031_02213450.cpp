#include <globaldefs.h>

extern "C" unsigned char* func_ov031_022133f8(int arg0);
extern "C" unsigned int func_ov031_022135ac(unsigned int arg0);

// USA: func_ov031_02213450
extern "C" ARM void func_ov031_02213450(unsigned char arg0) {
	unsigned char *var0, *var1;
	var0 = func_ov031_022133f8(1);
	var1 = func_ov031_022133f8(0x10);
	var0[9] = arg0;
	if (arg0 >= 0x10) return;
	unsigned char var2 = var0[0x16];
	if (arg0 > var2) {
		var0[0x16] = arg0;
		if (arg0 > 7) {
			var0[0x15] = (unsigned char)func_ov031_022135ac(var1[0xd0d]);
			unsigned char var3 = var1[0xd13];
			unsigned char* var4 = var1 + (var3 << 2);
			var0[0x14] = var4[0x444];
		}
	}
}

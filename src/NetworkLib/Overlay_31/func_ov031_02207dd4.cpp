#include <globaldefs.h>

// USA: func_ov031_02207dd4
extern "C" ARM int func_ov031_02207dd4(unsigned char** arg0) {
	unsigned char* var0 = *arg0;
	unsigned char var1 = *var0++;
	int var2 = var1;
	if (var1 & 0x80) {
		int var3 = var1 & 0x7f;
		int var4 = var3 - 1;
		var2 = 0;
		if (var3 != 0) {
			do {
				if (var2 & 0xff000000) {
					return -1;
				}
				var2 = *var0++ + (var2 << 8);
			} while (var4-- != 0);
		}
	}
	*arg0 = var0;
	return var2;
}

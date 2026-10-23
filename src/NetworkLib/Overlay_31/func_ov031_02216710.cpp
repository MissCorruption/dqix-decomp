#include <globaldefs.h>

// USA: func_ov031_02216710
extern "C" ARM int func_ov031_02216710(unsigned char *arg0) {
	int var0 = 0;
	do {
		unsigned char var1 = arg0[var0];
		if (var1 < 0x20 || var1 > 0x7e) return 0;
		var0++;
	} while (var0 < 0xa);
	return 1;
}

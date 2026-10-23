#include <globaldefs.h>

// USA: func_ov031_0221b258
extern "C" ARM int func_ov031_0221b258(unsigned char *arg0) {
	unsigned char var0 = *arg0;
	if (var0 == 0x7f) return 0;
	if (var0 < 1) return 0;
	return var0 <= 0xdf;
}

#include <globaldefs.h>

// USA: func_ov031_022155e8
extern "C" ARM unsigned int func_ov031_022155e8(unsigned char *arg0) {
	unsigned int var0 = 0;
	var0 |= arg0[0] << 0x18;
	var0 |= arg0[1] << 0x10;
	var0 |= arg0[2] << 8;
	var0 |= arg0[3];
	return ((var0 >> 0x18) & 0xff) | ((var0 >> 8) & 0xff00) | ((var0 << 8) & 0xff0000) | ((var0 << 0x18) & 0xff000000);
}

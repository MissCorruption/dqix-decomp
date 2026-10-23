#include <globaldefs.h>

// USA: func_ov016_0218d2bc
extern "C" ARM unsigned short func_ov016_0218d2bc(void) {
	unsigned short var0 = *(volatile unsigned short*)0x4000130;
	unsigned short var1 = *(volatile unsigned short*)0x27fffa8;
	return (unsigned short)(((var0 | var1) ^ 0x2fff) & 0x2fff);
}

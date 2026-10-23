#include <globaldefs.h>

// USA: func_ov031_0223cbbc
extern "C" ARM void func_ov031_0223cbbc(int arg0, int arg1) {
	if (arg0 == 1) {
		unsigned int var0 = ~arg1;
		unsigned int var1 = *(volatile unsigned int*)0x4001000 & 0x1f00;
		unsigned int var2 = *(volatile unsigned int*)0x4001000 & ~0x1f00;
		*(volatile unsigned int*)0x4001000 = var2 | ((var0 & (var1 >> 8)) << 8);
	} else {
		unsigned int var3 = *(volatile unsigned int*)0x4000000 & 0x1f00;
		unsigned int var4 = *(volatile unsigned int*)0x4000000 & ~0x1f00;
		unsigned int var5 = ~arg1;
		*(volatile unsigned int*)0x4000000 = var4 | ((var5 & (var3 >> 8)) << 8);
	}
}

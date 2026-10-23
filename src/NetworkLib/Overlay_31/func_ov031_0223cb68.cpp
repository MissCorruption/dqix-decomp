#include <globaldefs.h>

// USA: func_ov031_0223cb68
extern "C" ARM void func_ov031_0223cb68(int arg0, int arg1) {
	if (arg0 == 1) {
		unsigned int var0 = *(volatile unsigned int*)0x4001000 & 0x1f00;
		unsigned int var1 = *(volatile unsigned int*)0x4001000 & ~0x1f00;
		*(volatile unsigned int*)0x4001000 = var1 | ((arg1 | (var0 >> 8)) << 8);
	} else {
		unsigned int var2 = *(volatile unsigned int*)0x4000000 & 0x1f00;
		unsigned int var3 = *(volatile unsigned int*)0x4000000 & ~0x1f00;
		*(volatile unsigned int*)0x4000000 = var3 | ((arg1 | (var2 >> 8)) << 8);
	}
}

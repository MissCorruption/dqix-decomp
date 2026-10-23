#include <globaldefs.h>

extern "C" void func_ov001_0215b598(int arg0);

// USA: func_ov001_0215b560
extern "C" ARM int func_ov001_0215b560(void) {
	volatile unsigned short* var0 = (volatile unsigned short*)0x4000304;
	int var1 = (*var0 & 0x8000) >> 0xf;
	if (!var1) {
		func_ov001_0215b598(1);
	} else {
		func_ov001_0215b598(0);
	}
	return 1;
}

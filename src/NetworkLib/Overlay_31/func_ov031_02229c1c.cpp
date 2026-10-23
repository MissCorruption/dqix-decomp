#include <globaldefs.h>

// USA: func_ov031_02229c1c
extern "C" ARM void func_ov031_02229c1c(void) {
	volatile unsigned short* var0 = (volatile unsigned short*)0x4000008;
	volatile unsigned short* var1 = (volatile unsigned short*)0x4001008;
	volatile unsigned short* var2 = (volatile unsigned short*)0x400000a;
	*var1 = (*var1 & ~3) | 3;
	*(var1 + 1) = (*(var1 + 1) & ~3) | 3;
	*var0 = (*var0 & ~3) | 3;
	*var2 = (*var2 & ~3) | 3;
	*(var2 + 1) = (*(var2 + 1) & ~3) | 3;
}

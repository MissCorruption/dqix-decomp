#include <globaldefs.h>

extern "C" void func_ov031_02231ab0(void);
extern "C" void func_ov031_022274c0(int);
extern unsigned char data_ov031_02290cb4;

// USA: func_ov031_02231b5c
extern "C" ARM void func_ov031_02231b5c(void) {
	int var0 = data_ov031_02290cb4 + 1;
	unsigned int var1 = var0 & 0xff;
	data_ov031_02290cb4 = var0;
	if (var1 < 0x78) {
		return;
	}
	func_ov031_022274c0((int)func_ov031_02231ab0);
}

#include <globaldefs.h>

extern unsigned char data_ov031_02290cdc;
extern "C" void func_ov031_022274c0(int);
extern "C" void func_ov031_02234440(void);

// USA: func_ov031_022344ec
extern "C" ARM void func_ov031_022344ec(void) {
	unsigned char var0 = ++data_ov031_02290cdc;
	if (var0 < 0x78) return;
	func_ov031_022274c0((int)func_ov031_02234440);
}

#include <globaldefs.h>

extern "C" void func_ov031_02223720(int, int, int, int);
extern unsigned char data_ov031_02290c8c;
extern unsigned short data_ov031_02248e84[];
extern unsigned short data_ov031_02248e86[];
extern unsigned short data_ov031_02248e88[];

// USA: func_ov031_0222c8cc
extern "C" ARM void func_ov031_0222c8cc(void) {
	unsigned int var0 = data_ov031_02290c8c;
	int var1 = (var0 < 4) ? 2 : 3;
	func_ov031_02223720(var1, data_ov031_02248e84[var0 * 4], data_ov031_02248e88[var0 * 4], data_ov031_02248e86[var0 * 4]);
}

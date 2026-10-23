#include <globaldefs.h>

extern "C" unsigned char func_ov031_02225c24(void);
extern "C" void func_ov031_022274c0(int);
extern "C" void func_ov031_0222da50(void);

// USA: func_ov031_0222da30
extern "C" ARM void func_ov031_0222da30(void) {
	if (func_ov031_02225c24() == 0x1f) return;
	func_ov031_022274c0((int)func_ov031_0222da50);
}

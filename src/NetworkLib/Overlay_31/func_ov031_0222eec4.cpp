#include <globaldefs.h>

extern "C" int func_ov031_0223c054(int);
extern "C" ARM void func_ov031_022274c0(int);
extern "C" void func_ov031_0222eef8(void);

// USA: func_ov031_0222eec4
extern "C" ARM void func_ov031_0222eec4(void) {
	if (func_ov031_0223c054(1) != 0) return;
	if (func_ov031_0223c054(0) != 0) return;
	func_ov031_022274c0((int)func_ov031_0222eef8);
}

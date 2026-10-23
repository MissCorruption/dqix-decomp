#include <globaldefs.h>

extern "C" int func_ov031_02222e0c(void);
extern "C" int func_ov031_02227840(void);
extern "C" void func_ov031_02222e80(void);
extern "C" void func_ov031_022274c0(int);
extern "C" void func_ov031_0222a4f0(void);

// USA: func_ov031_0222a4bc
extern "C" ARM void func_ov031_0222a4bc(void) {
	if (func_ov031_02222e0c() == -2) return;
	if (func_ov031_02227840() == 0) return;
	func_ov031_02222e80();
	func_ov031_022274c0((int)func_ov031_0222a4f0);
}

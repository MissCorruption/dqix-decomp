#include <globaldefs.h>

extern "C" int func_ov031_0223d354(int);
extern "C" void func_ov031_02222e20(int);

// USA: func_ov031_0222e8a4
extern "C" ARM void func_ov031_0222e8a4(void) {
	if (func_ov031_0223d354(1) == 0) return;
	func_ov031_02222e20(0);
}

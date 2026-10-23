#include <globaldefs.h>

extern "C" int func_ov031_0223d354(int);
extern "C" void func_ov031_02222e20(int);

// USA: func_ov031_022346e4
extern "C" ARM void func_ov031_022346e4(void) {
	if (func_ov031_0223d354(1)) {
		func_ov031_02222e20(1);
	}
	if (func_ov031_0223d354(2) == 0) return;
	func_ov031_02222e20(0);
}

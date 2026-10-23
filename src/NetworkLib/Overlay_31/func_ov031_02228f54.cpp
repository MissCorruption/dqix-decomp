#include <globaldefs.h>

extern "C" ARM int func_ov031_02222e0c(void);
extern "C" void func_ov031_02236878(int);
extern "C" ARM void func_ov031_022274c0(int);
extern "C" ARM void func_ov031_02228f7c(void);

// USA: func_ov031_02228f54
extern "C" ARM void func_ov031_02228f54(void) {
	if (func_ov031_02222e0c() != 0) {
		return;
	}
	func_ov031_02236878(7);
	func_ov031_022274c0((int)func_ov031_02228f7c);
}

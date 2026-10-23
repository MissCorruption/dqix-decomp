#include <globaldefs.h>

extern "C" int func_ov031_0223c054(int);
extern "C" void func_ov031_02223568(int);
extern "C" void func_ov031_022274c0(int);
extern "C" void func_ov031_022286f4(void);

// USA: func_ov031_022286b8
extern "C" ARM void func_ov031_022286b8(void) {
	if (func_ov031_0223c054(1) != 0) return;
	if (func_ov031_0223c054(0) != 0) return;
	func_ov031_02223568(3);
	func_ov031_022274c0((int)func_ov031_022286f4);
}

#include <globaldefs.h>

extern "C" int func_ov031_02237eb0(void);
extern "C" ARM void func_ov031_02222e80(void);
extern "C" ARM void func_ov031_02235204(void);
extern "C" ARM void func_ov031_022274c0(int);
extern "C" ARM int func_ov031_0222bb44(void);

// USA: func_ov031_0222cbb8
extern "C" ARM void func_ov031_0222cbb8(void) {
	if (func_ov031_02237eb0() != 0) {
		return;
	}
	func_ov031_02222e80();
	func_ov031_02235204();
	func_ov031_022274c0((int)func_ov031_0222bb44);
}

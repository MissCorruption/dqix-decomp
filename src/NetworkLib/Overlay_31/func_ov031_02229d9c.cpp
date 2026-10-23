#include <globaldefs.h>

extern "C" int func_ov031_0223c054(int);
extern "C" int func_ov031_02222ddc(void);
extern "C" int func_ov031_0223c078(int, int, int, int);
extern "C" void func_ov031_022274c0(int);
extern "C" void func_ov031_02229dd8(void);

// USA: func_ov031_02229d9c
extern "C" ARM void func_ov031_02229d9c(void) {
	if (func_ov031_0223c054(1) != 0) return;
	func_ov031_02222ddc();
	func_ov031_0223c078(3, 0, 0x15, 8);
	func_ov031_022274c0((int)func_ov031_02229dd8);
}

#include <globaldefs.h>

extern "C" int func_ov031_0223c054(int);
extern "C" void* func_ov031_0223c7c4(int);
extern "C" void func_ov031_02223440(void);
extern "C" void func_ov031_0223cbbc(int, int);
extern "C" void func_ov031_022274d0(int, int);
extern "C" void func_ov031_022274c0(int);
extern "C" void func_ov031_0222905c(void);

// USA: func_ov031_0222a2c4
extern "C" ARM void func_ov031_0222a2c4(void) {
	if (func_ov031_0223c054(1) != 0) {
		return;
	}
	if (func_ov031_0223c054(0) != 0) {
		return;
	}
	func_ov031_0223c7c4(0);
	func_ov031_02223440();
	func_ov031_0223cbbc(1, 1);
	func_ov031_0223cbbc(0, 0x15);
	func_ov031_022274d0(0, 1);
	func_ov031_022274c0((int)func_ov031_0222905c);
}

#include <globaldefs.h>

extern "C" signed char func_ov031_02237e9c(void);
extern "C" void func_ov031_02236878(int);
extern "C" void func_ov031_02237e58(void);
extern "C" void func_ov031_022274c0(int);
extern "C" void func_ov031_02231968(void);

// USA: func_ov031_0223193c
extern "C" ARM void func_ov031_0223193c(void) {
	if (func_ov031_02237e9c() != 0) {
		return;
	}
	func_ov031_02236878(6);
	func_ov031_02237e58();
	func_ov031_022274c0((int)func_ov031_02231968);
}

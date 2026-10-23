#include <globaldefs.h>

extern "C" int func_ov031_02237eb0(void);
extern "C" ARM void func_ov031_022274c0(int);
extern "C" ARM void func_ov031_02231df8(void);

// USA: func_ov031_02232004
extern "C" ARM void func_ov031_02232004(void) {
	if (func_ov031_02237eb0() != 0) {
		return;
	}
	func_ov031_022274c0((int)func_ov031_02231df8);
}

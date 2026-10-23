#include <globaldefs.h>

extern "C" void func_ov031_02231080(void);
extern "C" void func_ov031_02231084(void);
extern "C" int func_ov031_02237eb0(void);
extern "C" ARM void func_ov031_022274c0(int);
extern "C" void func_ov031_02231088(void);

// USA: func_ov031_02231058
extern "C" ARM void func_ov031_02231058(void) {
	func_ov031_02231080();
	func_ov031_02231084();
	if (func_ov031_02237eb0() != 0) {
		return;
	}
	func_ov031_022274c0((int)func_ov031_02231088);
}

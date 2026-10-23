#include <globaldefs.h>

extern "C" ARM void func_ov031_02222e98(void);
extern "C" void func_ov031_0223c278(int);
extern "C" ARM void func_ov031_022274c0(int);
extern "C" ARM void func_ov031_02231744(void);

// USA: func_ov031_02231724
extern "C" ARM void func_ov031_02231724(void) {
	func_ov031_02222e98();
	func_ov031_0223c278(8);
	func_ov031_022274c0((int)func_ov031_02231744);
}

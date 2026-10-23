#include <globaldefs.h>

extern "C" unsigned char func_ov031_0223c054(int arg0);
extern "C" int func_ov031_02223568(void* arg0);
extern "C" void func_ov031_022274c0(int arg0);
extern "C" void func_ov031_0223125c(void);

// USA: func_ov031_02231230
extern "C" ARM void func_ov031_02231230(void) {
	if (func_ov031_0223c054(0) != 0) return;
	func_ov031_02223568((void*)1);
	func_ov031_022274c0((int)func_ov031_0223125c);
}

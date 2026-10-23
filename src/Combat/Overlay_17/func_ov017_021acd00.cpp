#include <globaldefs.h>

extern "C" int func_020421a0(void);
extern "C" void func_0204359c(void* arg0, int arg1);
extern "C" void func_020439b0(void* arg0, int arg1);

// USA: func_ov017_021acd00
extern "C" ARM void func_ov017_021acd00(void*) {
	void* var0 = (void*)func_020421a0();
	func_0204359c(var0, 2);
	func_020439b0(var0, 0);
}

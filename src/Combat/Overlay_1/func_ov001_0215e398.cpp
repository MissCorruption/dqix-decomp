#include <globaldefs.h>

extern "C" int func_020421a0(void);
extern "C" void func_02043124(char* arg0);
extern "C" void func_02043204(char* arg0);

// USA: func_ov001_0215e398
extern "C" ARM int func_ov001_0215e398(void) {
	int var0 = func_020421a0();
	func_02043124((char*)var0);
	func_02043204((char*)var0);
	return 1;
}

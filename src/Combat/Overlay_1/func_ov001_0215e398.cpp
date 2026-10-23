#include <globaldefs.h>

extern "C" int func_020421a0(void);
extern "C" void func_02043124(char* obj);
extern "C" void func_02043204(char* obj);

// USA: func_ov001_0215e398
extern "C" ARM int func_ov001_0215e398(void) {
	int v = func_020421a0();
	func_02043124((char*)v);
	func_02043204((char*)v);
	return 1;
}

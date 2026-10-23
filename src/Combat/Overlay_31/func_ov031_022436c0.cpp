#include <globaldefs.h>

extern "C" int func_ov031_02243850(void*);
extern "C" void func_ov031_022439d8(void*);

// USA: func_ov031_022436c0
extern "C" ARM void func_ov031_022436c0(void* arg0) {
	if (func_ov031_02243850(arg0) < 0) {
		func_ov031_022439d8(arg0);
	}
}

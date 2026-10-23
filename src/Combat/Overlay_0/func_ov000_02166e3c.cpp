#include <globaldefs.h>

extern "C" void func_ov000_02160fa8(void* arg0, int arg1);

// USA: func_ov000_02166e3c
extern "C" ARM void func_ov000_02166e3c(void* arg0) {
	func_ov000_02160fa8(arg0, 2);
	func_ov000_02160fa8(arg0, 4);
}

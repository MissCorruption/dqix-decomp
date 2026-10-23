#include <globaldefs.h>

extern "C" void func_ov001_02157908(void*);

// USA: func_ov001_02159408
extern "C" ARM int func_ov001_02159408(void* arg0, char* arg1) {
	func_ov001_02157908(arg1 + 0x11c);
	return 0;
}

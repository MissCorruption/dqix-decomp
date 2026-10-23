#include <globaldefs.h>

extern "C" void func_ov031_0220bab8(void* arg0, void* arg1, int arg2);

// USA: func_ov031_022093f4
extern "C" ARM int func_ov031_022093f4(void* arg0, void* arg1, int arg2) {
	func_ov031_0220bab8((char*)arg0 + 0x1e0, arg1, arg2);
	return arg2;
}

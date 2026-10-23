#include <globaldefs.h>

extern "C" void func_ov001_0215b074(int arg0, int arg1, int arg2);

// USA: func_ov001_0215b6f4
extern "C" ARM int func_ov001_0215b6f4(int arg0, int arg1) {
	func_ov001_0215b074(0x10, arg0, arg1);
	return 1;
}

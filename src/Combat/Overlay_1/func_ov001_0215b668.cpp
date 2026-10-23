#include <globaldefs.h>

extern "C" void func_ov001_0215b074(int arg0, int arg1, int arg2);

// USA: func_ov001_0215b668
extern "C" ARM int func_ov001_0215b668(int arg0, int arg1) {
	func_ov001_0215b074(11, arg0, arg1);
	return 1;
}

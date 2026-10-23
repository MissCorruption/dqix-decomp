#include <globaldefs.h>

extern "C" void func_ov031_02239368(int arg0);
extern "C" void func_ov031_022393e4(int arg0);

// USA: func_ov031_02239b64
extern "C" ARM void func_ov031_02239b64(unsigned short* arg0) {
	if (arg0[1] != 0) {
		func_ov031_02239368(9);
		func_ov031_022393e4(arg0[1]);
		return;
	}
	func_ov031_02239368(1);
}

#include <globaldefs.h>

extern "C" int func_ov031_02239368(int);
extern "C" void func_ov031_02239984(void);
extern "C" int func_020d5aec(int arg0);
extern "C" void func_ov031_022393e4(int arg0);

// USA: func_ov031_02239954
extern "C" ARM int func_ov031_02239954(void) {
	func_ov031_02239368(3);
	int var0 = func_020d5aec((int)func_ov031_02239984);
	if (var0 == 2) {
		return 1;
	}
	func_ov031_022393e4(var0);
	return 0;
}

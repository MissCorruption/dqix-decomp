#include <globaldefs.h>

extern "C" char* func_ov031_022133f8(int);
extern "C" int func_ov031_02218fa0(void*);
extern "C" void func_ov031_022134cc(int);

// USA: func_ov031_0221544c
extern "C" ARM int func_ov031_0221544c(void) {
	if (!func_ov031_02218fa0(func_ov031_022133f8(8))) return 0xe;
	func_ov031_022134cc(3);
	return 0x11;
}

#include <globaldefs.h>

#if defined(jpn)
#define func_020ca408 func_020cbed4
#endif

extern "C" char* func_ov031_022133f8(int);
extern "C" void func_020ca408(void*, void*, int);

// USA: func_ov031_02213204
extern "C" ARM void func_ov031_02213204(int arg0, void *arg1) {
	char *var0 = func_ov031_022133f8(0x10);
	func_020ca408(arg1, var0 + (arg0 << 8), 0xf0);
}

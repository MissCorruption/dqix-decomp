#include <globaldefs.h>

extern "C" int func_ov031_0223da38(int arg0);
extern "C" int func_ov031_0223bdb0(int, int, int);

// USA: func_ov031_0223be44
extern "C" ARM int func_ov031_0223be44(int arg0, int arg1) {
	int var0 = func_ov031_0223da38(arg0);
	func_ov031_0223bdb0(arg0, arg1, var0);
	return var0;
}

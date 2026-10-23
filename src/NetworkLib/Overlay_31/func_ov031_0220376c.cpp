#include <globaldefs.h>

extern "C" int func_ov031_022036a8(int, int, int, int);

// USA: func_ov031_0220376c
extern "C" ARM int func_ov031_0220376c(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5) {
	int var0 = func_ov031_022036a8(arg0, arg1, arg4, arg5);
	if (var0 != 0 && arg3 != 0) {
		return func_ov031_022036a8(arg2, arg3, arg4, 0);
	}
	return var0;
}

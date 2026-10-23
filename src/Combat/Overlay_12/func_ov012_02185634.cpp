#include <globaldefs.h>

extern "C" int func_02001aec(void*, int, int);

// USA: func_ov012_02185634
extern "C" ARM int func_ov012_02185634(void *arg0, void *arg1, int arg2, int arg3, int arg4) {
	int var0 = 0;
	while (var0 < arg4) {
		if (func_02001aec(arg1, arg2, arg3) == 0) {
			return 1;
		}
		var0++;
		arg2++;
	}
	return 0;
}

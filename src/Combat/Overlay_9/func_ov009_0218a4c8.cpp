#include <globaldefs.h>
extern "C" int func_02001aec(int arg0, int arg1, int arg2);

// USA: func_ov009_0218a4c8
extern "C" ARM int func_ov009_0218a4c8(int arg0, int arg1, int arg2, int arg3, int arg4) {
	int var0;
	for (var0 = 0; var0 < arg4; var0++, arg2++) {
		if (func_02001aec(arg1, arg2, arg3) == 0) {
			return 1;
		}
	}
	return 0;
}

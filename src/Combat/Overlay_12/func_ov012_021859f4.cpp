#include <globaldefs.h>

// USA: func_ov012_021859f4
extern "C" ARM int func_ov012_021859f4(void *arg0, unsigned char *arg1, int arg2, int arg3) {
	int var0 = 0;
	while (var0 < arg2) {
		if (*arg1 == arg3) {
			return 1;
		}
		var0++;
		arg1++;
	}
	return 0;
}

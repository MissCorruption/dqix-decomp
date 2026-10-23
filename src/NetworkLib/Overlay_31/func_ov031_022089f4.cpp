#include <globaldefs.h>

// USA: func_ov031_022089f4
extern "C" ARM int func_ov031_022089f4(unsigned char* arg0, int arg1, int arg2, unsigned int arg3) {
	int var0 = 0;
	if (arg1 > 0) {
		do {
			unsigned int var1 = (arg0[0] << 8) + arg0[1];
			if (arg2 == 3) {
				var1 = (var1 << 8) + arg0[2];
			}
			if (var1 == arg3) {
				return 1;
			}
			var0++;
			arg0 += arg2;
		} while (var0 < arg1);
	}
	return 0;
}

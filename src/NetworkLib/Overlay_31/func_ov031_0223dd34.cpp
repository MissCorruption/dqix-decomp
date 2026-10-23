#include <globaldefs.h>

// USA: func_ov031_0223dd34
extern "C" ARM int func_ov031_0223dd34(unsigned char* arg0, int arg1) {
	int var0 = 0;
	if (arg1 > 0) {
		do {
			if (arg0[var0] == 0) {
				break;
			}
			var0++;
		} while (var0 < arg1);
	}
	return var0;
}

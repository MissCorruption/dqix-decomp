#include <globaldefs.h>

// USA: func_ov031_0221b1cc
extern "C" ARM int func_ov031_0221b1cc(unsigned char* arg0) {
	int var0 = 0;
	do {
		if (arg0[var0] != 0) return 1;
		var0++;
	} while (var0 < 32);
	return 0;
}

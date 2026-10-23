#include <globaldefs.h>

// USA: func_ov031_022093d0
extern "C" ARM void func_ov031_022093d0(unsigned char *arg0) {
	int var0 = 8;
	do {
		unsigned char var1 = *--arg0 + 1;
		*arg0 = var1;
		if (var1 != 0) return;
	} while (--var0 != 0);
}

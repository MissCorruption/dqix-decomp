#include <globaldefs.h>

// USA: func_ov031_0223dd60
extern "C" ARM int func_ov031_0223dd60(unsigned short* arg0, unsigned char* arg1, int arg2) {
	int var0 = arg2 - 1;
	int var1 = 0;
	if (var0 > 0) {
		do {
			unsigned char var2 = arg1[var1];
			if (var2 == 0) break;
			arg0[var1] = var2;
			var1++;
		} while (var1 < var0);
	}
	arg0[var1] = 0;
	return var1;
}

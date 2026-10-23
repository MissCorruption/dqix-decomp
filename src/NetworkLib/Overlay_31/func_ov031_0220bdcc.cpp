#include <globaldefs.h>

// USA: func_ov031_0220bdcc
extern "C" ARM int func_ov031_0220bdcc(unsigned short* arg0, unsigned short* arg1, int arg2) {
	int var0 = arg2 - 1;
	if (var0 >= 0) {
		do {
			unsigned short var1 = arg1[var0];
			unsigned short var2 = arg0[var0];
			if (var2 > var1) return 1;
			if (var2 < var1) return -1;
			var0--;
		} while (var0 >= 0);
	}
	return 0;
}

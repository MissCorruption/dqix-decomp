#include <globaldefs.h>

// USA: func_ov031_0220bd64
extern "C" ARM void func_ov031_0220bd64(unsigned short* arg0, unsigned short* arg1, int arg2, int arg3) {
	int var0 = 0;
	if (arg3 > 0) {
		do {
			int var1 = arg1[var0] - arg2;
			arg0[var0] = (unsigned short)var1;
			arg2 = ((unsigned int)var1 >> 16) & 1;
			if (arg2 == 0) break;
			var0++;
		} while (var0 < arg3);
	}
	if (arg0 == arg1) return;
	var0++;
	if (var0 >= arg3) return;
	do {
		arg0[var0] = arg1[var0];
		var0++;
	} while (var0 < arg3);
}

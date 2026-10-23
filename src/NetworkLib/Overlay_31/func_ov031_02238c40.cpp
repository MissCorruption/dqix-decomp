#include <globaldefs.h>

extern unsigned short* data_ov031_02290d14;
extern "C" int func_ov027_021d8aec(int arg0);

// USA: func_ov031_02238c40
extern "C" ARM int func_ov031_02238c40(void) {
	unsigned short var0;

	if (data_ov031_02290d14[1] == 0) return 0;
	var0 = 1;
	do {
		if (data_ov031_02290d14[1] & (1 << var0)) {
			if (func_ov027_021d8aec(var0) == 0) return 0;
		}
		var0++;
	} while (var0 < 16);
	return 1;
}

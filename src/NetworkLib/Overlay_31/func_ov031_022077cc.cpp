#include <globaldefs.h>

extern "C" int func_ov031_02206ebc(int arg0);

// USA: func_ov031_022077cc
extern "C" ARM int func_ov031_022077cc(int arg0, unsigned int* arg1) {
	int var0 = func_ov031_02206ebc(arg0);
	if (var0 == 0) {
		return 0;
	}
	unsigned int var1 = (unsigned int)var0;
	unsigned int var2 = ((var1 >> 24) & 0xff) | ((var1 >> 8) & 0xff00) | ((var1 << 8) & 0xff0000) | ((var1 << 24) & 0xff000000);
	*arg1 = var2;
	return 1;
}

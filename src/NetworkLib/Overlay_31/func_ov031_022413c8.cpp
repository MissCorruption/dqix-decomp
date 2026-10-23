#include <globaldefs.h>

extern "C" int func_ov031_02207434(int arg0);
void SleepCurrentContext(unsigned int ms);

// USA: func_ov031_022413c8
extern "C" ARM int func_ov031_022413c8(int arg0, int arg1) {
	int var0 = func_ov031_02207434(arg1);
	if (var0 != -0x1a) return var0;
	do {
		SleepCurrentContext(0x1f4);
		var0 = func_ov031_02207434(arg1);
	} while (var0 == -0x1a);
	return var0;
}

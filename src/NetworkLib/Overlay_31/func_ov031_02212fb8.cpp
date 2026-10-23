#include <globaldefs.h>

extern "C" int func_ov031_022134b0(void);
extern "C" int func_ov031_02214358(void);

// USA: func_ov031_02212fb8
extern "C" ARM int func_ov031_02212fb8(void) {
	unsigned int var0 = func_ov031_022134b0();
	if (var0 <= 1) return 0;
	if (var0 < 7) return 1;
	if (var0 == 9) return 4;
	if (var0 < 0xa) return 2;
	if (var0 == 0xb) return 4;
	if (var0 < 0x10) return 3;
	if (var0 == 0x10) return 5;
	if (var0 == 0x11) return 4;
	return func_ov031_02214358();
}

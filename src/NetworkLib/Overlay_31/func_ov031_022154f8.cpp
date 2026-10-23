#include <globaldefs.h>

extern "C" int func_ov031_02206d90(void);
extern "C" int func_ov031_022077c0(void);

// USA: func_ov031_022154f8
extern "C" ARM int func_ov031_022154f8(void) {
	if (func_ov031_02206d90() != 0) {
		return 0xb;
	}
	int var0 = func_ov031_022077c0();
	if (var0 == 0 || var0 == -0x27) {
		return 0x9;
	}
	return 0xb;
}

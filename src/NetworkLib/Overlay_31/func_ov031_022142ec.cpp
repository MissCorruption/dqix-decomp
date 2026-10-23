#include <globaldefs.h>

extern "C" int func_ov031_02206d90(void);
extern "C" int func_ov031_022077c0(void);
extern int data_ov031_022496a4;

// USA: func_ov031_022142ec
extern "C" ARM int func_ov031_022142ec(void) {
	if (data_ov031_022496a4 == 0) {
		return 1;
	}
	if (func_ov031_02206d90() != 0) {
		return 0;
	}
	int var0 = func_ov031_022077c0();
	if (var0 == 0 || var0 == -0x27) {
		return 1;
	}
	return 0;
}

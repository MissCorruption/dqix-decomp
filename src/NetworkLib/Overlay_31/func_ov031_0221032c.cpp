#include <globaldefs.h>

extern "C" int func_ov031_02210ef8(void);
extern "C" int func_ov031_0221042c(int arg0);

// USA: func_ov031_0221032c
extern "C" ARM int func_ov031_0221032c(int arg0) {
	int var0 = -0x38;
	if (func_ov031_02210ef8()) {
		var0 = func_ov031_0221042c(arg0);
	}
	return var0;
}

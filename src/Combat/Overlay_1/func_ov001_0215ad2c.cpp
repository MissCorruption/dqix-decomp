#include <globaldefs.h>

// USA: func_ov001_0215ad2c
extern "C" ARM int func_ov001_0215ad2c(int arg0) {
	if (arg0 < 0) {
		arg0 = 0 - arg0;
		arg0 = arg0 + 0x9f;
	}
	return arg0;
}

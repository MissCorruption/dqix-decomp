#include <globaldefs.h>

// USA: func_ov031_0224130c
extern "C" ARM int func_ov031_0224130c(int arg0) {
	if (arg0 & 0x8000) {
		arg0 &= ~0x8000;
	}
	return arg0;
}

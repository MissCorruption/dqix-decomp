#include <globaldefs.h>

// USA: func_ov003_02155e14
extern "C" ARM int func_ov003_02155e14(int arg0, int arg1) {
	if (arg1 <= 0 || arg1 >= 0xd) {
		return 0;
	}
	return arg0 + (arg1 - 1) * 0x10;
}

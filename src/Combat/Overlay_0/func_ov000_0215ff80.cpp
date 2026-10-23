#include <globaldefs.h>

// USA: func_ov000_0215ff80
extern "C" ARM int func_ov000_0215ff80(char* arg0, int arg1) {
	if (arg1 >= 3) {
		return -1;
	}
	return (arg1 < 0) ? -1 : *(short*)(arg0 + arg1 * 2 + 0xe);
}

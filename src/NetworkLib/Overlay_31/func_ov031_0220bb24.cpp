#include <globaldefs.h>

// USA: func_ov031_0220bb24
extern "C" ARM int func_ov031_0220bb24(unsigned short* arg0, int arg1) {
	while (arg1 != 0 && arg0[arg1 - 1] == 0) {
		arg1--;
	}
	return arg1;
}

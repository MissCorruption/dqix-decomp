#include <globaldefs.h>

// USA: func_ov031_0220868c
extern "C" ARM int func_ov031_0220868c(const char* arg0) {
	const char* var0 = arg0;
	while (*arg0 != '.' && *arg0 != 0) arg0++;
	return arg0 - var0;
}

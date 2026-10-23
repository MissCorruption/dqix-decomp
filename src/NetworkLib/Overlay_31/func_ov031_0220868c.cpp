#include <globaldefs.h>

// USA: func_ov031_0220868c
extern "C" ARM int func_ov031_0220868c(const char* str) {
	const char* orig = str;
	while (*str != '.' && *str != 0) str++;
	return str - orig;
}

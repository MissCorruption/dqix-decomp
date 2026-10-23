#include <globaldefs.h>

// USA: func_ov031_02207e24
extern "C" ARM void func_ov031_02207e24(char* arg0, const char* arg1, int arg2) {
	char* var0 = arg0;
	if (*arg0 != 0) {
		while (*++arg0 != 0) {}
		if ((arg0 - var0) >= 0xff) {
			return;
		}
		*arg0 = ',';
		*(arg0 + 1) = ' ';
		arg0 += 2;
	}
	while (arg2-- != 0 && (arg0 - var0) < 0xff) {
		*arg0++ = *arg1++;
	}
	*arg0 = 0;
}

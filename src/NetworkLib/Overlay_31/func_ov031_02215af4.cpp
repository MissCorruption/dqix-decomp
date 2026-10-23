#include <globaldefs.h>

// USA: func_ov031_02215af4
extern "C" ARM int func_ov031_02215af4(unsigned int arg0) {
	if (arg0 >= 'A' && arg0 <= 'Z') return arg0 - 'A';
	if (arg0 >= 'a' && arg0 <= 'z') return (int)(arg0 - 'a') + 26;
	if (arg0 >= '0' && arg0 <= '9') return (int)(arg0 - '0') + 52;
	if (arg0 == '+') return 62;
	if (arg0 == '/') return 63;
	return (arg0 == '=') ? 0 : -1;
}

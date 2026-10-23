#include <globaldefs.h>

// USA: func_ov001_0215941c
extern "C" ARM int func_ov001_0215941c(char* arg0, char* arg1) {
	*(int*)(arg1 + 0x1dc) = *(int*)(arg0 + 0x10);
	return 0;
}

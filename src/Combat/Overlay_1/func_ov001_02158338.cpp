#include <globaldefs.h>

// USA: func_ov001_02158338
extern "C" ARM int func_ov001_02158338(char* arg0, char* arg1) {
	*(int*)(arg1 + 0x2e0) = *(int*)(arg0 + 0x1c);
	return 0;
}

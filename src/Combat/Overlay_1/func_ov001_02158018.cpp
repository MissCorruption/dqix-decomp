#include <globaldefs.h>

// USA: func_ov001_02158018
extern "C" ARM int func_ov001_02158018(char* arg0, char* arg1) {
	*(int*)(arg1 + 0x68) = *(int*)(arg0 + 0x1c);
	return 0;
}

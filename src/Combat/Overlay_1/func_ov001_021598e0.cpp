#include <globaldefs.h>

// USA: func_ov001_021598e0
extern "C" ARM int func_ov001_021598e0(char* arg0, char* arg1) {
	*(int*)(arg1 + 0x90) = *(int*)(arg0 + 0x10);
	return 0;
}

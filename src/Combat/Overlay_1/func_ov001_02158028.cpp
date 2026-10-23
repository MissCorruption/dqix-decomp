#include <globaldefs.h>

// USA: func_ov001_02158028
extern "C" ARM int func_ov001_02158028(char* arg0, char* arg1) {
	*(int*)(arg1 + 0x6c) = *(int*)(arg0 + 0x1c);
	return 0;
}

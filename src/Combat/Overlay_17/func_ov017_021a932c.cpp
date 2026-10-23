#include <globaldefs.h>

// USA: func_ov017_021a932c
extern "C" ARM void func_ov017_021a932c(void* arg0, int arg1) {
	if (arg1)
		arg1 = 1;
	*(int*)((char*)arg0 + 0x14) = arg1;
}

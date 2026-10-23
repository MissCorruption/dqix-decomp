#include <globaldefs.h>

extern "C" int func_020c7ea0(void* arg0, int* arg1, int arg2);
extern int data_ov031_022918bc;

// USA: func_ov031_022403d8
extern "C" ARM int func_ov031_022403d8(void) {
	int var0;
	return func_020c7ea0(&data_ov031_022918bc, &var0, 1);
}

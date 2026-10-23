#include <globaldefs.h>

extern void* data_02111304;

// USA: func_ov031_02203250
extern "C" ARM void func_ov031_02203250(void) {
	void* var0 = *((void**)&data_02111304 + 1);
	int* var1 = *(int**)((char*)var0 + 0xa4);
	if (var1) *var1 = 0;
}
